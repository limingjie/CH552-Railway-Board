#pragma once

#include "font.h"

__code uint8_t _OLED_FONT_CHINESE_24x24[] = {
    0x00, 0x10, 0x00, 0x30, 0x38, 0x00, 0x38, 0x0c, 0x00, 0x1c, 0x07, 0x00, 0x8e, 0xff, 0x3f, 0xe2, 0x00, 0x00, 0x40,
    0x00, 0x20, 0xfc, 0x0c, 0x38, 0xfc, 0xec, 0x1f, 0x80, 0x2c, 0x00, 0xfe, 0x2c, 0x00, 0xfe, 0x2c, 0x00, 0x80, 0x2c,
    0x0c, 0xfc, 0xec, 0x07, 0xfc, 0x0c, 0x66, 0x00, 0x0e, 0x33, 0xe0, 0x07, 0x18, 0xfe, 0x7f, 0x0e, 0x66, 0xe0, 0x07,
    0x60, 0xe0, 0x0f, 0x60, 0x7f, 0x1c, 0xe0, 0x07, 0x38, 0x60, 0x00, 0x30, 0x00, 0x00, 0x00,  // '微' 0x5fae
    0x00, 0x00, 0x00, 0x00, 0x10, 0x20, 0x00, 0x1c, 0x70, 0x00, 0x0f, 0x38, 0xe0, 0x07, 0x18, 0xfe, 0x1f, 0x0c, 0x3e,
    0x70, 0x07, 0x30, 0xc0, 0x03, 0x30, 0xe0, 0x03, 0x30, 0x7c, 0x06, 0xf0, 0x1f, 0x0c, 0xf0, 0x01, 0x1c, 0x00, 0x00,
    0x18, 0x00, 0x00, 0x18, 0x00, 0x00, 0x30, 0xfe, 0xff, 0x33, 0xfe, 0xff, 0x33, 0x80, 0x01, 0x30, 0x00, 0x07, 0x30,
    0x00, 0x0e, 0x30, 0x00, 0x1c, 0x30, 0x00, 0x30, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,  // '处' 0x5904
    0x00, 0x00, 0x00, 0x18, 0x0c, 0x18, 0x18, 0x0c, 0x18, 0x18, 0x0c, 0x18, 0xf8, 0xff, 0x0f, 0xf8, 0xff, 0x0f, 0x18,
    0x0c, 0x0c, 0x18, 0x0c, 0x06, 0x18, 0x00, 0x66, 0x00, 0x00, 0x63, 0xfc, 0x1f, 0x63, 0x8c, 0x18, 0x63, 0x8c, 0x18,
    0x63, 0x8c, 0x18, 0x63, 0x8c, 0x18, 0x63, 0xfc, 0xff, 0x7f, 0xfc, 0xff, 0x7f, 0x8c, 0x18, 0x63, 0x8c, 0x18, 0x63,
    0x8c, 0x18, 0x63, 0xfc, 0x1f, 0x63, 0xfc, 0x1f, 0x63, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,  // '理' 0x7406
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x01, 0x00, 0x8c, 0x01, 0xfc, 0x8c, 0x7f, 0xfc, 0xcc, 0x7f, 0xcc, 0xec, 0x61, 0xcc,
    0xfc, 0x61, 0xcc, 0xbc, 0x61, 0xcc, 0x9c, 0x61, 0xfc, 0x8e, 0x7f, 0x00, 0x0f, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x0c,
    0x00, 0xfc, 0x8c, 0x7f, 0xfc, 0x8c, 0x7f, 0xcc, 0x9d, 0x61, 0xcc, 0xbd, 0x61, 0xcc, 0xef, 0x61, 0xcc, 0xce, 0x61,
    0xfc, 0xcc, 0x7f, 0xfc, 0x8c, 0x7f, 0x00, 0x8c, 0x01, 0x00, 0x8c, 0x01, 0x00, 0x00, 0x00,  // '器' 0x5668
    0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0xc0, 0x00, 0x06, 0xc0, 0x00, 0x03, 0xc0, 0x00, 0x03, 0xc0, 0x00, 0x03, 0xc0,
    0x80, 0x01, 0xc0, 0x80, 0x01, 0xfe, 0xff, 0x3f, 0xfe, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0x3f, 0x00, 0x06, 0x30, 0x00, 0x03, 0x30, 0x00, 0x03, 0x30, 0x80, 0x01, 0x30,
    0xc0, 0x00, 0x30, 0xe0, 0x00, 0x30, 0x60, 0x80, 0x3c, 0x40, 0x00, 0x1f, 0x00, 0x00, 0x00,  // '北' 0x5317
    0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x30, 0x00, 0x30, 0x30, 0x00, 0x18, 0x30, 0x00, 0x1c, 0x30, 0x7f, 0x07, 0x30,
    0x63, 0x02, 0x30, 0x63, 0x60, 0x30, 0x63, 0x60, 0x30, 0x63, 0x60, 0x34, 0x63, 0x60, 0x3e, 0xe3, 0x7f, 0x3c, 0xe3,
    0x3f, 0x30, 0x63, 0x00, 0x30, 0x63, 0x00, 0x30, 0x63, 0x00, 0x30, 0x63, 0x02, 0x30, 0x63, 0x03, 0x30, 0x7f, 0x06,
    0x30, 0x7f, 0x1c, 0x30, 0x00, 0x38, 0x30, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // '京' 0x4eac
    0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00,
    0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0xfe, 0xff, 0x3f, 0xfe, 0xff, 0x3f, 0x00, 0x03,
    0x30, 0x00, 0x03, 0x30, 0x00, 0x03, 0x30, 0x00, 0x03, 0x30, 0x00, 0x03, 0x30, 0x00, 0x03, 0x30, 0x00, 0x03, 0x30,
    0x00, 0x03, 0x30, 0x00, 0x03, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,  // '上' 0x4e0a
    0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x04, 0x03, 0x70, 0x0c, 0x06, 0x7c, 0x0c, 0x8c, 0x0f, 0x18, 0xc4, 0x01, 0x30,
    0x00, 0x00, 0x80, 0x31, 0x00, 0xc0, 0x33, 0x0c, 0xf0, 0xf8, 0x0f, 0x3e, 0xff, 0x0c, 0x3c, 0x33, 0x0c, 0x30, 0x33,
    0x0c, 0x30, 0xf3, 0x0c, 0x30, 0xb7, 0x0d, 0x30, 0x3f, 0x6f, 0x30, 0x3b, 0x4e, 0x30, 0x33, 0x4c, 0x30, 0x33, 0x6c,
    0x30, 0xf3, 0x3f, 0x30, 0xff, 0x0f, 0x30, 0x30, 0x0c, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00,  // '海' 0x6d77
    0x00, 0x00, 0x00, 0x00, 0xc2, 0x00, 0x00, 0xc2, 0x10, 0x08, 0x62, 0x30, 0x48, 0x72, 0x31, 0x48, 0x3a, 0x11, 0x48,
    0x1e, 0x19, 0x48, 0x16, 0x09, 0x48, 0x13, 0x0d, 0xc8, 0x13, 0x07, 0xf8, 0x12, 0x03, 0x7e, 0xf2, 0x3f, 0x4e, 0xfa,
    0x3f, 0x48, 0x1a, 0x03, 0x48, 0x1a, 0x07, 0x48, 0x0a, 0x05, 0x48, 0x0e, 0x0d, 0x48, 0x1e, 0x19, 0x48, 0x3a, 0x19,
    0x48, 0x32, 0x31, 0x08, 0x62, 0x10, 0x08, 0xc2, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00, 0x00,  // '秦' 0x79e6
    0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x60, 0x00, 0x60, 0x60, 0xf0, 0x67, 0x66, 0xf0, 0x67, 0x66, 0x90,
    0x64, 0x66, 0x90, 0x64, 0x66, 0x90, 0x64, 0x66, 0x90, 0x64, 0x66, 0x98, 0x64, 0x66, 0x9e, 0xe4, 0x7f, 0x94, 0xe4,
    0x7f, 0x90, 0x64, 0x66, 0x90, 0x64, 0x66, 0x90, 0x64, 0x66, 0x90, 0x64, 0x66, 0x90, 0x64, 0x66, 0xf0, 0x67, 0x66,
    0xf0, 0x67, 0x66, 0x00, 0x60, 0x60, 0x00, 0x00, 0x60, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,  // '皇' 0x7687
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x1f, 0xf0, 0x3f, 0x18, 0xf0, 0x3f, 0x18, 0x30,
    0x30, 0x18, 0x30, 0x30, 0x18, 0xb0, 0x30, 0x18, 0xb0, 0xf0, 0x1f, 0xbe, 0x31, 0x18, 0x3c, 0x31, 0x18, 0x32, 0x33,
    0x18, 0x30, 0x32, 0x18, 0x30, 0x32, 0x18, 0x30, 0xb4, 0x3f, 0x30, 0x36, 0x60, 0xf0, 0x37, 0x60, 0xf0, 0x33, 0x60,
    0x00, 0x30, 0x70, 0x00, 0xf0, 0x3f, 0x00, 0xf0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // '岛' 0x5c9b
    0x00, 0x00, 0x00, 0x80, 0x01, 0x20, 0x80, 0x01, 0x30, 0x80, 0x01, 0x30, 0x80, 0x01, 0x18, 0x80, 0x01, 0x1c, 0x80,
    0x01, 0x0e, 0x80, 0x01, 0x07, 0x80, 0xc1, 0x03, 0x80, 0xf1, 0x00, 0x80, 0x3f, 0x00, 0xfe, 0x0f, 0x00, 0xfe, 0x0f,
    0x00, 0x80, 0x3f, 0x00, 0x80, 0xf9, 0x00, 0x80, 0xc1, 0x01, 0x80, 0x81, 0x03, 0x80, 0x01, 0x0e, 0x80, 0x01, 0x0c,
    0x80, 0x01, 0x18, 0x80, 0x01, 0x38, 0x80, 0x01, 0x30, 0x80, 0x01, 0x10, 0x00, 0x00, 0x00,  // '大' 0x5927
    0x00, 0x00, 0x00, 0x00, 0x03, 0x30, 0x02, 0x03, 0x78, 0x06, 0x03, 0x0c, 0x1c, 0xff, 0x0f, 0x38, 0xff, 0x0f, 0x10,
    0x00, 0x0c, 0x00, 0x00, 0x18, 0x18, 0x62, 0x18, 0x18, 0x67, 0x30, 0xd8, 0x67, 0x30, 0xf8, 0x66, 0x30, 0x3e, 0x66,
    0x30, 0x1e, 0x66, 0x30, 0x18, 0x66, 0x30, 0xd8, 0xff, 0x3f, 0xd8, 0xff, 0x3f, 0x18, 0x66, 0x30, 0x18, 0x66, 0x30,
    0x18, 0x66, 0x30, 0x18, 0x66, 0x30, 0x18, 0x60, 0x30, 0x00, 0x60, 0x30, 0x00, 0x00, 0x00,  // '连' 0x8fde
    0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0xf8, 0xe0, 0xff, 0x3f, 0xe0, 0xff, 0x07, 0x60, 0x00, 0x00, 0x60,
    0x00, 0x00, 0x60, 0x00, 0x00, 0x60, 0x00, 0x00, 0x60, 0x00, 0x00, 0x60, 0x00, 0x00, 0x64, 0x00, 0x00, 0x7c, 0x00,
    0x00, 0x7e, 0x00, 0x00, 0x60, 0x00, 0x00, 0x60, 0x00, 0x00, 0x60, 0x00, 0x00, 0x60, 0x00, 0x00, 0x60, 0x00, 0x00,
    0x60, 0x00, 0x00, 0x60, 0x00, 0x00, 0x60, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00,  // '广' 0x5e7f
    0x00, 0x00, 0x00, 0x00, 0x18, 0x20, 0x00, 0x1f, 0x30, 0xc0, 0x07, 0x3c, 0x40, 0x00, 0x0f, 0x00, 0xf0, 0x07, 0xfe,
    0xff, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x80, 0x0f, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xfe, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x18, 0x00,
    0x00, 0x00, 0x00, 0xfe, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // '州' 0x5dde
};

__code OLED_font OLED_FONT_CHINESE_24x24 = {
    (uint8_t *)_OLED_FONT_CHINESE_24x24,
    24,   // Font width in pixels
    3,    // Font height in OLED pages (8 pixels per page)
    0,    // Character spacing
    'A',  // The code point of the first character
};
