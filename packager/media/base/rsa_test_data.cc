// Copyright 2014 Google Inc. All rights reserved.
//
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file or at
// https://developers.google.com/open-source/licenses/bsd

#include "packager/media/base/rsa_test_data.h"

#include <stdint.h>

namespace {
const uint8_t kTestRsaPrivateKey_3072[] = {
    0x30, 0x82, 0x06, 0xe3, 0x02, 0x01, 0x00, 0x02, 0x82, 0x01, 0x81, 0x00,
    0xa5, 0x62, 0x07, 0xdf, 0xc8, 0x84, 0x74, 0xe1, 0x2a, 0xb7, 0xbb, 0xc0,
    0x78, 0x76, 0xbe, 0x13, 0x3b, 0xe6, 0x2c, 0x09, 0x9d, 0x35, 0x3f, 0xf3,
    0x0f, 0xe9, 0x61, 0x96, 0x20, 0x53, 0x6e, 0x78, 0x62, 0xe0, 0x10, 0xd2,
    0xca, 0xe4, 0xdd, 0xd5, 0x96, 0xaf, 0x9a, 0xd7, 0x08, 0x47, 0xe4, 0x55,
    0x1b, 0x83, 0xbe, 0x10, 0x66, 0x74, 0x08, 0xf2, 0x49, 0x79, 0xea, 0x29,
    0x46, 0xc2, 0x65, 0x97, 0xa6, 0xcc, 0x4b, 0xa4, 0x08, 0xc3, 0x04, 0x17,
    0x01, 0xb5, 0x11, 0x53, 0xe9, 0x68, 0x34, 0x3c, 0x26, 0x56, 0x44, 0x37,
    0x5c, 0xb4, 0x7a, 0x1d, 0x5d, 0x6c, 0x58, 0xc2, 0x82, 0xa0, 0x92, 0xf1,
    0x14, 0xf1, 0x22, 0xff, 0x64, 0xde, 0xdf, 0xb3, 0x3d, 0x9d, 0xa5, 0x86,
    0xcd, 0xa0, 0x0a, 0x63, 0x08, 0xdd, 0x60, 0x5d, 0xfd, 0xa4, 0x01, 0xe3,
    0xb6, 0x0e, 0x85, 0xe4, 0xc3, 0x37, 0x61, 0xd0, 0xe7, 0x12, 0xe9, 0xc4,
    0xde, 0xf2, 0x59, 0x11, 0xe3, 0x5b, 0x02, 0x9f, 0x24, 0xb9, 0xb0, 0xbb,
    0x31, 0xa0, 0xee, 0x6a, 0x2c, 0xb4, 0x30, 0xff, 0xe0, 0xf0, 0x93, 0xee,
    0x3a, 0xae, 0xb2, 0x2e, 0x84, 0xa0, 0x47, 0x42, 0x51, 0xbb, 0xfa, 0xbb,
    0x90, 0x97, 0x2c, 0x77, 0x45, 0xee, 0x2c, 0xfb, 0xec, 0x5d, 0xd8, 0xca,
    0x49, 0x94, 0x53, 0x5d, 0x37, 0xaf, 0x86, 0x47, 0xda, 0xe2, 0xbd, 0xf0,
    0x5f, 0x07, 0x53, 0x8a, 0x10, 0xd0, 0x9a, 0xd0, 0x7f, 0xe9, 0xef, 0xf6,
    0xda, 0xea, 0x1e, 0x2e, 0x54, 0xec, 0x44, 0xde, 0x3a, 0xe1, 0xc8, 0xdb,
    0x17, 0xe8, 0xc9, 0x3a, 0x81, 0x11, 0x4d, 0xb7, 0x2d, 0x09, 0x83, 0xab,
    0x30, 0xb7, 0xf5, 0x1b, 0x03, 0x86, 0x21, 0xa9, 0xf5, 0xca, 0x15, 0x26,
    0xaf, 0x39, 0xf3, 0x5d, 0x01, 0x7d, 0xe3, 0x19, 0x54, 0xd1, 0x2e, 0x10,
    0x16, 0x9c, 0xee, 0xc3, 0xbd, 0xcc, 0xdb, 0x02, 0x82, 0xd0, 0x60, 0x0b,
    0x42, 0x72, 0x85, 0xec, 0xdc, 0x41, 0x7c, 0xf1, 0x34, 0xd8, 0x27, 0x21,
    0xf9, 0xa6, 0x82, 0x40, 0xd3, 0xc5, 0xc9, 0xf9, 0x6b, 0xc9, 0x12, 0x64,
    0xe4, 0x3a, 0x3b, 0xc9, 0x8f, 0x3c, 0xd0, 0x2c, 0xb8, 0xb8, 0xf3, 0x05,
    0x4a, 0xe9, 0x4c, 0x46, 0x2b, 0xb6, 0xe1, 0xed, 0x82, 0xb2, 0xf0, 0xd1,
    0x72, 0x71, 0x04, 0x35, 0x19, 0xc1, 0x16, 0x17, 0xd6, 0x75, 0xe0, 0xab,
    0xde, 0x8f, 0xe1, 0xc1, 0x49, 0x68, 0x0c, 0xc8, 0xce, 0x6d, 0x87, 0x50,
    0x04, 0xb5, 0xd7, 0x24, 0xf4, 0x2e, 0x0c, 0x11, 0x35, 0xb2, 0x67, 0x85,
    0x1b, 0x38, 0xff, 0x2f, 0x71, 0xf5, 0x30, 0x18, 0x1e, 0x6f, 0xd7, 0xf0,
    0x33, 0x61, 0x53, 0x7e, 0x55, 0x7f, 0x0d, 0x60, 0x83, 0xf3, 0x8a, 0x2b,
    0x67, 0xd5, 0xf0, 0x2e, 0x23, 0x23, 0x60, 0x0b, 0x83, 0x9c, 0xc2, 0x87,
    0x02, 0x03, 0x01, 0x00, 0x01, 0x02, 0x82, 0x01, 0x80, 0x5a, 0x09, 0x3f,
    0x9e, 0x2e, 0x4d, 0x26, 0x50, 0x7b, 0x70, 0x21, 0xb0, 0x0c, 0x25, 0x21,
    0x1f, 0xd9, 0x89, 0x5a, 0xca, 0x35, 0x23, 0x0b, 0x58, 0xa9, 0x7d, 0xf6,
    0x19, 0xc4, 0x29, 0x87, 0xc7, 0xd4, 0x94, 0x85, 0xb4, 0x2c, 0xaf, 0x62,
    0xb1, 0xe8, 0x62, 0x5b, 0xda, 0xdb, 0x70, 0x40, 0x37, 0xb1, 0x4e, 0x0c,
    0xc8, 0x62, 0xee, 0xa2, 0xfc, 0x3c, 0xd2, 0x39, 0x90, 0x15, 0x2c, 0xba,
    0x20, 0x50, 0xb7, 0x82, 0x2a, 0xa0, 0x76, 0x83, 0x20, 0x7f, 0x56, 0x73,
    0x43, 0x8a, 0x9b, 0xa7, 0x6c, 0x63, 0xb6, 0xad, 0x56, 0xb2, 0x8a, 0xb2,
    0xbc, 0x8f, 0xe2, 0xef, 0x83, 0x9d, 0x98, 0x0b, 0xc7, 0x62, 0x0e, 0x51,
    0x6e, 0x57, 0x1d, 0x1b, 0x0e, 0x3a, 0xea, 0x3b, 0x76, 0x63, 0x35, 0xd0,
    0xd1, 0xcf, 0xbe, 0xad, 0xbb, 0x1d, 0xde, 0x0f, 0x05, 0x48, 0x55, 0x29,
    0xc1, 0xbc, 0x21, 0xc7, 0x87, 0xf2, 0x75, 0x12, 0x7d, 0x92, 0x9e, 0xbf,
    0xad, 0x04, 0x68, 0xc4, 0xc9, 0x9d, 0x35, 0xd6, 0xa8, 0x62, 0xc1, 0x69,
    0x6a, 0xb6, 0x41, 0xb7, 0x37, 0x66, 0xdf, 0xb2, 0xb9, 0x8c, 0x8b, 0x15,
    0x08, 0x4c, 0x3d, 0xf1, 0xed, 0x82, 0x0f, 0xe3, 0xd5, 0xff, 0x46, 0xbd,
    0xf7, 0x85, 0x43, 0xc0, 0x8b, 0xba, 0x47, 0xf1, 0x41, 0x57, 0xc3, 0x7f,
    0x8b, 0x0d, 0x48, 0xea, 0xc2, 0xed, 0xc0, 0x69, 0x84, 0xb6, 0x32, 0x08,
    0x49, 0x74, 0x14, 0x84, 0xa4, 0x1b, 0x48, 0x5b, 0xec, 0xd3, 0x0b, 0x12,
    0x2b, 0x4c, 0x9e, 0x5c, 0x01, 0x60, 0xad, 0xef, 0xcb, 0x2b, 0x56, 0x84,
    0x07, 0xfa, 0x62, 0xc6, 0x08, 0x92, 0x98, 0x70, 0xc9, 0x5b, 0x18, 0xc8,
    0xfa, 0x27, 0x0c, 0xe2, 0xbd, 0xfb, 0x3e, 0x43, 0xa5, 0xb7, 0x06, 0x2c,
    0x4e, 0xf1, 0x07, 0x5d, 0x8d, 0xdd, 0x53, 0xc5, 0x8c, 0x4a, 0xf2, 0x2f,
    0x8e, 0x80, 0x96, 0x16, 0xc0, 0xfc, 0xf9, 0x20, 0x4f, 0x35, 0xc7, 0x53,
    0x8b, 0x2d, 0x37, 0x43, 0x93, 0x3d, 0x74, 0x3f, 0x63, 0xf7, 0x0b, 0xbd,
    0x46, 0xe4, 0x51, 0x67, 0x33, 0x57, 0x15, 0xf5, 0x59, 0x27, 0x66, 0xe8,
    0xe2, 0x4b, 0xa3, 0x93, 0x03, 0x8a, 0x9c, 0x05, 0x13, 0xf2, 0xcb, 0xf7,
    0x9c, 0x68, 0xe7, 0x16, 0x4b, 0x8e, 0x59, 0x71, 0x2b, 0x73, 0x9b, 0xb9,
    0xae, 0x50, 0xfa, 0xd7, 0xd3, 0x34, 0x17, 0x1d, 0x62, 0x88, 0xbd, 0x8c,
    0xba, 0x5a, 0x6b, 0x6a, 0x5e, 0xb3, 0xa5, 0x80, 0xca, 0xbb, 0xb9, 0xb5,
    0xa8, 0x2e, 0xb1, 0x61, 0x6e, 0xd5, 0xd6, 0x62, 0x98, 0x4a, 0xb0, 0xb8,
    0x76, 0xa9, 0x19, 0x5c, 0xe2, 0xbe, 0xb3, 0x9b, 0x4a, 0x39, 0xf5, 0xe6,
    0xbb, 0x11, 0x6e, 0x13, 0x13, 0x38, 0xb8, 0x1f, 0x21, 0x19, 0xf5, 0xa7,
    0x76, 0x93, 0xb3, 0x56, 0xfa, 0xcc, 0x74, 0xbc, 0x19, 0x02, 0x81, 0xc1,
    0x00, 0xd1, 0xd1, 0x72, 0x57, 0xe5, 0xb0, 0x1c, 0x09, 0x05, 0xbb, 0x55,
    0x89, 0x3c, 0x4a, 0x81, 0x90, 0x9a, 0xf9, 0x32, 0x63, 0x41, 0xad, 0x6a,
    0x5f, 0x65, 0x94, 0x92, 0xcc, 0xf7, 0xc7, 0x53, 0x93, 0xa0, 0xf7, 0xbe,
    0x48, 0x82, 0x63, 0x31, 0x7b, 0xd0, 0x82, 0x09, 0xbb, 0x0a, 0xbc, 0x60,
    0xc9, 0x4d, 0x83, 0xe4, 0x5d, 0x50, 0xe6, 0x5f, 0x8b, 0x47, 0x07, 0xa3,
    0x3a, 0x36, 0x97, 0xaa, 0x21, 0x70, 0x7f, 0xd5, 0x6c, 0xb0, 0x56, 0xf5,
    0x5c, 0x48, 0x74, 0x2a, 0xdd, 0xfe, 0x94, 0x83, 0x05, 0xe0, 0x3d, 0x5d,
    0xdd, 0x5a, 0x05, 0xcb, 0x47, 0xd7, 0xf9, 0x89, 0x55, 0xaa, 0x0b, 0x21,
    0xc0, 0x71, 0x5d, 0xe1, 0x4c, 0x6a, 0x45, 0x86, 0x86, 0xf2, 0xb9, 0x38,
    0x6a, 0x56, 0x51, 0x0d, 0x7d, 0xac, 0x30, 0x31, 0xca, 0x2d, 0xaa, 0xaa,
    0xba, 0xcc, 0x12, 0x40, 0xc1, 0x0d, 0xa6, 0xc1, 0x7d, 0x22, 0xec, 0xb6,
    0x51, 0x45, 0xfe, 0x4e, 0xbb, 0x4a, 0xd2, 0xba, 0x9b, 0xa2, 0xcc, 0x28,
    0x2b, 0x01, 0x53, 0x53, 0xf3, 0xa9, 0x5a, 0x8f, 0xeb, 0xb7, 0xb8, 0x62,
    0x6b, 0x8a, 0x79, 0x24, 0xcc, 0x86, 0x34, 0x45, 0xe2, 0xad, 0x1d, 0xd0,
    0x4c, 0xc9, 0x77, 0x2a, 0xf9, 0x1a, 0xe8, 0x58, 0x78, 0x51, 0x8a, 0xea,
    0x3f, 0x90, 0x36, 0x46, 0x2a, 0xc0, 0x71, 0x41, 0x83, 0x2c, 0x48, 0xee,
    0xc5, 0x02, 0x81, 0xc1, 0x00, 0xc9, 0xc8, 0xce, 0xc4, 0x50, 0xb2, 0x26,
    0xcb, 0x35, 0x78, 0x55, 0x3c, 0xcc, 0xf0, 0x7e, 0xba, 0xad, 0xeb, 0x58,
    0xe9, 0xb5, 0x78, 0x2f, 0x43, 0x5f, 0x07, 0x47, 0x56, 0x05, 0x41, 0x38,
    0x71, 0xe1, 0x58, 0x62, 0xb1, 0x8e, 0xbc, 0xf9, 0x80, 0x04, 0x22, 0x39,
    0x22, 0x24, 0x28, 0x86, 0x9c, 0x00, 0x44, 0x5f, 0xc4, 0x97, 0xe6, 0x71,
    0x5f, 0x1f, 0x58, 0xea, 0x75, 0x18, 0x0c, 0x23, 0x63, 0x09, 0xc5, 0x98,
    0xc4, 0x6d, 0x23, 0xc2, 0x2c, 0x93, 0x6a, 0x26, 0xe4, 0x3d, 0x8d, 0xa1,
    0x39, 0x70, 0x34, 0x25, 0xcd, 0xbc, 0x82, 0x78, 0x2b, 0xf3, 0x7e, 0x81,
    0xb6, 0x5f, 0xc5, 0x69, 0xd0, 0x81, 0x69, 0x50, 0x2f, 0x17, 0x0c, 0x17,
    0x3c, 0x0b, 0x45, 0x38, 0xce, 0xe3, 0xbf, 0x8a, 0x50, 0x0a, 0x00, 0x74,
    0x7e, 0x7a, 0xd8, 0x55, 0x52, 0x6b, 0x82, 0xfb, 0x34, 0x15, 0x73, 0x6a,
    0xf4, 0x51, 0x9b, 0x9f, 0xa0, 0x45, 0xb9, 0x76, 0xe5, 0xd3, 0xd5, 0xf4,
    0xa9, 0xa4, 0xcd, 0x42, 0x2f, 0x29, 0x89, 0xec, 0x28, 0x5f, 0x03, 0x45,
    0x27, 0xaf, 0x8c, 0x39, 0x3e, 0x59, 0x9d, 0xaf, 0x27, 0x5d, 0x17, 0x53,
    0x17, 0xeb, 0x8d, 0x7f, 0x3d, 0xb8, 0x2a, 0x50, 0x1e, 0xb5, 0xc5, 0x04,
    0xab, 0x9c, 0xa7, 0xaa, 0x86, 0x41, 0xb9, 0x36, 0x29, 0x9e, 0xd2, 0xd8,
    0xde, 0x5f, 0xde, 0x80, 0xdb, 0x02, 0x81, 0xc0, 0x03, 0xf3, 0x5f, 0xa5,
    0xcc, 0x0b, 0x5e, 0xdb, 0xc4, 0xa1, 0xdc, 0x60, 0x73, 0x24, 0x2c, 0x00,
    0x5f, 0x0a, 0xa6, 0x2a, 0x3c, 0x48, 0x59, 0xa2, 0x66, 0x35, 0x3f, 0xf6,
    0x60, 0x0b, 0xfe, 0xc4, 0xde, 0xd9, 0x0b, 0x5a, 0x2e, 0x2a, 0x53, 0xfa,
    0x32, 0xd8, 0xdf, 0xfa, 0x07, 0x9f, 0xb8, 0x6a, 0xd1, 0xec, 0xd3, 0xd5,
    0xf5, 0xfa, 0x00, 0x7e, 0x8c, 0xdd, 0xd5, 0xf2, 0xf8, 0xa8, 0x2e, 0x69,
    0xe6, 0xc6, 0x61, 0x6c, 0x64, 0x7d, 0x9e, 0xad, 0x18, 0x28, 0x27, 0xce,
    0x7a, 0x46, 0xad, 0x98, 0xe4, 0xba, 0x03, 0x14, 0x71, 0xe7, 0x7e, 0x06,
    0x62, 0x48, 0xae, 0x8f, 0x50, 0x5e, 0x59, 0x4a, 0x58, 0x58, 0x1e, 0x2f,
    0xe4, 0x28, 0x5e, 0xfa, 0x17, 0x83, 0xe9, 0x4e, 0x07, 0x46, 0x0b, 0x6c,
    0xfc, 0x5b, 0x03, 0xf4, 0xfc, 0x9b, 0x24, 0x0f, 0xd4, 0x5b, 0xdb, 0xa0,
    0x46, 0xf3, 0x86, 0xdd, 0x26, 0x55, 0x32, 0xb1, 0xa1, 0x11, 0xc2, 0xc5,
    0xc0, 0x08, 0xeb, 0xbe, 0x96, 0x78, 0x25, 0xa1, 0x79, 0xaa, 0xe9, 0xff,
    0xc2, 0x86, 0x94, 0x03, 0x2a, 0x38, 0x6c, 0x91, 0xfd, 0xcf, 0x7e, 0x23,
    0xe3, 0xbb, 0x04, 0x3d, 0xda, 0x68, 0x9f, 0x4d, 0x72, 0xd5, 0xad, 0x97,
    0x77, 0x2c, 0x3c, 0xce, 0x37, 0x2a, 0xd8, 0x72, 0x4d, 0xf2, 0xd7, 0xab,
    0x62, 0x68, 0x3f, 0x85, 0x8a, 0xc5, 0xec, 0xc9, 0x02, 0x81, 0xc1, 0x00,
    0x92, 0x43, 0x0c, 0x1d, 0x20, 0xa1, 0x01, 0x9d, 0xaa, 0x54, 0x5e, 0xf4,
    0x83, 0x58, 0x8f, 0x83, 0xa1, 0x2d, 0x46, 0x75, 0xa1, 0x24, 0x4c, 0x9d,
    0xf8, 0xf3, 0xbd, 0xb1, 0x8c, 0x7d, 0x89, 0xfc, 0x81, 0xeb, 0x1f, 0x1e,
    0xb4, 0xe8, 0x25, 0xb1, 0xb5, 0x4d, 0x59, 0x3c, 0x76, 0x19, 0x29, 0xf9,
    0x49, 0xf8, 0x45, 0xb2, 0xaa, 0xa8, 0x4e, 0xe5, 0x34, 0x43, 0xaf, 0x2e,
    0xd1, 0x0f, 0x7b, 0x56, 0xfe, 0x6e, 0x4c, 0x1d, 0x95, 0x3e, 0xa6, 0x30,
    0xc9, 0x69, 0xd8, 0x66, 0xf8, 0x77, 0x00, 0xb6, 0x31, 0xae, 0x9a, 0xf8,
    0x55, 0xfb, 0xfc, 0x3f, 0x5f, 0x70, 0x03, 0x75, 0xbe, 0x55, 0xca, 0x2d,
    0x68, 0xa0, 0x7d, 0x8e, 0xa4, 0x96, 0x0f, 0x01, 0x66, 0xe9, 0xf6, 0x13,
    0x80, 0xe2, 0x05, 0xcf, 0x9e, 0x70, 0x56, 0x00, 0x97, 0xea, 0xd7, 0x6d,
    0xb6, 0xa0, 0x6a, 0x95, 0x86, 0x36, 0xf2, 0xff, 0xc5, 0x67, 0x98, 0x7d,
    0x04, 0x0d, 0x3b, 0x31, 0xbc, 0x2b, 0x09, 0xfd, 0x2d, 0x87, 0xda, 0xc1,
    0x74, 0xca, 0x94, 0x73, 0x6e, 0xeb, 0x5f, 0xe5, 0x34, 0x49, 0xdf, 0xf4,
    0x61, 0xe0, 0xfa, 0x64, 0xfe, 0x05, 0x3a, 0x25, 0xcc, 0x87, 0xf4, 0x03,
    0x38, 0xca, 0xf2, 0xe8, 0x4f, 0xb9, 0x4f, 0x79, 0x55, 0x43, 0xf3, 0x46,
    0xfd, 0xbc, 0xd2, 0x95, 0xb8, 0x99, 0xfc, 0xb8, 0xb3, 0xa5, 0x04, 0xa1,
    0x02, 0x81, 0xc0, 0x47, 0xc6, 0x9c, 0x18, 0x54, 0xe5, 0xbb, 0xf9, 0xf4,
    0x38, 0xd2, 0xc0, 0xd1, 0x1a, 0xcc, 0xdb, 0x06, 0x87, 0x75, 0x1f, 0x13,
    0xa2, 0x7f, 0x8b, 0x45, 0x54, 0xcb, 0x43, 0xf8, 0xbb, 0x94, 0xd6, 0x2e,
    0x56, 0x5c, 0x69, 0x6d, 0x83, 0xb5, 0x45, 0x46, 0x68, 0x5c, 0x76, 0x1e,
    0x6c, 0x0c, 0x53, 0x59, 0xcc, 0x19, 0xc7, 0x81, 0x62, 0x66, 0x92, 0x02,
    0x8f, 0xa6, 0xdb, 0x50, 0x1c, 0x67, 0xfc, 0x82, 0x56, 0x2b, 0x4b, 0x1f,
    0x97, 0x87, 0xc4, 0x7d, 0x20, 0xda, 0xd3, 0x3f, 0x28, 0xf9, 0x55, 0xfe,
    0x84, 0x50, 0xc5, 0x3b, 0xd4, 0xaf, 0xf5, 0x3d, 0x43, 0xce, 0xdc, 0x55,
    0x11, 0x87, 0xdb, 0x72, 0x66, 0xcc, 0x83, 0xc4, 0x8b, 0x20, 0xae, 0x59,
    0x4d, 0xeb, 0xac, 0xb5, 0x4a, 0xec, 0x66, 0x09, 0x37, 0x55, 0x14, 0x21,
    0x57, 0xff, 0x0a, 0xac, 0xda, 0xb1, 0xae, 0x31, 0xab, 0x41, 0x30, 0x65,
    0x02, 0x83, 0xd1, 0xdb, 0x65, 0xb7, 0x52, 0xa7, 0x21, 0x9f, 0x1f, 0x8f,
    0x69, 0x23, 0x3b, 0xb8, 0xf9, 0x6d, 0xe7, 0xc1, 0x53, 0x9f, 0x8f, 0x67,
    0xfc, 0x6e, 0x20, 0x18, 0x31, 0x89, 0xe7, 0xbb, 0xd4, 0xc1, 0x03, 0x67,
    0xd6, 0xa5, 0x76, 0xc9, 0xea, 0x97, 0x93, 0x02, 0xca, 0x44, 0x52, 0x55,
    0x0f, 0xed, 0x55, 0xb5, 0x49, 0xd6, 0x94, 0x59, 0xee, 0xcc, 0x1b, 0x5a,
    0x00, 0x3d, 0xcd};

const uint8_t kTestRsaPublicKey_3072[] = {
    0x30, 0x82, 0x01, 0x8a, 0x02, 0x82, 0x01, 0x81, 0x00, 0xa5, 0x62, 0x07,
    0xdf, 0xc8, 0x84, 0x74, 0xe1, 0x2a, 0xb7, 0xbb, 0xc0, 0x78, 0x76, 0xbe,
    0x13, 0x3b, 0xe6, 0x2c, 0x09, 0x9d, 0x35, 0x3f, 0xf3, 0x0f, 0xe9, 0x61,
    0x96, 0x20, 0x53, 0x6e, 0x78, 0x62, 0xe0, 0x10, 0xd2, 0xca, 0xe4, 0xdd,
    0xd5, 0x96, 0xaf, 0x9a, 0xd7, 0x08, 0x47, 0xe4, 0x55, 0x1b, 0x83, 0xbe,
    0x10, 0x66, 0x74, 0x08, 0xf2, 0x49, 0x79, 0xea, 0x29, 0x46, 0xc2, 0x65,
    0x97, 0xa6, 0xcc, 0x4b, 0xa4, 0x08, 0xc3, 0x04, 0x17, 0x01, 0xb5, 0x11,
    0x53, 0xe9, 0x68, 0x34, 0x3c, 0x26, 0x56, 0x44, 0x37, 0x5c, 0xb4, 0x7a,
    0x1d, 0x5d, 0x6c, 0x58, 0xc2, 0x82, 0xa0, 0x92, 0xf1, 0x14, 0xf1, 0x22,
    0xff, 0x64, 0xde, 0xdf, 0xb3, 0x3d, 0x9d, 0xa5, 0x86, 0xcd, 0xa0, 0x0a,
    0x63, 0x08, 0xdd, 0x60, 0x5d, 0xfd, 0xa4, 0x01, 0xe3, 0xb6, 0x0e, 0x85,
    0xe4, 0xc3, 0x37, 0x61, 0xd0, 0xe7, 0x12, 0xe9, 0xc4, 0xde, 0xf2, 0x59,
    0x11, 0xe3, 0x5b, 0x02, 0x9f, 0x24, 0xb9, 0xb0, 0xbb, 0x31, 0xa0, 0xee,
    0x6a, 0x2c, 0xb4, 0x30, 0xff, 0xe0, 0xf0, 0x93, 0xee, 0x3a, 0xae, 0xb2,
    0x2e, 0x84, 0xa0, 0x47, 0x42, 0x51, 0xbb, 0xfa, 0xbb, 0x90, 0x97, 0x2c,
    0x77, 0x45, 0xee, 0x2c, 0xfb, 0xec, 0x5d, 0xd8, 0xca, 0x49, 0x94, 0x53,
    0x5d, 0x37, 0xaf, 0x86, 0x47, 0xda, 0xe2, 0xbd, 0xf0, 0x5f, 0x07, 0x53,
    0x8a, 0x10, 0xd0, 0x9a, 0xd0, 0x7f, 0xe9, 0xef, 0xf6, 0xda, 0xea, 0x1e,
    0x2e, 0x54, 0xec, 0x44, 0xde, 0x3a, 0xe1, 0xc8, 0xdb, 0x17, 0xe8, 0xc9,
    0x3a, 0x81, 0x11, 0x4d, 0xb7, 0x2d, 0x09, 0x83, 0xab, 0x30, 0xb7, 0xf5,
    0x1b, 0x03, 0x86, 0x21, 0xa9, 0xf5, 0xca, 0x15, 0x26, 0xaf, 0x39, 0xf3,
    0x5d, 0x01, 0x7d, 0xe3, 0x19, 0x54, 0xd1, 0x2e, 0x10, 0x16, 0x9c, 0xee,
    0xc3, 0xbd, 0xcc, 0xdb, 0x02, 0x82, 0xd0, 0x60, 0x0b, 0x42, 0x72, 0x85,
    0xec, 0xdc, 0x41, 0x7c, 0xf1, 0x34, 0xd8, 0x27, 0x21, 0xf9, 0xa6, 0x82,
    0x40, 0xd3, 0xc5, 0xc9, 0xf9, 0x6b, 0xc9, 0x12, 0x64, 0xe4, 0x3a, 0x3b,
    0xc9, 0x8f, 0x3c, 0xd0, 0x2c, 0xb8, 0xb8, 0xf3, 0x05, 0x4a, 0xe9, 0x4c,
    0x46, 0x2b, 0xb6, 0xe1, 0xed, 0x82, 0xb2, 0xf0, 0xd1, 0x72, 0x71, 0x04,
    0x35, 0x19, 0xc1, 0x16, 0x17, 0xd6, 0x75, 0xe0, 0xab, 0xde, 0x8f, 0xe1,
    0xc1, 0x49, 0x68, 0x0c, 0xc8, 0xce, 0x6d, 0x87, 0x50, 0x04, 0xb5, 0xd7,
    0x24, 0xf4, 0x2e, 0x0c, 0x11, 0x35, 0xb2, 0x67, 0x85, 0x1b, 0x38, 0xff,
    0x2f, 0x71, 0xf5, 0x30, 0x18, 0x1e, 0x6f, 0xd7, 0xf0, 0x33, 0x61, 0x53,
    0x7e, 0x55, 0x7f, 0x0d, 0x60, 0x83, 0xf3, 0x8a, 0x2b, 0x67, 0xd5, 0xf0,
    0x2e, 0x23, 0x23, 0x60, 0x0b, 0x83, 0x9c, 0xc2, 0x87, 0x02, 0x03, 0x01,
    0x00, 0x01};

const uint8_t kTestRsaPrivateKey_2048[] = {
    0x30, 0x82, 0x04, 0xa2, 0x02, 0x01, 0x00, 0x02, 0x82, 0x01, 0x01, 0x00,
    0xa7, 0x00, 0x36, 0x60, 0x65, 0xdc, 0xbd, 0x54, 0x5a, 0x2a, 0x40, 0xb4,
    0xe1, 0x15, 0x94, 0x58, 0x11, 0x4f, 0x94, 0x58, 0xdd, 0xde, 0xa7, 0x1f,
    0x3c, 0x2c, 0xe0, 0x88, 0x09, 0x29, 0x61, 0x57, 0x67, 0x5e, 0x56, 0x7e,
    0xee, 0x27, 0x8f, 0x59, 0x34, 0x9a, 0x2a, 0xaa, 0x9d, 0xb4, 0x4e, 0xfa,
    0xa7, 0x6a, 0xd4, 0xc9, 0x7a, 0x53, 0xc1, 0x4e, 0x9f, 0xe3, 0x34, 0xf7,
    0x3d, 0xb7, 0xc9, 0x10, 0x47, 0x4f, 0x28, 0xda, 0x3f, 0xce, 0x31, 0x7b,
    0xfd, 0x06, 0x10, 0xeb, 0xf7, 0xbe, 0x92, 0xf9, 0xaf, 0xfb, 0x3e, 0x68,
    0xda, 0xee, 0x1a, 0x64, 0x4c, 0xf3, 0x29, 0xf2, 0x73, 0x9e, 0x39, 0xd8,
    0xf6, 0x6f, 0xd8, 0xb2, 0x80, 0x82, 0x71, 0x8e, 0xb5, 0xa4, 0xf2, 0xc2,
    0x3e, 0xcd, 0x0a, 0xca, 0xb6, 0x04, 0xcd, 0x9a, 0x13, 0x8b, 0x54, 0x73,
    0x54, 0x25, 0x54, 0x8c, 0xbe, 0x98, 0x7a, 0x67, 0xad, 0xda, 0xb3, 0x4e,
    0xb3, 0xfa, 0x82, 0xa8, 0x4a, 0x67, 0x98, 0x56, 0x57, 0x54, 0x71, 0xcd,
    0x12, 0x7f, 0xed, 0xa3, 0x01, 0xc0, 0x6a, 0x8b, 0x24, 0x03, 0x96, 0x88,
    0xbe, 0x97, 0x66, 0x2a, 0xbc, 0x53, 0xc9, 0x83, 0x06, 0x51, 0x5a, 0x88,
    0x65, 0x13, 0x18, 0xe4, 0x3a, 0xed, 0x6b, 0xf1, 0x61, 0x5b, 0x4c, 0xc8,
    0x1e, 0xf4, 0xc2, 0xae, 0x08, 0x5e, 0x2d, 0x5f, 0xf8, 0x12, 0x7f, 0xa2,
    0xfc, 0xbb, 0x21, 0x18, 0x30, 0xda, 0xfe, 0x40, 0xfb, 0x01, 0xca, 0x2e,
    0x37, 0x0e, 0xce, 0xdd, 0x76, 0x87, 0x82, 0x46, 0x0b, 0x3a, 0x77, 0x8f,
    0xc0, 0x72, 0x07, 0x2c, 0x7f, 0x9d, 0x1e, 0x86, 0x5b, 0xed, 0x27, 0x29,
    0xdf, 0x03, 0x97, 0x62, 0xef, 0x44, 0xd3, 0x5b, 0x3d, 0xdb, 0x9c, 0x5e,
    0x1b, 0x7b, 0x39, 0xb4, 0x0b, 0x6d, 0x04, 0x6b, 0xbb, 0xbb, 0x2c, 0x5f,
    0xcf, 0xb3, 0x7a, 0x05, 0x02, 0x03, 0x01, 0x00, 0x01, 0x02, 0x82, 0x01,
    0x00, 0x5e, 0x79, 0x65, 0x49, 0xa5, 0x76, 0x79, 0xf9, 0x05, 0x45, 0x0f,
    0xf4, 0x03, 0xbd, 0xa4, 0x7d, 0x29, 0xd5, 0xde, 0x33, 0x63, 0xd8, 0xb8,
    0xac, 0x97, 0xeb, 0x3f, 0x5e, 0x55, 0xe8, 0x7d, 0xf3, 0xe7, 0x3b, 0x5c,
    0x2d, 0x54, 0x67, 0x36, 0xd6, 0x1d, 0x46, 0xf5, 0xca, 0x2d, 0x8b, 0x3a,
    0x7e, 0xdc, 0x45, 0x38, 0x79, 0x7e, 0x65, 0x71, 0x5f, 0x1c, 0x5e, 0x79,
    0xb1, 0x40, 0xcd, 0xfe, 0xc5, 0xe1, 0xc1, 0x6b, 0x78, 0x04, 0x4e, 0x8e,
    0x79, 0xf9, 0x0a, 0xfc, 0x79, 0xb1, 0x5e, 0xb3, 0x60, 0xe3, 0x68, 0x7b,
    0xc6, 0xef, 0xcb, 0x71, 0x4c, 0xba, 0xa7, 0x79, 0x5c, 0x7a, 0x81, 0xd1,
    0x71, 0xe7, 0x00, 0x21, 0x13, 0xe2, 0x55, 0x69, 0x0e, 0x75, 0xbe, 0x09,
    0xc3, 0x4f, 0xa9, 0xc9, 0x68, 0x22, 0x0e, 0x97, 0x8d, 0x89, 0x6e, 0xf1,
    0xe8, 0x88, 0x7a, 0xd1, 0xd9, 0x09, 0x5d, 0xd3, 0x28, 0x78, 0x25, 0x0b,
    0x1c, 0x47, 0x73, 0x25, 0xcc, 0x21, 0xb6, 0xda, 0xc6, 0x24, 0x5a, 0xd0,
    0x37, 0x14, 0x46, 0xc7, 0x94, 0x69, 0xe4, 0x43, 0x6f, 0x47, 0xde, 0x00,
    0x33, 0x4d, 0x8f, 0x95, 0x72, 0xfa, 0x68, 0x71, 0x17, 0x66, 0x12, 0x1a,
    0x87, 0x27, 0xf7, 0xef, 0x7e, 0xe0, 0x35, 0x58, 0xf2, 0x4d, 0x6f, 0x35,
    0x01, 0xaa, 0x96, 0xe2, 0x3d, 0x51, 0x13, 0x86, 0x9c, 0x79, 0xd0, 0xb7,
    0xb6, 0x64, 0xe8, 0x86, 0x65, 0x50, 0xbf, 0xcc, 0x27, 0x53, 0x1f, 0x51,
    0xd4, 0xca, 0xbe, 0xf5, 0xdd, 0x77, 0x70, 0x98, 0x0f, 0xee, 0xa8, 0x96,
    0x07, 0x5f, 0x45, 0x6a, 0x7a, 0x0d, 0x03, 0x9c, 0x4f, 0x29, 0xf6, 0x06,
    0xf3, 0x5d, 0x58, 0x6c, 0x47, 0xd0, 0x96, 0xa9, 0x03, 0x17, 0xbb, 0x4e,
    0xc9, 0x21, 0xe0, 0xac, 0xcd, 0x78, 0x78, 0xb2, 0xfe, 0x81, 0xb2, 0x51,
    0x53, 0xa6, 0x1f, 0x98, 0x45, 0x02, 0x81, 0x81, 0x00, 0xcf, 0x73, 0x8c,
    0xbe, 0x6d, 0x45, 0x2d, 0x0c, 0x0b, 0x5d, 0x5c, 0x6c, 0x75, 0x78, 0xcc,
    0x35, 0x48, 0xb6, 0x98, 0xf1, 0xb9, 0x64, 0x60, 0x8c, 0x43, 0xeb, 0x85,
    0xab, 0x04, 0xb6, 0x7d, 0x1b, 0x71, 0x75, 0x06, 0xe2, 0xda, 0x84, 0x68,
    0x2e, 0x7f, 0x4c, 0xe3, 0x73, 0xb4, 0xde, 0x51, 0x4b, 0xb6, 0x51, 0x86,
    0x7b, 0xd0, 0xe6, 0x4d, 0xf3, 0xd1, 0xcf, 0x1a, 0xfe, 0x7f, 0x3a, 0x83,
    0xba, 0xb3, 0xe1, 0xff, 0x54, 0x13, 0x93, 0xd7, 0x9c, 0x27, 0x80, 0xb7,
    0x1e, 0x64, 0x9e, 0xf7, 0x32, 0x2b, 0x46, 0x29, 0xf7, 0xf8, 0x18, 0x6c,
    0xf7, 0x4a, 0xbe, 0x4b, 0xee, 0x96, 0x90, 0x8f, 0xa2, 0x16, 0x22, 0x6a,
    0xcc, 0x48, 0x06, 0x74, 0x63, 0x43, 0x7f, 0x27, 0x22, 0x44, 0x3c, 0x2d,
    0x3b, 0x62, 0xf1, 0x1c, 0xb4, 0x27, 0x33, 0x85, 0x26, 0x60, 0x48, 0x16,
    0xcb, 0xef, 0xf8, 0xcd, 0x37, 0x02, 0x81, 0x81, 0x00, 0xce, 0x15, 0x43,
    0x6e, 0x4b, 0x0f, 0xf9, 0x3f, 0x87, 0xc3, 0x41, 0x45, 0x97, 0xb1, 0x49,
    0xc2, 0x19, 0x23, 0x87, 0xe4, 0x24, 0x1c, 0x64, 0xe5, 0x28, 0xcb, 0x43,
    0x10, 0x14, 0x14, 0x0e, 0x19, 0xcb, 0xbb, 0xdb, 0xfd, 0x11, 0x9d, 0x17,
    0x68, 0x78, 0x6d, 0x61, 0x70, 0x63, 0x3a, 0xa1, 0xb3, 0xf3, 0xa7, 0x5b,
    0x0e, 0xff, 0xb7, 0x61, 0x11, 0x54, 0x91, 0x99, 0xe5, 0x91, 0x32, 0x2d,
    0xeb, 0x3f, 0xd8, 0x3e, 0xf7, 0xd4, 0xcb, 0xd2, 0xa3, 0x41, 0xc1, 0xee,
    0xc6, 0x92, 0x13, 0xeb, 0x7f, 0x42, 0x58, 0xf4, 0xd0, 0xb2, 0x74, 0x1d,
    0x8e, 0x87, 0x46, 0xcd, 0x14, 0xb8, 0x16, 0xad, 0xb5, 0xbd, 0x0d, 0x6c,
    0x95, 0x5a, 0x16, 0xbf, 0xe9, 0x53, 0xda, 0xfb, 0xed, 0x83, 0x51, 0x67,
    0xa9, 0x55, 0xab, 0x54, 0x02, 0x95, 0x20, 0xa6, 0x68, 0x17, 0x53, 0xa8,
    0xea, 0x43, 0xe5, 0xb0, 0xa3, 0x02, 0x81, 0x80, 0x67, 0x9c, 0x32, 0x83,
    0x39, 0x57, 0xff, 0x73, 0xb0, 0x89, 0x64, 0x8b, 0xd6, 0xf0, 0x0a, 0x2d,
    0xe2, 0xaf, 0x30, 0x1c, 0x2a, 0x97, 0xf3, 0x90, 0x9a, 0xab, 0x9b, 0x0b,
    0x1b, 0x43, 0x79, 0xa0, 0xa7, 0x3d, 0xe7, 0xbe, 0x8d, 0x9c, 0xeb, 0xdb,
    0xad, 0x40, 0xdd, 0xa9, 0x00, 0x80, 0xb8, 0xe1, 0xb3, 0xa1, 0x6c, 0x25,
    0x92, 0xe4, 0x33, 0xb2, 0xbe, 0xeb, 0x4d, 0x74, 0x26, 0x5f, 0x37, 0x43,
    0x9c, 0x6c, 0x17, 0x76, 0x0a, 0x81, 0x20, 0x82, 0xa1, 0x48, 0x2c, 0x2d,
    0x45, 0xdc, 0x0f, 0x62, 0x43, 0x32, 0xbb, 0xeb, 0x59, 0x41, 0xf9, 0xca,
    0x58, 0xce, 0x4a, 0x66, 0x53, 0x54, 0xc8, 0x28, 0x10, 0x1e, 0x08, 0x71,
    0x16, 0xd8, 0x02, 0x71, 0x41, 0x58, 0xd4, 0x56, 0xcc, 0xf5, 0xb1, 0x31,
    0xa3, 0xed, 0x00, 0x85, 0x09, 0xbf, 0x35, 0x95, 0x41, 0x29, 0x40, 0x19,
    0x83, 0x35, 0x24, 0x69, 0x02, 0x81, 0x80, 0x55, 0x10, 0x0b, 0xcc, 0x3b,
    0xa9, 0x75, 0x3d, 0x16, 0xe1, 0xae, 0x50, 0x76, 0x63, 0x94, 0x49, 0x4c,
    0xad, 0x10, 0xcb, 0x47, 0x68, 0x7c, 0xf0, 0xe5, 0xdc, 0xb8, 0x6a, 0xab,
    0x8e, 0xf7, 0x9f, 0x08, 0x2c, 0x1b, 0x8a, 0xa2, 0xb9, 0x8f, 0xce, 0xec,
    0x5e, 0x61, 0xa8, 0xcd, 0x1c, 0x87, 0x60, 0x4a, 0xc3, 0x1a, 0x5f, 0xdf,
    0x87, 0x26, 0xc6, 0xcb, 0x7c, 0x69, 0xe4, 0x8b, 0x01, 0x06, 0x59, 0x22,
    0xfa, 0x34, 0x4b, 0x81, 0x87, 0x3c, 0x03, 0x6d, 0x02, 0x0a, 0x77, 0xe6,
    0x15, 0xd8, 0xcf, 0xa7, 0x68, 0x26, 0x6c, 0xfa, 0x2b, 0xd9, 0x83, 0x5a,
    0x2d, 0x0c, 0x3b, 0x70, 0x1c, 0xd4, 0x48, 0xbe, 0xa7, 0x0a, 0xd9, 0xbe,
    0xdc, 0xc3, 0x0c, 0x21, 0x33, 0xb3, 0x66, 0xff, 0x1c, 0x1b, 0xc8, 0x96,
    0x76, 0xe8, 0x6f, 0x44, 0x74, 0xbc, 0x9b, 0x1c, 0x7d, 0xc8, 0xac, 0x21,
    0xa8, 0x6e, 0x37, 0x02, 0x81, 0x80, 0x2c, 0x7c, 0xad, 0x1e, 0x75, 0xf6,
    0x69, 0x1d, 0xe7, 0xa6, 0xca, 0x74, 0x7d, 0x67, 0xc8, 0x65, 0x28, 0x66,
    0xc4, 0x43, 0xa6, 0xbd, 0x40, 0x57, 0xae, 0xb7, 0x65, 0x2c, 0x52, 0xf9,
    0xe4, 0xc7, 0x81, 0x7b, 0x56, 0xa3, 0xd2, 0x0d, 0xe8, 0x33, 0x70, 0xcf,
    0x06, 0x84, 0xb3, 0x4e, 0x44, 0x50, 0x75, 0x61, 0x96, 0x86, 0x4b, 0xb6,
    0x2b, 0xad, 0xf0, 0xad, 0x57, 0xd0, 0x37, 0x0d, 0x1d, 0x35, 0x50, 0xcb,
    0x69, 0x22, 0x39, 0x29, 0xb9, 0x3a, 0xd3, 0x29, 0x23, 0x02, 0x60, 0xf7,
    0xab, 0x30, 0x40, 0xda, 0x8e, 0x4d, 0x45, 0x70, 0x26, 0xf4, 0xa2, 0x0d,
    0xd0, 0x64, 0x5d, 0x47, 0x3c, 0x18, 0xf4, 0xd4, 0x52, 0x95, 0x00, 0xae,
    0x84, 0x6b, 0x47, 0xb2, 0x3c, 0x82, 0xd3, 0x72, 0x53, 0xde, 0x72, 0x2c,
    0xf7, 0xc1, 0x22, 0x36, 0xd9, 0x18, 0x56, 0xfe, 0x39, 0x28, 0x33, 0xe0,
    0xdb, 0x03};

const uint8_t kTestRsaPublicKey_2048[] = {
    0x30, 0x82, 0x01, 0x0a, 0x02, 0x82, 0x01, 0x01, 0x00, 0xa7, 0x00, 0x36,
    0x60, 0x65, 0xdc, 0xbd, 0x54, 0x5a, 0x2a, 0x40, 0xb4, 0xe1, 0x15, 0x94,
    0x58, 0x11, 0x4f, 0x94, 0x58, 0xdd, 0xde, 0xa7, 0x1f, 0x3c, 0x2c, 0xe0,
    0x88, 0x09, 0x29, 0x61, 0x57, 0x67, 0x5e, 0x56, 0x7e, 0xee, 0x27, 0x8f,
    0x59, 0x34, 0x9a, 0x2a, 0xaa, 0x9d, 0xb4, 0x4e, 0xfa, 0xa7, 0x6a, 0xd4,
    0xc9, 0x7a, 0x53, 0xc1, 0x4e, 0x9f, 0xe3, 0x34, 0xf7, 0x3d, 0xb7, 0xc9,
    0x10, 0x47, 0x4f, 0x28, 0xda, 0x3f, 0xce, 0x31, 0x7b, 0xfd, 0x06, 0x10,
    0xeb, 0xf7, 0xbe, 0x92, 0xf9, 0xaf, 0xfb, 0x3e, 0x68, 0xda, 0xee, 0x1a,
    0x64, 0x4c, 0xf3, 0x29, 0xf2, 0x73, 0x9e, 0x39, 0xd8, 0xf6, 0x6f, 0xd8,
    0xb2, 0x80, 0x82, 0x71, 0x8e, 0xb5, 0xa4, 0xf2, 0xc2, 0x3e, 0xcd, 0x0a,
    0xca, 0xb6, 0x04, 0xcd, 0x9a, 0x13, 0x8b, 0x54, 0x73, 0x54, 0x25, 0x54,
    0x8c, 0xbe, 0x98, 0x7a, 0x67, 0xad, 0xda, 0xb3, 0x4e, 0xb3, 0xfa, 0x82,
    0xa8, 0x4a, 0x67, 0x98, 0x56, 0x57, 0x54, 0x71, 0xcd, 0x12, 0x7f, 0xed,
    0xa3, 0x01, 0xc0, 0x6a, 0x8b, 0x24, 0x03, 0x96, 0x88, 0xbe, 0x97, 0x66,
    0x2a, 0xbc, 0x53, 0xc9, 0x83, 0x06, 0x51, 0x5a, 0x88, 0x65, 0x13, 0x18,
    0xe4, 0x3a, 0xed, 0x6b, 0xf1, 0x61, 0x5b, 0x4c, 0xc8, 0x1e, 0xf4, 0xc2,
    0xae, 0x08, 0x5e, 0x2d, 0x5f, 0xf8, 0x12, 0x7f, 0xa2, 0xfc, 0xbb, 0x21,
    0x18, 0x30, 0xda, 0xfe, 0x40, 0xfb, 0x01, 0xca, 0x2e, 0x37, 0x0e, 0xce,
    0xdd, 0x76, 0x87, 0x82, 0x46, 0x0b, 0x3a, 0x77, 0x8f, 0xc0, 0x72, 0x07,
    0x2c, 0x7f, 0x9d, 0x1e, 0x86, 0x5b, 0xed, 0x27, 0x29, 0xdf, 0x03, 0x97,
    0x62, 0xef, 0x44, 0xd3, 0x5b, 0x3d, 0xdb, 0x9c, 0x5e, 0x1b, 0x7b, 0x39,
    0xb4, 0x0b, 0x6d, 0x04, 0x6b, 0xbb, 0xbb, 0x2c, 0x5f, 0xcf, 0xb3, 0x7a,
    0x05, 0x02, 0x03, 0x01, 0x00, 0x01};

const char kTestMessage[] =
    "A fool thinks himself to be wise, but a"
    " wise man knows himself to be a fool.";

const uint8_t kTestEncryptedMessage_3072[] = {
    0x4e, 0x85, 0x01, 0x65, 0x1c, 0xb2, 0xe6, 0x39, 0xb9, 0x6e, 0x93, 0x6a,
    0x18, 0xa4, 0xa6, 0xb2, 0x86, 0x3d, 0x8e, 0x23, 0x34, 0x68, 0xa9, 0x74,
    0x78, 0x0e, 0x6f, 0x94, 0xb3, 0x4f, 0x14, 0xc0, 0x88, 0x0a, 0xec, 0x64,
    0x47, 0xbd, 0x4b, 0x66, 0x17, 0xed, 0xc9, 0xe4, 0xff, 0x5e, 0xbe, 0x6b,
    0xac, 0xf1, 0xd7, 0xc3, 0xef, 0x24, 0x52, 0xf7, 0x92, 0x1a, 0xe9, 0xee,
    0xa3, 0x31, 0x0c, 0xf5, 0xbc, 0x66, 0xf8, 0x20, 0x03, 0x2a, 0x1e, 0xb2,
    0x67, 0x3c, 0xbd, 0xe8, 0x8e, 0x13, 0xc5, 0x00, 0xd6, 0xe0, 0x99, 0x91,
    0xd1, 0x55, 0x36, 0x0e, 0x66, 0x55, 0x38, 0x0b, 0xa4, 0x43, 0xe7, 0xfc,
    0x8a, 0xa1, 0xee, 0xef, 0x20, 0x45, 0xf5, 0x53, 0xec, 0x58, 0x0b, 0x33,
    0x50, 0xa5, 0x4f, 0xd3, 0xdd, 0x0e, 0xd8, 0x68, 0x48, 0x45, 0xe4, 0x47,
    0x54, 0xce, 0xfc, 0xca, 0xf8, 0x77, 0x19, 0xc3, 0xe9, 0x47, 0xd7, 0x27,
    0xf6, 0x58, 0xd1, 0x4f, 0xb0, 0xc3, 0xad, 0xc0, 0x1b, 0x39, 0xed, 0x08,
    0x78, 0x21, 0x11, 0x87, 0x94, 0xd4, 0x01, 0x1f, 0x74, 0x66, 0xda, 0xbe,
    0x3c, 0x94, 0x66, 0x5e, 0x49, 0x34, 0x53, 0x43, 0xfe, 0xea, 0xcb, 0x7f,
    0x5e, 0x56, 0xad, 0x7b, 0xc5, 0x24, 0xe1, 0x0e, 0xa6, 0xa4, 0xf5, 0x66,
    0x09, 0x79, 0xfc, 0x8b, 0x8f, 0xa8, 0x1c, 0xa7, 0x57, 0xf3, 0x64, 0x1a,
    0x6a, 0xad, 0x6e, 0xdb, 0x2e, 0x60, 0x1a, 0xbe, 0xb8, 0x06, 0x30, 0x9d,
    0xb8, 0x92, 0x05, 0x96, 0x5e, 0xec, 0x61, 0x2a, 0x8c, 0x19, 0x67, 0x6e,
    0x93, 0x52, 0xac, 0x6b, 0xfb, 0x47, 0x74, 0x13, 0x6d, 0x2b, 0x13, 0x79,
    0x18, 0x2c, 0x4b, 0x79, 0x76, 0x57, 0xb3, 0x31, 0x95, 0x2b, 0x33, 0x27,
    0xad, 0x85, 0xe5, 0xab, 0xa0, 0x00, 0x3c, 0xed, 0x99, 0x89, 0x1c, 0xdf,
    0x86, 0x89, 0xc6, 0x06, 0xb8, 0x82, 0x95, 0x1b, 0xb6, 0x8d, 0xcb, 0x73,
    0x11, 0xf6, 0x4d, 0xeb, 0xb8, 0xd9, 0x19, 0xf9, 0xf9, 0xbe, 0xc6, 0x6e,
    0x53, 0x37, 0x03, 0x0e, 0x30, 0x06, 0x2d, 0x80, 0xc4, 0x6f, 0x11, 0x2b,
    0xf0, 0xab, 0x21, 0xf6, 0xe0, 0x78, 0x5a, 0x72, 0xb5, 0x6a, 0xf9, 0xcb,
    0x15, 0x3d, 0x80, 0x49, 0xb3, 0x6a, 0x71, 0x9e, 0xe0, 0xf4, 0xa0, 0xbd,
    0x0d, 0x6a, 0xae, 0x0f, 0xd5, 0xda, 0x42, 0xe4, 0xd8, 0x98, 0x11, 0xc0,
    0xc5, 0x1c, 0x1d, 0xdd, 0x38, 0x02, 0xb5, 0x69, 0x9e, 0x11, 0x83, 0xbd,
    0x01, 0x7d, 0xbc, 0x6d, 0x8f, 0xc8, 0x3a, 0x48, 0x49, 0xbf, 0x36, 0xb4,
    0x19, 0xa2, 0x0c, 0x6a, 0x0a, 0xaa, 0x15, 0x9e, 0xe3, 0x30, 0x91, 0x95,
    0x0a, 0xed, 0x2a, 0xa3, 0xec, 0x97, 0x01, 0xfb, 0xee, 0x28, 0xd7, 0xfc,
    0x34, 0xd5, 0x1a, 0x62, 0x9c, 0xb2, 0x9d, 0x8b, 0xe9, 0x49, 0x48, 0x1d};

// Self-generated test vector.  Used to verify algorithm stability.
const uint8_t kTestEncryptedMessage_2048[] = {
    0x73, 0x37, 0xa5, 0xe3, 0x73, 0xbb, 0xa7, 0xbf, 0xb1, 0xfc, 0x98, 0x6c,
    0xd2, 0x20, 0xe2, 0x79, 0xea, 0x90, 0x41, 0xcf, 0x2b, 0xe0, 0x22, 0x0f,
    0xe3, 0x6e, 0x2e, 0x61, 0x7d, 0xe5, 0xc7, 0x5a, 0x46, 0x87, 0xed, 0x35,
    0x01, 0x38, 0x65, 0x20, 0x2c, 0x42, 0x9d, 0x15, 0x54, 0x43, 0x40, 0x9f,
    0x01, 0x24, 0x03, 0x93, 0xd5, 0x74, 0xc3, 0x40, 0x8c, 0x3e, 0xa5, 0x7a,
    0x32, 0xb1, 0x85, 0xd5, 0x48, 0xba, 0xe3, 0x94, 0xfc, 0xbc, 0x98, 0x2d,
    0xc6, 0x79, 0x00, 0xc8, 0xab, 0xe0, 0x3d, 0x7f, 0x47, 0x38, 0x3b, 0x2f,
    0x1a, 0xc7, 0x78, 0x05, 0x15, 0x72, 0xb1, 0x81, 0x9d, 0xa5, 0xd6, 0x84,
    0x25, 0xc6, 0xea, 0x67, 0x2c, 0x32, 0x87, 0xda, 0x1b, 0xdf, 0x8c, 0x86,
    0x01, 0xc8, 0xa1, 0x78, 0xfe, 0xf7, 0x88, 0x89, 0xa2, 0x76, 0x89, 0xeb,
    0x21, 0x43, 0x36, 0xaa, 0x77, 0x8e, 0xfb, 0x3f, 0x8d, 0x34, 0x0c, 0x2e,
    0x1e, 0xbd, 0x63, 0x4a, 0x9f, 0xba, 0xd4, 0x5c, 0xa1, 0x81, 0xf0, 0x5d,
    0x8b, 0x33, 0x5e, 0x1f, 0xef, 0x7a, 0xff, 0x3d, 0x4d, 0xb6, 0x6e, 0xd2,
    0xf9, 0x5b, 0x53, 0x1b, 0x4f, 0x23, 0x76, 0x1d, 0x71, 0xe6, 0x28, 0xca,
    0x91, 0x3c, 0xd5, 0x8b, 0x1c, 0xcb, 0x0b, 0x4f, 0x9f, 0x27, 0xee, 0xc7,
    0x1c, 0x25, 0x53, 0x2b, 0x04, 0xad, 0x58, 0x0d, 0x4b, 0xce, 0xa6, 0x82,
    0x33, 0x24, 0x97, 0xe0, 0xfd, 0xdf, 0x6c, 0x72, 0xc5, 0x04, 0xc7, 0xe5,
    0xb2, 0xce, 0x50, 0xa9, 0xe8, 0x25, 0xed, 0x76, 0x3f, 0x53, 0xce, 0xbe,
    0xac, 0x3b, 0xb2, 0x16, 0x11, 0x40, 0x11, 0x7a, 0xab, 0x27, 0xdf, 0x2e,
    0x20, 0xc3, 0x86, 0x18, 0xe7, 0xf2, 0x6a, 0xd6, 0xf6, 0xbf, 0x93, 0xcd,
    0xee, 0x0e, 0x96, 0xcf, 0xcf, 0xee, 0xfa, 0xf9, 0xcc, 0x73, 0xd5, 0x7c,
    0xf3, 0xbe, 0x9a, 0xb3};

const uint8_t kTestSignature_3072[] = {
    0x80, 0xfd, 0x25, 0x0d, 0x3a, 0xac, 0x37, 0x58, 0x66, 0x62, 0x18, 0xb0,
    0x48, 0x0b, 0x24, 0x27, 0x63, 0x54, 0x49, 0x44, 0x9b, 0x80, 0xc3, 0xec,
    0xb2, 0xec, 0xad, 0xde, 0x1a, 0x19, 0x04, 0xed, 0xe3, 0xbb, 0x51, 0xc4,
    0xb5, 0x0d, 0xec, 0xa6, 0x53, 0xca, 0x3c, 0xac, 0x9a, 0x10, 0xa6, 0x45,
    0xaf, 0xda, 0x20, 0x33, 0xd3, 0x5c, 0x24, 0xb7, 0x04, 0x6e, 0xfd, 0xc5,
    0x69, 0x61, 0xd9, 0xb3, 0x48, 0x63, 0x4c, 0x18, 0xee, 0xf4, 0xe4, 0x42,
    0x8e, 0x6d, 0x54, 0x6b, 0x37, 0x26, 0x99, 0x28, 0xa7, 0xf1, 0x8a, 0xc8,
    0x70, 0x0f, 0x55, 0x32, 0xb6, 0x67, 0x32, 0x05, 0xca, 0x61, 0xf9, 0x33,
    0x49, 0xd8, 0x89, 0xe3, 0x46, 0xf0, 0xf9, 0xa7, 0x49, 0x65, 0x1f, 0xa8,
    0xb5, 0x51, 0x72, 0x2b, 0x77, 0x79, 0x3b, 0xc5, 0x70, 0x65, 0xa4, 0x0e,
    0xff, 0xab, 0x96, 0x83, 0x40, 0xea, 0xe3, 0xf3, 0x94, 0x28, 0x1f, 0xdc,
    0x56, 0x71, 0xa8, 0xf5, 0x2c, 0xc6, 0x8a, 0x17, 0xd7, 0xdd, 0x80, 0x2b,
    0x31, 0x87, 0x0b, 0xe1, 0xdc, 0x8b, 0x4b, 0x09, 0x39, 0x1c, 0xab, 0x73,
    0xb3, 0x98, 0x72, 0xb0, 0xbe, 0xb2, 0xcc, 0x84, 0xd5, 0x39, 0x43, 0x87,
    0xd3, 0x0a, 0x06, 0x14, 0xf6, 0xe2, 0x6e, 0x84, 0xcb, 0xe3, 0x83, 0x1d,
    0x88, 0x5e, 0x8e, 0x01, 0x44, 0xb6, 0xa9, 0x56, 0x70, 0x4d, 0xf5, 0xc3,
    0x18, 0xff, 0x1a, 0x32, 0xd3, 0xbe, 0xbc, 0x93, 0x90, 0x65, 0x3b, 0x10,
    0x5f, 0x46, 0x31, 0xff, 0xc9, 0x77, 0x76, 0x79, 0x23, 0x73, 0x00, 0xf4,
    0x58, 0xe7, 0x7d, 0x4a, 0x4f, 0x73, 0xec, 0x48, 0x63, 0x45, 0x02, 0xdf,
    0x34, 0xea, 0x3d, 0xcb, 0x88, 0xf9, 0x8d, 0xea, 0x9d, 0x08, 0x3a, 0x32,
    0x13, 0xef, 0x9a, 0xe0, 0xde, 0xa8, 0x78, 0x92, 0x25, 0xcd, 0xfe, 0x8c,
    0x25, 0x3a, 0x0d, 0xe8, 0x9a, 0xf0, 0xa1, 0x41, 0xc6, 0x10, 0xf4, 0x67,
    0x54, 0x39, 0x4f, 0x30, 0xfa, 0x1a, 0xb0, 0xd4, 0x40, 0x83, 0x51, 0x77,
    0xb4, 0x78, 0x8a, 0xdf, 0x8e, 0xd4, 0x1e, 0xf8, 0x3e, 0xb3, 0x54, 0x33,
    0x6a, 0xb9, 0xc3, 0xdc, 0xf4, 0x72, 0x74, 0x87, 0x44, 0x93, 0xfd, 0x6e,
    0x09, 0x09, 0x0f, 0xb8, 0x01, 0xd4, 0xbc, 0xa4, 0x53, 0xe6, 0x38, 0x75,
    0x45, 0xc7, 0x6d, 0xc8, 0xe6, 0xff, 0x9f, 0x4d, 0x2a, 0x76, 0xb6, 0xdc,
    0x49, 0x70, 0xbd, 0x0b, 0xfd, 0x9e, 0x48, 0xad, 0xf4, 0x24, 0xbb, 0x9d,
    0x69, 0x07, 0x6a, 0xdc, 0xd4, 0xb7, 0xf9, 0x68, 0x25, 0xac, 0x70, 0x97,
    0x69, 0xeb, 0xc7, 0x9e, 0x3e, 0x58, 0x84, 0x61, 0xbb, 0x9c, 0x74, 0x1b,
    0xdd, 0xa1, 0xd9, 0xe7, 0x03, 0x30, 0x44, 0x3b, 0xbf, 0x51, 0xee, 0x74,
    0xf3, 0xd6, 0xfe, 0xf4, 0x36, 0x28, 0xf8, 0x35, 0x1a, 0xcd, 0x88, 0xec};

const uint8_t kTestSignature_2048[] = {
    0x6b, 0x8e, 0x01, 0x11, 0xc3, 0x8e, 0x1a, 0xf7, 0xd1, 0x91, 0x72, 0xe7,
    0xf2, 0x3e, 0x6f, 0xfd, 0x34, 0xfe, 0x11, 0x8f, 0x03, 0xc0, 0x01, 0xa5,
    0x87, 0xbf, 0xab, 0x92, 0x46, 0x4a, 0x33, 0xf6, 0xb1, 0x37, 0xdb, 0x5a,
    0x26, 0x27, 0xf8, 0x85, 0x0b, 0xc5, 0xb8, 0x8f, 0xca, 0x4a, 0x8a, 0x06,
    0x2e, 0xee, 0x66, 0xa3, 0x3a, 0x55, 0xcc, 0xbb, 0xb0, 0xcf, 0x22, 0x84,
    0xe9, 0xd7, 0x09, 0x36, 0x4b, 0xbc, 0x2f, 0xb7, 0x1e, 0xdc, 0xd6, 0x44,
    0x01, 0x19, 0xd3, 0x01, 0xb0, 0x8f, 0x25, 0xd5, 0x67, 0x8a, 0xb1, 0x1f,
    0xf6, 0xce, 0xac, 0x46, 0x95, 0x81, 0xff, 0x23, 0x33, 0x6f, 0xfe, 0x36,
    0x1a, 0x50, 0x7b, 0xf1, 0xf6, 0x42, 0x59, 0x59, 0x0e, 0x2c, 0x5c, 0x94,
    0xde, 0xea, 0x8d, 0xf7, 0x7c, 0x21, 0xe0, 0x89, 0xa4, 0x71, 0xc5, 0xec,
    0xc9, 0xd8, 0xcd, 0xbd, 0x86, 0x3e, 0x53, 0x1b, 0xd6, 0x44, 0x08, 0xdc,
    0x2c, 0xcd, 0x8e, 0x5b, 0xc7, 0x7a, 0x09, 0x44, 0x7e, 0xd0, 0x05, 0x88,
    0xcc, 0xbe, 0x38, 0xcc, 0x29, 0x88, 0x6a, 0xa5, 0x57, 0x9b, 0xc4, 0x52,
    0xd2, 0x10, 0xef, 0xa3, 0x7b, 0xd6, 0x7e, 0x46, 0x92, 0xc7, 0x68, 0xc5,
    0xc3, 0xc4, 0xb8, 0x8c, 0x3e, 0x5e, 0xac, 0x67, 0xcd, 0xdb, 0xd4, 0xa7,
    0x8c, 0xf8, 0x00, 0xb3, 0x35, 0xfb, 0x37, 0xbb, 0xeb, 0x0a, 0xbf, 0x67,
    0x6e, 0x3e, 0x20, 0xeb, 0x84, 0x6b, 0x07, 0xc4, 0x64, 0x14, 0xd6, 0x79,
    0xed, 0x3f, 0x01, 0x79, 0xe4, 0xa2, 0xbe, 0xaa, 0x62, 0x32, 0xa5, 0xf8,
    0x8c, 0xcf, 0x80, 0x3b, 0xc9, 0xf5, 0x38, 0x34, 0x69, 0x12, 0x8c, 0xd6,
    0x4a, 0x2b, 0x4b, 0x7f, 0x3a, 0xff, 0x84, 0x7a, 0x3d, 0x99, 0xd5, 0x99,
    0xc7, 0x4b, 0x8b, 0x25, 0x3c, 0x3d, 0x3c, 0x71, 0xc8, 0x76, 0x80, 0x3d,
    0xf3, 0xb4, 0x61, 0xe1};

}  // namespace

