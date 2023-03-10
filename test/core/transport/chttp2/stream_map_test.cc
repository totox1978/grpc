//
//
// Copyright 2015 gRPC authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//

#include "src/core/ext/transport/chttp2/transport/stream_map.h"

#include "gtest/gtest.h"

#include <grpc/support/log.h>

#include "test/core/util/test_config.h"

#define LOG_TEST(x) gpr_log(GPR_INFO, "%s", x)

// test creation & destruction
static void test_no_op(void) {
  grpc_chttp2_stream_map map;

  LOG_TEST("test_no_op");

  grpc_chttp2_stream_map_init(&map, 8);
  grpc_chttp2_stream_map_destroy(&map);
}

// test lookup on an empty map
static void test_empty_find(void) {
  grpc_chttp2_stream_map map;

  LOG_TEST("test_empty_find");

  grpc_chttp2_stream_map_init(&map, 8);
  ASSERT_EQ(nullptr, grpc_chttp2_stream_map_find(&map, 39128));
  grpc_chttp2_stream_map_destroy(&map);
}

// test add & lookup
static void test_basic_add_find(uint32_t n) {
  grpc_chttp2_stream_map map;
  uint32_t i;
  size_t got;

  LOG_TEST("test_basic_add_find");
  gpr_log(GPR_INFO, "n = %d", n);

  grpc_chttp2_stream_map_init(&map, 8);
  ASSERT_EQ(0, grpc_chttp2_stream_map_size(&map));
  for (i = 1; i <= n; i++) {
    grpc_chttp2_stream_map_add(&map, i, reinterpret_cast<void*>(i));
  }
  ASSERT_EQ(n, grpc_chttp2_stream_map_size(&map));
  ASSERT_EQ(nullptr, grpc_chttp2_stream_map_find(&map, 0));
  ASSERT_EQ(nullptr, grpc_chttp2_stream_map_find(&map, n + 1));
  for (i = 1; i <= n; i++) {
    got = reinterpret_cast<uintptr_t>(grpc_chttp2_stream_map_find(&map, i));
    ASSERT_EQ(i, got);
  }
  grpc_chttp2_stream_map_destroy(&map);
}

// verify that for_each gets the right values during test_delete_evens_XXX
static void verify_for_each(void* user_data, uint32_t stream_id, void* ptr) {
  uint32_t* for_each_check = static_cast<uint32_t*>(user_data);
  ASSERT_TRUE(ptr);
  ASSERT_EQ(*for_each_check, stream_id);
  *for_each_check += 2;
}

static void check_delete_evens(grpc_chttp2_stream_map* map, uint32_t n) {
  uint32_t for_each_check = 1;
  uint32_t i;
  size_t got;

  ASSERT_EQ(nullptr, grpc_chttp2_stream_map_find(map, 0));
  ASSERT_EQ(nullptr, grpc_chttp2_stream_map_find(map, n + 1));
  for (i = 1; i <= n; i++) {
    if (i & 1) {
      got = reinterpret_cast<uintptr_t>(grpc_chttp2_stream_map_find(map, i));
      ASSERT_EQ(i, got);
    } else {
      ASSERT_EQ(nullptr, grpc_chttp2_stream_map_find(map, i));
    }
  }

  grpc_chttp2_stream_map_for_each(map, verify_for_each, &for_each_check);
  if (n & 1) {
    ASSERT_EQ(for_each_check, n + 2);
  } else {
    ASSERT_EQ(for_each_check, n + 1);
  }
}

// add a bunch of keys, delete the even ones, and make sure the map is
// consistent
static void test_delete_evens_sweep(uint32_t n) {
  grpc_chttp2_stream_map map;
  uint32_t i;

  LOG_TEST("test_delete_evens_sweep");
  gpr_log(GPR_INFO, "n = %d", n);

  grpc_chttp2_stream_map_init(&map, 8);
  for (i = 1; i <= n; i++) {
    grpc_chttp2_stream_map_add(&map, i, reinterpret_cast<void*>(i));
  }
  for (i = 1; i <= n; i++) {
    if ((i & 1) == 0) {
      ASSERT_EQ((void*)(uintptr_t)i, grpc_chttp2_stream_map_delete(&map, i));
    }
  }
  check_delete_evens(&map, n);
  grpc_chttp2_stream_map_destroy(&map);
}

// add a bunch of keys, delete the even ones immediately, and make sure the map
// is consistent
static void test_delete_evens_incremental(uint32_t n) {
  grpc_chttp2_stream_map map;
  uint32_t i;

  LOG_TEST("test_delete_evens_incremental");
  gpr_log(GPR_INFO, "n = %d", n);

  grpc_chttp2_stream_map_init(&map, 8);
  for (i = 1; i <= n; i++) {
    grpc_chttp2_stream_map_add(&map, i, reinterpret_cast<void*>(i));
    if ((i & 1) == 0) {
      grpc_chttp2_stream_map_delete(&map, i);
    }
  }
  check_delete_evens(&map, n);
  grpc_chttp2_stream_map_destroy(&map);
}

// add a bunch of keys, delete old ones after some time, ensure the
// backing array does not grow
static void test_periodic_compaction(uint32_t n) {
  grpc_chttp2_stream_map map;
  uint32_t i;
  uint32_t del;

  LOG_TEST("test_periodic_compaction");
  gpr_log(GPR_INFO, "n = %d", n);

  grpc_chttp2_stream_map_init(&map, 16);
  ASSERT_EQ(map.capacity, 16);
  for (i = 1; i <= n; i++) {
    grpc_chttp2_stream_map_add(&map, i, reinterpret_cast<void*>(i));
    if (i > 8) {
      del = i - 8;
      ASSERT_EQ((void*)(uintptr_t)del,
                grpc_chttp2_stream_map_delete(&map, del));
    }
  }
  ASSERT_EQ(map.capacity, 16);
  grpc_chttp2_stream_map_destroy(&map);
}

TEST(StreamMapTest, MainTest) {
  uint32_t n = 1;
  uint32_t prev = 1;
  uint32_t tmp;

  test_no_op();
  test_empty_find();

  while (n < 100000) {
    test_basic_add_find(n);
    test_delete_evens_sweep(n);
    test_delete_evens_incremental(n);
    test_periodic_compaction(n);

    tmp = n;
    n += prev;
    prev = tmp;
  }
}

int main(int argc, char** argv) {
  grpc::testing::TestEnvironment env(&argc, argv);
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
