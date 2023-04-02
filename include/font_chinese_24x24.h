#ifndef __OLED_FONT_CHINESE_24x24__
#define __OLED_FONT_CHINESE_24x24__

#pragma once

#include "font.h"

__code uint8_t _OLED_FONT_CHINESE_24x24[] = {
    0x00, 0x20, 0x00, 0xc0, 0x70, 0x00, 0xe0, 0x38, 0x00, 0x70, 0xfc, 0x7f, 0x18, 0xff, 0x7f, 0x88, 0x03, 0x00,
    0x80, 0x00, 0x60, 0xf0, 0x13, 0x7c, 0x00, 0x92, 0x1f, 0x00, 0x92, 0x00, 0xf8, 0x93, 0x00, 0x00, 0x92, 0x10,
    0x00, 0x92, 0x1f, 0xf0, 0x13, 0x48, 0x00, 0x18, 0xe4, 0x00, 0x3f, 0x34, 0xf8, 0x7f, 0x18, 0xb8, 0xc0, 0x0f,
    0x80, 0x80, 0x0f, 0x80, 0xfc, 0x38, 0x80, 0x1f, 0x70, 0x80, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // '微'
    0x00, 0x00, 0x00, 0x00, 0x20, 0x40, 0x00, 0x70, 0x60, 0x00, 0x1e, 0x70, 0xc0, 0x1f, 0x30, 0xf8, 0x79, 0x18,
    0xd8, 0xc0, 0x0f, 0xc0, 0x80, 0x07, 0xc0, 0xe0, 0x0f, 0xc0, 0x7e, 0x1c, 0xc0, 0x1f, 0x18, 0xc0, 0x00, 0x30,
    0x00, 0x00, 0x30, 0x00, 0x00, 0x20, 0xf8, 0xff, 0x6f, 0xf8, 0xff, 0x6f, 0x00, 0x07, 0x60, 0x00, 0x0e, 0x60,
    0x00, 0x1c, 0x60, 0x00, 0x30, 0x60, 0x00, 0x60, 0x60, 0x00, 0x40, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // '处'
    0x00, 0x00, 0x00, 0x60, 0x30, 0x30, 0x60, 0x30, 0x30, 0x60, 0x30, 0x30, 0xe0, 0xff, 0x1f, 0xe0, 0xff, 0x1f,
    0x60, 0x30, 0x18, 0x60, 0x30, 0xcc, 0x00, 0x00, 0xc0, 0xf0, 0x3f, 0xc6, 0xf0, 0x3f, 0xc6, 0x10, 0x31, 0xc6,
    0x10, 0x31, 0xc6, 0x10, 0x31, 0xc6, 0xf0, 0xff, 0xff, 0xf0, 0xff, 0xff, 0x10, 0x31, 0xc6, 0x10, 0x31, 0xc6,
    0x10, 0x31, 0xc6, 0xf0, 0x3f, 0xc6, 0xf0, 0x3f, 0xc6, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // '理'
    0x00, 0x00, 0x00, 0x00, 0x18, 0x06, 0x00, 0x18, 0x03, 0xf0, 0x19, 0xff, 0xf0, 0x99, 0xff, 0x10, 0xd9, 0xc3,
    0x10, 0xf9, 0xc3, 0x10, 0x79, 0xc3, 0xf0, 0x39, 0xff, 0xf0, 0x1d, 0xff, 0x00, 0x1e, 0x00, 0x00, 0x1a, 0x00,
    0x00, 0x18, 0x00, 0xf0, 0x19, 0xff, 0x10, 0x3d, 0xc3, 0x10, 0x7f, 0xc3, 0x10, 0xdd, 0xc3, 0x10, 0x9d, 0xc3,
    0xf0, 0x99, 0xff, 0xf0, 0x19, 0xff, 0x00, 0x18, 0x03, 0x00, 0x18, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // '器'
};

OLED_font OLED_FONT_CHINESE_24x24 = {
    (uint8_t *)_OLED_FONT_CHINESE_24x24,
    24,  // width
    24,  // height
    0,   // spacing
    1,   // First char
};

#endif  // __OLED_FONT_CHINESE_24x24__