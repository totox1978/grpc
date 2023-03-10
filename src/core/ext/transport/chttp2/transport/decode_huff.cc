// Copyright 2022 gRPC authors.
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

////////////////////////////////////////////////////////////////////////////////
// This file is autogenerated: see
// tools/codegen/core/gen_huffman_decompressor.cc

#include <grpc/support/port_platform.h>

#include "src/core/ext/transport/chttp2/transport/decode_huff.h"
namespace grpc_core {
const uint8_t HuffDecoderCommon::table2_0_emit_[10] = {
    0x30, 0x31, 0x32, 0x61, 0x63, 0x65, 0x69, 0x6f, 0x73, 0x74};
const uint8_t HuffDecoderCommon::table2_0_ops_[32] = {
    0x02, 0x06, 0x0a, 0x0e, 0x12, 0x16, 0x1a, 0x1e, 0x22, 0x26, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00};
const uint8_t HuffDecoderCommon::table3_0_emit_[36] = {
    0x30, 0x31, 0x32, 0x61, 0x63, 0x65, 0x69, 0x6f, 0x73, 0x74, 0x20, 0x25,
    0x2d, 0x2e, 0x2f, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3d, 0x41,
    0x5f, 0x62, 0x64, 0x66, 0x67, 0x68, 0x6c, 0x6d, 0x6e, 0x70, 0x72, 0x75};
const uint8_t HuffDecoderCommon::table3_0_ops_[64] = {
    0x01, 0x02, 0x01, 0x06, 0x01, 0x0a, 0x01, 0x0e, 0x01, 0x12, 0x01,
    0x16, 0x01, 0x1a, 0x01, 0x1e, 0x01, 0x22, 0x01, 0x26, 0x2a, 0x2e,
    0x32, 0x36, 0x3a, 0x3e, 0x42, 0x46, 0x4a, 0x4e, 0x52, 0x56, 0x5a,
    0x5e, 0x62, 0x66, 0x6a, 0x6e, 0x72, 0x76, 0x7a, 0x7e, 0x82, 0x86,
    0x8a, 0x8e, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00};
const uint8_t HuffDecoderCommon::table4_0_emit_[22] = {
    0x30, 0x31, 0x32, 0x61, 0x63, 0x65, 0x69, 0x6f, 0x73, 0x74, 0x20,
    0x25, 0x2d, 0x2e, 0x2f, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39};
const uint8_t HuffDecoderCommon::table4_0_ops_[64] = {
    0x01, 0x01, 0x01, 0x02, 0x01, 0x01, 0x01, 0x06, 0x01, 0x01, 0x01,
    0x0a, 0x01, 0x01, 0x01, 0x0e, 0x01, 0x01, 0x01, 0x12, 0x01, 0x01,
    0x01, 0x16, 0x01, 0x01, 0x01, 0x1a, 0x01, 0x01, 0x01, 0x1e, 0x01,
    0x01, 0x01, 0x22, 0x01, 0x01, 0x01, 0x26, 0x01, 0x2a, 0x01, 0x2e,
    0x01, 0x32, 0x01, 0x36, 0x01, 0x3a, 0x01, 0x3e, 0x01, 0x42, 0x01,
    0x46, 0x01, 0x4a, 0x01, 0x4e, 0x01, 0x52, 0x01, 0x56};
const uint8_t HuffDecoderCommon::table4_1_emit_[46] = {
    0x3d, 0x41, 0x5f, 0x62, 0x64, 0x66, 0x67, 0x68, 0x6c, 0x6d, 0x6e, 0x70,
    0x72, 0x75, 0x3a, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a,
    0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56,
    0x57, 0x59, 0x6a, 0x6b, 0x71, 0x76, 0x77, 0x78, 0x79, 0x7a};
const uint8_t HuffDecoderCommon::table4_1_ops_[64] = {
    0x01, 0x02, 0x01, 0x06, 0x01, 0x0a, 0x01, 0x0e, 0x01, 0x12, 0x01,
    0x16, 0x01, 0x1a, 0x01, 0x1e, 0x01, 0x22, 0x01, 0x26, 0x01, 0x2a,
    0x01, 0x2e, 0x01, 0x32, 0x01, 0x36, 0x3a, 0x3e, 0x42, 0x46, 0x4a,
    0x4e, 0x52, 0x56, 0x5a, 0x5e, 0x62, 0x66, 0x6a, 0x6e, 0x72, 0x76,
    0x7a, 0x7e, 0x82, 0x86, 0x8a, 0x8e, 0x92, 0x96, 0x9a, 0x9e, 0xa2,
    0xa6, 0xaa, 0xae, 0xb2, 0xb6, 0x01, 0x01, 0x01, 0x00};
const uint8_t* const HuffDecoderCommon::table4_emit_[2] = {
    table4_0_emit_,
    table4_1_emit_,
};
const uint8_t* const HuffDecoderCommon::table4_ops_[2] = {
    table4_0_ops_,
    table4_1_ops_,
};
const uint8_t HuffDecoderCommon::table1_0_emit_[74] = {
    0x30, 0x31, 0x32, 0x61, 0x63, 0x65, 0x69, 0x6f, 0x73, 0x74, 0x20,
    0x25, 0x2d, 0x2e, 0x2f, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39,
    0x3d, 0x41, 0x5f, 0x62, 0x64, 0x66, 0x67, 0x68, 0x6c, 0x6d, 0x6e,
    0x70, 0x72, 0x75, 0x3a, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48,
    0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53,
    0x54, 0x55, 0x56, 0x57, 0x59, 0x6a, 0x6b, 0x71, 0x76, 0x77, 0x78,
    0x79, 0x7a, 0x26, 0x2a, 0x2c, 0x3b, 0x58, 0x5a};
const uint16_t HuffDecoderCommon::table1_0_inner_[76] = {
    0x0005, 0x0045, 0x0085, 0x00c5, 0x0105, 0x0145, 0x0185, 0x01c5, 0x0205,
    0x0245, 0x0286, 0x02c6, 0x0306, 0x0346, 0x0386, 0x03c6, 0x0406, 0x0446,
    0x0486, 0x04c6, 0x0506, 0x0546, 0x0586, 0x05c6, 0x0606, 0x0646, 0x0686,
    0x06c6, 0x0706, 0x0746, 0x0786, 0x07c6, 0x0806, 0x0846, 0x0886, 0x08c6,
    0x0907, 0x0947, 0x0987, 0x09c7, 0x0a07, 0x0a47, 0x0a87, 0x0ac7, 0x0b07,
    0x0b47, 0x0b87, 0x0bc7, 0x0c07, 0x0c47, 0x0c87, 0x0cc7, 0x0d07, 0x0d47,
    0x0d87, 0x0dc7, 0x0e07, 0x0e47, 0x0e87, 0x0ec7, 0x0f07, 0x0f47, 0x0f87,
    0x0fc7, 0x1007, 0x1047, 0x1087, 0x10c7, 0x1108, 0x1148, 0x1188, 0x11c8,
    0x1208, 0x1248, 0x0018, 0x0028};
const uint8_t HuffDecoderCommon::table1_0_outer_[256] = {
    0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  2,  2,  2,
    2,  2,  2,  2,  2,  3,  3,  3,  3,  3,  3,  3,  3,  4,  4,  4,  4,  4,  4,
    4,  4,  5,  5,  5,  5,  5,  5,  5,  5,  6,  6,  6,  6,  6,  6,  6,  6,  7,
    7,  7,  7,  7,  7,  7,  7,  8,  8,  8,  8,  8,  8,  8,  8,  9,  9,  9,  9,
    9,  9,  9,  9,  10, 10, 10, 10, 11, 11, 11, 11, 12, 12, 12, 12, 13, 13, 13,
    13, 14, 14, 14, 14, 15, 15, 15, 15, 16, 16, 16, 16, 17, 17, 17, 17, 18, 18,
    18, 18, 19, 19, 19, 19, 20, 20, 20, 20, 21, 21, 21, 21, 22, 22, 22, 22, 23,
    23, 23, 23, 24, 24, 24, 24, 25, 25, 25, 25, 26, 26, 26, 26, 27, 27, 27, 27,
    28, 28, 28, 28, 29, 29, 29, 29, 30, 30, 30, 30, 31, 31, 31, 31, 32, 32, 32,
    32, 33, 33, 33, 33, 34, 34, 34, 34, 35, 35, 35, 35, 36, 36, 37, 37, 38, 38,
    39, 39, 40, 40, 41, 41, 42, 42, 43, 43, 44, 44, 45, 45, 46, 46, 47, 47, 48,
    48, 49, 49, 50, 50, 51, 51, 52, 52, 53, 53, 54, 54, 55, 55, 56, 56, 57, 57,
    58, 58, 59, 59, 60, 60, 61, 61, 62, 62, 63, 63, 64, 64, 65, 65, 66, 66, 67,
    67, 68, 69, 70, 71, 72, 73, 74, 75};
const uint8_t HuffDecoderCommon::table8_0_inner_[6] = {0x01, 0x02, 0x06,
                                                       0x0a, 0x0e, 0x00};
const uint8_t HuffDecoderCommon::table8_0_outer_[8] = {0, 1, 2, 3, 4, 0, 0, 5};
const uint8_t HuffDecoderCommon::table9_0_emit_[6] = {0x3f, 0x27, 0x2b,
                                                      0x7c, 0x23, 0x3e};
const uint8_t HuffDecoderCommon::table9_0_inner_[8] = {0x01, 0x02, 0x06, 0x0a,
                                                       0x0e, 0x12, 0x16, 0x00};
const uint8_t HuffDecoderCommon::table9_0_outer_[16] = {0, 0, 0, 1, 0, 2, 0, 3,
                                                        0, 4, 5, 6, 0, 0, 0, 7};
const uint8_t HuffDecoderCommon::table10_0_emit_[12] = {
    0x3f, 0x27, 0x2b, 0x7c, 0x23, 0x3e, 0x00, 0x24, 0x40, 0x5b, 0x5d, 0x7e};
const uint8_t HuffDecoderCommon::table10_0_ops_[32] = {
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x01, 0x01, 0x01,
    0x06, 0x01, 0x01, 0x01, 0x0a, 0x01, 0x01, 0x01, 0x0e, 0x01, 0x12,
    0x01, 0x16, 0x1a, 0x1e, 0x22, 0x26, 0x2a, 0x2e, 0x01, 0x00};
const uint8_t HuffDecoderCommon::table11_0_emit_[14] = {
    0x3f, 0x27, 0x2b, 0x7c, 0x23, 0x3e, 0x00,
    0x24, 0x40, 0x5b, 0x5d, 0x7e, 0x5e, 0x7d};
const uint8_t HuffDecoderCommon::table11_0_ops_[64] = {
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x06, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x0a, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x0e, 0x01, 0x01, 0x01, 0x12,
    0x01, 0x01, 0x01, 0x16, 0x01, 0x1a, 0x01, 0x1e, 0x01, 0x22, 0x01,
    0x26, 0x01, 0x2a, 0x01, 0x2e, 0x32, 0x36, 0x01, 0x00};
const uint8_t HuffDecoderCommon::table6_0_emit_[3] = {0x3f, 0x27, 0x2b};
const uint8_t HuffDecoderCommon::table6_0_ops_[64] = {
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x13,
    0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13,
    0x13, 0x13, 0x13, 0x13, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23,
    0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23};
const uint8_t HuffDecoderCommon::table6_1_emit_[14] = {
    0x7c, 0x23, 0x3e, 0x00, 0x24, 0x40, 0x5b,
    0x5d, 0x7e, 0x5e, 0x7d, 0x3c, 0x60, 0x7b};
const uint8_t HuffDecoderCommon::table6_1_ops_[64] = {
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14,
    0x14, 0x14, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x35,
    0x35, 0x35, 0x35, 0x45, 0x45, 0x45, 0x45, 0x55, 0x55, 0x55, 0x55,
    0x65, 0x65, 0x65, 0x65, 0x75, 0x75, 0x75, 0x75, 0x85, 0x85, 0x85,
    0x85, 0x96, 0x96, 0xa6, 0xa6, 0xb7, 0xc7, 0xd7, 0x0f};
const uint8_t* const HuffDecoderCommon::table6_emit_[2] = {
    table6_0_emit_,
    table6_1_emit_,
};
const uint8_t* const HuffDecoderCommon::table6_ops_[2] = {
    table6_0_ops_,
    table6_1_ops_,
};
const uint8_t HuffDecoderCommon::table13_0_inner_[5] = {0x02, 0x06, 0x0a, 0x01,
                                                        0x00};
const uint8_t HuffDecoderCommon::table14_0_emit_[11] = {
    0x5c, 0xc3, 0xd0, 0x80, 0x82, 0x83, 0xa2, 0xb8, 0xc2, 0xe0, 0xe2};
const uint8_t HuffDecoderCommon::table14_0_ops_[32] = {
    0x01, 0x02, 0x01, 0x06, 0x01, 0x0a, 0x0e, 0x12, 0x16, 0x1a, 0x1e,
    0x22, 0x26, 0x2a, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00};
const uint8_t HuffDecoderCommon::table15_0_emit_[24] = {
    0x5c, 0xc3, 0xd0, 0x80, 0x82, 0x83, 0xa2, 0xb8, 0xc2, 0xe0, 0xe2, 0x99,
    0xa1, 0xa7, 0xac, 0xb0, 0xb1, 0xb3, 0xd1, 0xd8, 0xd9, 0xe3, 0xe5, 0xe6};
const uint8_t HuffDecoderCommon::table15_0_ops_[64] = {
    0x01, 0x01, 0x01, 0x02, 0x01, 0x01, 0x01, 0x06, 0x01, 0x01, 0x01,
    0x0a, 0x01, 0x0e, 0x01, 0x12, 0x01, 0x16, 0x01, 0x1a, 0x01, 0x1e,
    0x01, 0x22, 0x01, 0x26, 0x01, 0x2a, 0x2e, 0x32, 0x36, 0x3a, 0x3e,
    0x42, 0x46, 0x4a, 0x4e, 0x52, 0x56, 0x5a, 0x5e, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00};
const uint8_t HuffDecoderCommon::table16_0_emit_[50] = {
    0x5c, 0xc3, 0xd0, 0x80, 0x82, 0x83, 0xa2, 0xb8, 0xc2, 0xe0,
    0xe2, 0x99, 0xa1, 0xa7, 0xac, 0xb0, 0xb1, 0xb3, 0xd1, 0xd8,
    0xd9, 0xe3, 0xe5, 0xe6, 0x81, 0x84, 0x85, 0x86, 0x88, 0x92,
    0x9a, 0x9c, 0xa0, 0xa3, 0xa4, 0xa9, 0xaa, 0xad, 0xb2, 0xb5,
    0xb9, 0xba, 0xbb, 0xbd, 0xbe, 0xc4, 0xc6, 0xe4, 0xe8, 0xe9};
const uint8_t HuffDecoderCommon::table16_0_ops_[128] = {
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x06, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x0a,
    0x01, 0x01, 0x01, 0x0e, 0x01, 0x01, 0x01, 0x12, 0x01, 0x01, 0x01, 0x16,
    0x01, 0x01, 0x01, 0x1a, 0x01, 0x01, 0x01, 0x1e, 0x01, 0x01, 0x01, 0x22,
    0x01, 0x01, 0x01, 0x26, 0x01, 0x01, 0x01, 0x2a, 0x01, 0x2e, 0x01, 0x32,
    0x01, 0x36, 0x01, 0x3a, 0x01, 0x3e, 0x01, 0x42, 0x01, 0x46, 0x01, 0x4a,
    0x01, 0x4e, 0x01, 0x52, 0x01, 0x56, 0x01, 0x5a, 0x01, 0x5e, 0x62, 0x66,
    0x6a, 0x6e, 0x72, 0x76, 0x7a, 0x7e, 0x82, 0x86, 0x8a, 0x8e, 0x92, 0x96,
    0x9a, 0x9e, 0xa2, 0xa6, 0xaa, 0xae, 0xb2, 0xb6, 0xba, 0xbe, 0xc2, 0xc6,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00};
const uint8_t HuffDecoderCommon::table12_0_emit_[79] = {
    0x5c, 0xc3, 0xd0, 0x80, 0x82, 0x83, 0xa2, 0xb8, 0xc2, 0xe0, 0xe2, 0x99,
    0xa1, 0xa7, 0xac, 0xb0, 0xb1, 0xb3, 0xd1, 0xd8, 0xd9, 0xe3, 0xe5, 0xe6,
    0x81, 0x84, 0x85, 0x86, 0x88, 0x92, 0x9a, 0x9c, 0xa0, 0xa3, 0xa4, 0xa9,
    0xaa, 0xad, 0xb2, 0xb5, 0xb9, 0xba, 0xbb, 0xbd, 0xbe, 0xc4, 0xc6, 0xe4,
    0xe8, 0xe9, 0x01, 0x87, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8f, 0x93, 0x95,
    0x96, 0x97, 0x98, 0x9b, 0x9d, 0x9e, 0xa5, 0xa6, 0xa8, 0xae, 0xaf, 0xb4,
    0xb6, 0xb7, 0xbc, 0xbf, 0xc5, 0xe7, 0xef};
const uint16_t HuffDecoderCommon::table12_0_inner_[90] = {
    0x0004, 0x0104, 0x0204, 0x0305, 0x0405, 0x0505, 0x0605, 0x0705, 0x0805,
    0x0905, 0x0a05, 0x0b06, 0x0c06, 0x0d06, 0x0e06, 0x0f06, 0x1006, 0x1106,
    0x1206, 0x1306, 0x1406, 0x1506, 0x1606, 0x1706, 0x1807, 0x1907, 0x1a07,
    0x1b07, 0x1c07, 0x1d07, 0x1e07, 0x1f07, 0x2007, 0x2107, 0x2207, 0x2307,
    0x2407, 0x2507, 0x2607, 0x2707, 0x2807, 0x2907, 0x2a07, 0x2b07, 0x2c07,
    0x2d07, 0x2e07, 0x2f07, 0x3007, 0x3107, 0x3208, 0x3308, 0x3408, 0x3508,
    0x3608, 0x3708, 0x3808, 0x3908, 0x3a08, 0x3b08, 0x3c08, 0x3d08, 0x3e08,
    0x3f08, 0x4008, 0x4108, 0x4208, 0x4308, 0x4408, 0x4508, 0x4608, 0x4708,
    0x4808, 0x4908, 0x4a08, 0x4b08, 0x4c08, 0x4d08, 0x4e08, 0x0018, 0x0028,
    0x0038, 0x0048, 0x0058, 0x0068, 0x0078, 0x0088, 0x0098, 0x00a8, 0x00b8};
const uint8_t HuffDecoderCommon::table12_0_outer_[256] = {
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,
    1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  2,  2,  2,  2,  2,  2,
    2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  3,  3,  3,  3,  3,  3,  3,  3,  4,
    4,  4,  4,  4,  4,  4,  4,  5,  5,  5,  5,  5,  5,  5,  5,  6,  6,  6,  6,
    6,  6,  6,  6,  7,  7,  7,  7,  7,  7,  7,  7,  8,  8,  8,  8,  8,  8,  8,
    8,  9,  9,  9,  9,  9,  9,  9,  9,  10, 10, 10, 10, 10, 10, 10, 10, 11, 11,
    11, 11, 12, 12, 12, 12, 13, 13, 13, 13, 14, 14, 14, 14, 15, 15, 15, 15, 16,
    16, 16, 16, 17, 17, 17, 17, 18, 18, 18, 18, 19, 19, 19, 19, 20, 20, 20, 20,
    21, 21, 21, 21, 22, 22, 22, 22, 23, 23, 23, 23, 24, 24, 25, 25, 26, 26, 27,
    27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 33, 33, 34, 34, 35, 35, 36, 36,
    37, 37, 38, 38, 39, 39, 40, 40, 41, 41, 42, 42, 43, 43, 44, 44, 45, 45, 46,
    46, 47, 47, 48, 48, 49, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61,
    62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
    81, 82, 83, 84, 85, 86, 87, 88, 89};
const uint8_t HuffDecoderCommon::table24_0_emit_[8] = {0xc0, 0xc1, 0xc8, 0xc9,
                                                       0xca, 0xcd, 0xd2, 0xd5};
const uint8_t HuffDecoderCommon::table24_0_inner_[8] = {0x03, 0x07, 0x0b, 0x0f,
                                                        0x13, 0x17, 0x1b, 0x1f};
const uint8_t HuffDecoderCommon::table25_0_emit_[16] = {
    0xd3, 0xd4, 0xd6, 0xdd, 0xde, 0xdf, 0xf1, 0xf4,
    0xf5, 0xf6, 0xf7, 0xf8, 0xfa, 0xfb, 0xfc, 0xfd};
const uint8_t HuffDecoderCommon::table25_0_inner_[16] = {
    0x04, 0x0c, 0x14, 0x1c, 0x24, 0x2c, 0x34, 0x3c,
    0x44, 0x4c, 0x54, 0x5c, 0x64, 0x6c, 0x74, 0x7c};
const uint8_t HuffDecoderCommon::table26_0_emit_[30] = {
    0xfe, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x0b, 0x0c,
    0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x17, 0x18,
    0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x7f, 0xdc, 0xf9};
const uint16_t HuffDecoderCommon::table26_0_inner_[31] = {
    0x0004, 0x0015, 0x0025, 0x0035, 0x0045, 0x0055, 0x0065, 0x0075,
    0x0085, 0x0095, 0x00a5, 0x00b5, 0x00c5, 0x00d5, 0x00e5, 0x00f5,
    0x0105, 0x0115, 0x0125, 0x0135, 0x0145, 0x0155, 0x0165, 0x0175,
    0x0185, 0x0195, 0x01a5, 0x01b5, 0x01c5, 0x01d5, 0x000d};
const uint8_t HuffDecoderCommon::table30_0_emit_[7] = {0xda, 0xdb, 0xee, 0xf0,
                                                       0xf2, 0xf3, 0xff};
const uint8_t HuffDecoderCommon::table30_0_inner_[8] = {0x02, 0x06, 0x0a, 0x0e,
                                                        0x12, 0x16, 0x1a, 0x01};
const uint8_t HuffDecoderCommon::table29_0_emit_[9] = {
    0xda, 0xdb, 0xee, 0xf0, 0xf2, 0xf3, 0xff, 0xcb, 0xcc};
const uint8_t HuffDecoderCommon::table29_0_inner_[9] = {
    0x03, 0x0b, 0x13, 0x1b, 0x23, 0x2b, 0x33, 0x3c, 0x44};
}  // namespace grpc_core
