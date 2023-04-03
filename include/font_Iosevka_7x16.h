#pragma once

#include "font.h"

__code uint8_t _OLED_FONT_IOSEVKA_7x16[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ' ' 0x20
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x67, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00,  // '!' 0x21
    0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00,  // '"' 0x22
    0x00, 0x00, 0x80, 0x08, 0xf0, 0x7f, 0x80, 0x08, 0x80, 0x08, 0xf0, 0x7f, 0x80, 0x08,  // '#' 0x23
    0x00, 0x00, 0xc0, 0x31, 0x20, 0x43, 0xfc, 0xff, 0x20, 0x44, 0x40, 0x38, 0x00, 0x00,  // '$' 0x24
    0x00, 0x00, 0xf0, 0x41, 0x10, 0x3d, 0xf0, 0x01, 0x00, 0x7e, 0xc0, 0x42, 0x70, 0x42,  // '%' 0x25
    0x00, 0x00, 0xe0, 0x3c, 0x10, 0x67, 0x10, 0x43, 0x90, 0x4d, 0xe0, 0x38, 0x00, 0x7c,  // '&' 0x26
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ''' 0x27
    0x00, 0x00, 0x00, 0x00, 0xc0, 0x1f, 0x70, 0x60, 0x18, 0x80, 0x0c, 0x00, 0x00, 0x00,  // '(' 0x28
    0x00, 0x00, 0x0c, 0x00, 0x18, 0x80, 0x70, 0x60, 0xc0, 0x1f, 0x00, 0x00, 0x00, 0x00,  // ')' 0x29
    0x20, 0x00, 0x20, 0x01, 0xa0, 0x01, 0x78, 0x00, 0xa0, 0x01, 0x20, 0x01, 0x20, 0x00,  // '*' 0x2a
    0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x80, 0x1f, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04,  // '+' 0x2b
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00,  // ',' 0x2c
    0x00, 0x00, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02,  // '-' 0x2d
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00,  // '.' 0x2e
    0x00, 0x00, 0x00, 0x80, 0x00, 0xf0, 0x00, 0x0e, 0xe0, 0x01, 0x3c, 0x00, 0x04, 0x00,  // '/' 0x2f
    0x00, 0x00, 0xe0, 0x3f, 0x30, 0x64, 0x10, 0x42, 0x10, 0x42, 0x30, 0x61, 0xe0, 0x3f,  // '0' 0x30
    0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x30, 0x00, 0xf0, 0x7f, 0x00, 0x00, 0x00, 0x00,  // '1' 0x31
    0x00, 0x00, 0x60, 0x70, 0x30, 0x58, 0x10, 0x4c, 0x10, 0x46, 0x30, 0x43, 0xe0, 0x41,  // '2' 0x32
    0x00, 0x00, 0x60, 0x30, 0x10, 0x40, 0x10, 0x42, 0x10, 0x47, 0xe0, 0x3d, 0x00, 0x00,  // '3' 0x33
    0x00, 0x00, 0x00, 0x0c, 0x00, 0x0f, 0x80, 0x09, 0x60, 0x08, 0x10, 0x7e, 0x00, 0x08,  // '4' 0x34
    0x00, 0x00, 0xf0, 0x33, 0x10, 0x41, 0x10, 0x41, 0x10, 0x41, 0x10, 0x63, 0x10, 0x3e,  // '5' 0x35
    0x00, 0x00, 0x00, 0x3e, 0x80, 0x63, 0x60, 0x41, 0x30, 0x41, 0x00, 0x63, 0x00, 0x3e,  // '6' 0x36
    0x00, 0x00, 0x10, 0x00, 0x10, 0x40, 0x10, 0x78, 0x10, 0x0e, 0xd0, 0x01, 0x70, 0x00,  // '7' 0x37
    0x00, 0x00, 0xe0, 0x38, 0x10, 0x45, 0x10, 0x43, 0x10, 0x43, 0x10, 0x45, 0xe0, 0x38,  // '8' 0x38
    0x00, 0x00, 0xe0, 0x03, 0x30, 0x06, 0x10, 0x64, 0x10, 0x34, 0x30, 0x0e, 0xe0, 0x03,  // '9' 0x39
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x61, 0x80, 0x61, 0x00, 0x00, 0x00, 0x00,  // ':' 0x3a
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x61, 0x80, 0xe1, 0x00, 0x00, 0x00, 0x00,  // ';' 0x3b
    0x00, 0x00, 0x00, 0x03, 0x80, 0x03, 0x80, 0x04, 0x40, 0x0c, 0x60, 0x08, 0x20, 0x00,  // '<' 0x3c
    0x00, 0x00, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09,  // '=' 0x3d
    0x00, 0x00, 0x20, 0x00, 0x60, 0x08, 0x40, 0x0c, 0x80, 0x04, 0x80, 0x03, 0x00, 0x03,  // '>' 0x3e
    0x00, 0x00, 0x60, 0x00, 0x10, 0x00, 0x10, 0x6e, 0x10, 0x63, 0xe0, 0x00, 0x00, 0x00,  // '?' 0x3f
    0x00, 0x00, 0xe0, 0x7f, 0x30, 0xc0, 0x10, 0x9f, 0x90, 0xa0, 0xb0, 0xa0, 0xe0, 0x9f,  // '@' 0x40
    0x00, 0x00, 0x00, 0x78, 0x80, 0x0f, 0x70, 0x08, 0xf0, 0x09, 0x00, 0x3e, 0x00, 0x60,  // 'A' 0x41
    0x00, 0x00, 0xf0, 0x7f, 0x10, 0x42, 0x10, 0x42, 0x10, 0x43, 0xe0, 0x65, 0x00, 0x3c,  // 'B' 0x42
    0x00, 0x00, 0xe0, 0x3f, 0x10, 0x40, 0x10, 0x40, 0x10, 0x40, 0x60, 0x70, 0x40, 0x10,  // 'C' 0x43
    0x00, 0x00, 0xf0, 0x7f, 0x10, 0x40, 0x10, 0x40, 0x10, 0x40, 0x30, 0x60, 0xe0, 0x3f,  // 'D' 0x44
    0x00, 0x00, 0xf0, 0x7f, 0x10, 0x42, 0x10, 0x42, 0x10, 0x42, 0x10, 0x40, 0x00, 0x00,  // 'E' 0x45
    0x00, 0x00, 0xf0, 0x7f, 0x10, 0x02, 0x10, 0x02, 0x10, 0x02, 0x10, 0x00, 0x00, 0x00,  // 'F' 0x46
    0x00, 0x00, 0xe0, 0x3f, 0x30, 0x60, 0x10, 0x40, 0x10, 0x42, 0x10, 0x22, 0x60, 0x7e,  // 'G' 0x47
    0x00, 0x00, 0xf0, 0x7f, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0xf0, 0x7f,  // 'H' 0x48
    0x00, 0x00, 0x10, 0x40, 0x10, 0x40, 0xf0, 0x7f, 0x10, 0x40, 0x10, 0x40, 0x00, 0x00,  // 'I' 0x49
    0x00, 0x00, 0x00, 0x30, 0x00, 0x40, 0x10, 0x40, 0x10, 0x40, 0xf0, 0x3f, 0x00, 0x00,  // 'J' 0x4a
    0x00, 0x00, 0xf0, 0x7f, 0x00, 0x03, 0x80, 0x0f, 0x60, 0x38, 0x10, 0x60, 0x00, 0x00,  // 'K' 0x4b
    0x00, 0x00, 0xf0, 0x7f, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x00,  // 'L' 0x4c
    0x00, 0x00, 0xf0, 0x7f, 0xe0, 0x00, 0x00, 0x0f, 0x00, 0x0f, 0xe0, 0x00, 0xf0, 0x7f,  // 'M' 0x4d
    0x00, 0x00, 0xf0, 0x7f, 0x70, 0x00, 0x80, 0x03, 0x00, 0x0e, 0x00, 0x70, 0xf0, 0x7f,  // 'N' 0x4e
    0x00, 0x00, 0xe0, 0x3f, 0x30, 0x60, 0x10, 0x40, 0x10, 0x40, 0x30, 0x60, 0xe0, 0x3f,  // 'O' 0x4f
    0x00, 0x00, 0xf0, 0x7f, 0x10, 0x02, 0x10, 0x02, 0x10, 0x02, 0xe0, 0x01, 0x00, 0x00,  // 'P' 0x50
    0x00, 0x00, 0xe0, 0x3f, 0x30, 0x40, 0x10, 0xc0, 0x10, 0x80, 0x30, 0x40, 0xe0, 0x7f,  // 'Q' 0x51
    0x00, 0x00, 0xf0, 0x7f, 0x10, 0x02, 0x10, 0x02, 0x10, 0x0e, 0x30, 0x3b, 0xe0, 0x61,  // 'R' 0x52
    0x00, 0x00, 0xe0, 0x30, 0x30, 0x41, 0x10, 0x42, 0x10, 0x42, 0x30, 0x64, 0x60, 0x38,  // 'S' 0x53
    0x00, 0x00, 0x10, 0x00, 0x10, 0x00, 0xf0, 0x7f, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00,  // 'T' 0x54
    0x00, 0x00, 0xf0, 0x3f, 0x00, 0x60, 0x00, 0x40, 0x00, 0x40, 0x00, 0x60, 0xf0, 0x3f,  // 'U' 0x55
    0x00, 0x00, 0xf0, 0x00, 0x80, 0x0f, 0x00, 0x70, 0x00, 0x7c, 0xe0, 0x03, 0x30, 0x00,  // 'V' 0x56
    0x00, 0x00, 0xf0, 0x1f, 0x00, 0x78, 0x80, 0x07, 0x00, 0x3f, 0x00, 0x7f, 0xf0, 0x01,  // 'W' 0x57
    0x00, 0x00, 0x30, 0x60, 0xe0, 0x38, 0x80, 0x0f, 0xc0, 0x1d, 0x70, 0x70, 0x10, 0x40,  // 'X' 0x58
    0x00, 0x00, 0x70, 0x00, 0xc0, 0x01, 0x00, 0x7e, 0xc0, 0x01, 0x70, 0x00, 0x00, 0x00,  // 'Y' 0x59
    0x00, 0x00, 0x10, 0x60, 0x10, 0x78, 0x10, 0x4e, 0x90, 0x43, 0xf0, 0x40, 0x30, 0x40,  // 'Z' 0x5a
    0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00,  // '[' 0x5b
    0x00, 0x00, 0x0c, 0x00, 0xf0, 0x00, 0x80, 0x07, 0x00, 0x3c, 0x00, 0xe0, 0x00, 0x00,  // '\' 0x5c
    0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0xfc, 0xff, 0x00, 0x00,  // ']' 0x5d
    0x00, 0x00, 0xc0, 0x00, 0x60, 0x00, 0x10, 0x00, 0x30, 0x00, 0xc0, 0x00, 0x80, 0x00,  // '^' 0x5e
    0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80,  // '_' 0x5f
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ''' 0x27
    0x00, 0x10, 0x80, 0x79, 0x80, 0x44, 0x80, 0x44, 0x80, 0x24, 0x00, 0x7f, 0x00, 0x00,  // 'a' 0x61
    0x00, 0x00, 0xf0, 0x7f, 0x00, 0x21, 0x80, 0x40, 0x80, 0x40, 0x80, 0x61, 0x00, 0x3f,  // 'b' 0x62
    0x00, 0x00, 0x00, 0x3f, 0x80, 0x61, 0x80, 0x40, 0x80, 0x40, 0x00, 0x33, 0x00, 0x12,  // 'c' 0x63
    0x00, 0x00, 0x00, 0x3f, 0x80, 0x61, 0x80, 0x40, 0x80, 0x40, 0x00, 0x21, 0xf0, 0x7f,  // 'd' 0x64
    0x00, 0x00, 0x00, 0x3f, 0x80, 0x65, 0x80, 0x44, 0x80, 0x44, 0x80, 0x65, 0x00, 0x37,  // 'e' 0x65
    0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0xe0, 0x7f, 0x10, 0x01, 0x30, 0x01, 0x00, 0x00,  // 'f' 0x66
    0x00, 0x00, 0x00, 0x3f, 0x80, 0x61, 0x80, 0x40, 0x80, 0x40, 0x00, 0x21, 0x80, 0xff,  // 'g' 0x67
    0x00, 0x00, 0xf0, 0x7f, 0x00, 0x01, 0x80, 0x00, 0x80, 0x00, 0x80, 0x01, 0x00, 0x7f,  // 'h' 0x68
    0x00, 0x00, 0x80, 0x40, 0x80, 0x40, 0xb0, 0x7f, 0x30, 0x40, 0x00, 0x40, 0x00, 0x00,  // 'i' 0x69
    0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0xb0, 0xff, 0x00, 0x00, 0x00, 0x00,  // 'j' 0x6a
    0x00, 0x00, 0xf0, 0x7f, 0x00, 0x0c, 0x00, 0x1e, 0x80, 0x31, 0x80, 0x40, 0x00, 0x00,  // 'k' 0x6b
    0x00, 0x00, 0x10, 0x40, 0x10, 0x40, 0xf0, 0x7f, 0x00, 0x40, 0x00, 0x40, 0x00, 0x00,  // 'l' 0x6c
    0x00, 0x00, 0x80, 0x7f, 0x80, 0x00, 0x80, 0x00, 0x80, 0x7f, 0x80, 0x00, 0x80, 0x00,  // 'm' 0x6d
    0x00, 0x00, 0x80, 0x7f, 0x00, 0x01, 0x80, 0x00, 0x80, 0x00, 0x80, 0x01, 0x00, 0x7f,  // 'n' 0x6e
    0x00, 0x00, 0x00, 0x3f, 0x80, 0x61, 0x80, 0x40, 0x80, 0x40, 0x80, 0x61, 0x00, 0x3f,  // 'o' 0x6f
    0x00, 0x00, 0x80, 0xff, 0x00, 0x21, 0x80, 0x40, 0x80, 0x40, 0x80, 0x61, 0x00, 0x3f,  // 'p' 0x70
    0x00, 0x00, 0x00, 0x3f, 0x80, 0x61, 0x80, 0x40, 0x80, 0x40, 0x00, 0x21, 0x80, 0xff,  // 'q' 0x71
    0x00, 0x00, 0x00, 0x00, 0x80, 0x7f, 0x00, 0x01, 0x80, 0x00, 0x80, 0x01, 0x00, 0x01,  // 'r' 0x72
    0x00, 0x00, 0x00, 0x20, 0x80, 0x67, 0x80, 0x44, 0x80, 0x4c, 0x80, 0x48, 0x00, 0x39,  // 's' 0x73
    0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0xf0, 0x3f, 0x80, 0x40, 0x80, 0x60, 0x00, 0x30,  // 't' 0x74
    0x00, 0x00, 0x80, 0x3f, 0x00, 0x60, 0x00, 0x40, 0x00, 0x40, 0x00, 0x20, 0x80, 0x7f,  // 'u' 0x75
    0x00, 0x00, 0x80, 0x03, 0x00, 0x1e, 0x00, 0x60, 0x00, 0x78, 0x80, 0x07, 0x80, 0x00,  // 'v' 0x76
    0x00, 0x00, 0x80, 0x1f, 0x00, 0x70, 0x00, 0x0e, 0x00, 0x7c, 0x00, 0x7c, 0x80, 0x03,  // 'w' 0x77
    0x00, 0x00, 0x80, 0x40, 0x00, 0x33, 0x00, 0x1e, 0x00, 0x1f, 0x80, 0x61, 0x00, 0x00,  // 'x' 0x78
    0x00, 0x00, 0x80, 0x01, 0x00, 0x1e, 0x00, 0xf0, 0x00, 0x78, 0x80, 0x07, 0x80, 0x00,  // 'y' 0x79
    0x00, 0x00, 0x80, 0x60, 0x80, 0x70, 0x80, 0x58, 0x80, 0x46, 0x80, 0x43, 0x80, 0x41,  // 'z' 0x7a
    0x00, 0x00, 0x00, 0x02, 0x00, 0x02, 0xf8, 0xfd, 0x84, 0x00, 0x04, 0x00, 0x00, 0x00,  // '{' 0x7b
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // '|' 0x7c
    0x00, 0x00, 0x04, 0x00, 0x04, 0x08, 0xf8, 0xfd, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00,  // '}' 0x7d
    0x00, 0x08, 0x00, 0x0e, 0x00, 0x02, 0x00, 0x06, 0x00, 0x0c, 0x00, 0x0c, 0x00, 0x02,  // '~' 0x7e
};

__code OLED_font OLED_FONT_IOSEVKA_7x16 = {
    (uint8_t *)_OLED_FONT_IOSEVKA_7x16,
    7,   // Font width in pixels
    2,   // Font height in OLED pages (8 pixels per page)
    0,   // Character spacing
    32,  // The code point of the first character
};