namespace edash_packager {
namespace media {

RsaTestSet::RsaTestSet() {}
RsaTestSet::~RsaTestSet() {}

RsaTestData::RsaTestData() {
  test_set_3072_bits_.test_message = kTestMessage;
  test_set_3072_bits_.public_key.assign(
      kTestRsaPublicKey_3072,
      kTestRsaPublicKey_3072 + sizeof(kTestRsaPublicKey_3072));
  test_set_3072_bits_.private_key.assign(
      kTestRsaPrivateKey_3072,
      kTestRsaPrivateKey_3072 + sizeof(kTestRsaPrivateKey_3072));
  test_set_3072_bits_.encrypted_message.assign(
      kTestEncryptedMessage_3072,
      kTestEncryptedMessage_3072 + sizeof(kTestEncryptedMessage_3072));
  test_set_3072_bits_.signature.assign(
      kTestSignature_3072, kTestSignature_3072 + sizeof(kTestSignature_3072));

  test_set_2048_bits_.test_message = kTestMessage;
  test_set_2048_bits_.public_key.assign(
      kTestRsaPublicKey_2048,
      kTestRsaPublicKey_2048 + sizeof(kTestRsaPublicKey_2048));
  test_set_2048_bits_.private_key.assign(
      kTestRsaPrivateKey_2048,
      kTestRsaPrivateKey_2048 + sizeof(kTestRsaPrivateKey_2048));
  test_set_2048_bits_.encrypted_message.assign(
      kTestEncryptedMessage_2048,
      kTestEncryptedMessage_2048 + sizeof(kTestEncryptedMessage_2048));
  test_set_2048_bits_.signature.assign(
      kTestSignature_2048, kTestSignature_2048 + sizeof(kTestSignature_2048));
}
RsaTestData::~RsaTestData() {}

}  // namespace media
}  // namespace edash_packager
