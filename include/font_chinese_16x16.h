#ifndef __OLED_FONT_CHINESE_16x16__
#define __OLED_FONT_CHINESE_16x16__

#pragma once

#include "font.h"

__code uint8_t _OLED_FONT_CHINESE_16x16[] = {
    0x10, 0x03, 0x98, 0x01, 0xcc, 0x7f, 0x34, 0x00, 0x98, 0x60, 0xa0, 0x1e, 0xbc, 0x02, 0xa0, 0x22,
    0xb8, 0x1e, 0x80, 0x48, 0xf8, 0x21, 0x2c, 0x1e, 0x20, 0x37, 0xe0, 0x40, 0x00, 0x40, 0x00, 0x00,  // '微'
    0x00, 0x00, 0x00, 0x43, 0xe0, 0x60, 0xbc, 0x33, 0x10, 0x1c, 0x10, 0x1e, 0xf0, 0x31, 0x10, 0x20,
    0x00, 0x60, 0xfc, 0x5f, 0x60, 0x40, 0xc0, 0x40, 0x80, 0x41, 0x00, 0x42, 0x00, 0x00, 0x00, 0x00,  // '处'
    0x00, 0x00, 0x08, 0x61, 0x08, 0x21, 0xf8, 0x3f, 0x08, 0x31, 0x00, 0x80, 0xf8, 0x93, 0x48, 0x92,
    0x48, 0x92, 0xf8, 0xff, 0x48, 0xfe, 0x48, 0x92, 0x48, 0x92, 0xf8, 0x93, 0x00, 0x80, 0x00, 0x00,  // '理'
    0x00, 0x10, 0x00, 0x12, 0x78, 0xfa, 0x48, 0x9a, 0x48, 0x96, 0x78, 0xf2, 0xf8, 0xf3, 0x80, 0x02,
    0x78, 0xf2, 0xc8, 0x96, 0xc8, 0x9e, 0x48, 0x9b, 0x78, 0xfa, 0x00, 0x12, 0x00, 0x10, 0x00, 0x00,  // '器'
};

OLED_font OLED_FONT_CHINESE_16x16 = {
    (uint8_t *)_OLED_FONT_CHINESE_16x16,
    16,  // width
    16,  // height
    0,   // spacing
    1,   // First char
};

#endif  // __OLED_FONT_CHINESE_16x16__
