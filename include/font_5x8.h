#pragma once

#include "font.h"

// Standard ASCII 5x8 font (adapted from Neven Boyanov and Stephen Denne)
__code uint8_t _OLED_FONT_5x8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00,  // ' ' 0x20
    0x00, 0x00, 0x2F, 0x00, 0x00,  // '!' 0x21
    0x00, 0x07, 0x00, 0x07, 0x00,  // '"' 0x22
    0x14, 0x7F, 0x14, 0x7F, 0x14,  // '#' 0x23
    0x24, 0x2A, 0x7F, 0x2A, 0x12,  // '$' 0x24
    0x23, 0x13, 0x08, 0x64, 0x62,  // '%' 0x25
    0x36, 0x49, 0x55, 0x22, 0x50,  // '&' 0x26
    0x00, 0x05, 0x03, 0x00, 0x00,  // ''' 0x27
    0x00, 0x1C, 0x22, 0x41, 0x00,  // '(' 0x28
    0x00, 0x41, 0x22, 0x1C, 0x00,  // ')' 0x29
    0x14, 0x08, 0x3E, 0x08, 0x14,  // '*' 0x2a
    0x08, 0x08, 0x3E, 0x08, 0x08,  // '+' 0x2b
    0x00, 0x00, 0xA0, 0x60, 0x00,  // ',' 0x2c
    0x08, 0x08, 0x08, 0x08, 0x08,  // '-' 0x2d
    0x00, 0x60, 0x60, 0x00, 0x00,  // '.' 0x2e
    0x20, 0x10, 0x08, 0x04, 0x02,  // '/' 0x2f
    0x3E, 0x51, 0x49, 0x45, 0x3E,  // '0' 0x30
    0x00, 0x42, 0x7F, 0x40, 0x00,  // '1' 0x31
    0x42, 0x61, 0x51, 0x49, 0x46,  // '2' 0x32
    0x21, 0x41, 0x45, 0x4B, 0x31,  // '3' 0x33
    0x18, 0x14, 0x12, 0x7F, 0x10,  // '4' 0x34
    0x27, 0x45, 0x45, 0x45, 0x39,  // '5' 0x35
    0x3C, 0x4A, 0x49, 0x49, 0x30,  // '6' 0x36
    0x01, 0x71, 0x09, 0x05, 0x03,  // '7' 0x37
    0x36, 0x49, 0x49, 0x49, 0x36,  // '8' 0x38
    0x06, 0x49, 0x49, 0x29, 0x1E,  // '9' 0x39
    0x00, 0x36, 0x36, 0x00, 0x00,  // ':' 0x3a
    0x00, 0x56, 0x36, 0x00, 0x00,  // ';' 0x3b
    0x08, 0x14, 0x22, 0x41, 0x00,  // '<' 0x3c
    0x14, 0x14, 0x14, 0x14, 0x14,  // '=' 0x3d
    0x00, 0x41, 0x22, 0x14, 0x08,  // '>' 0x3e
    0x02, 0x01, 0x51, 0x09, 0x06,  // '?' 0x3f
    0x32, 0x49, 0x59, 0x51, 0x3E,  // '@' 0x40
    0x7C, 0x12, 0x11, 0x12, 0x7C,  // 'A' 0x41
    0x7F, 0x49, 0x49, 0x49, 0x36,  // 'B' 0x42
    0x3E, 0x41, 0x41, 0x41, 0x22,  // 'C' 0x43
    0x7F, 0x41, 0x41, 0x22, 0x1C,  // 'D' 0x44
    0x7F, 0x49, 0x49, 0x49, 0x41,  // 'E' 0x45
    0x7F, 0x09, 0x09, 0x09, 0x01,  // 'F' 0x46
    0x3E, 0x41, 0x49, 0x49, 0x7A,  // 'G' 0x47
    0x7F, 0x08, 0x08, 0x08, 0x7F,  // 'H' 0x48
    0x00, 0x41, 0x7F, 0x41, 0x00,  // 'I' 0x49
    0x20, 0x40, 0x41, 0x3F, 0x01,  // 'J' 0x4a
    0x7F, 0x08, 0x14, 0x22, 0x41,  // 'K' 0x4b
    0x7F, 0x40, 0x40, 0x40, 0x40,  // 'L' 0x4c
    0x7F, 0x02, 0x0C, 0x02, 0x7F,  // 'M' 0x4d
    0x7F, 0x04, 0x08, 0x10, 0x7F,  // 'N' 0x4e
    0x3E, 0x41, 0x41, 0x41, 0x3E,  // 'O' 0x4f
    0x7F, 0x09, 0x09, 0x09, 0x06,  // 'P' 0x50
    0x3E, 0x41, 0x51, 0x21, 0x5E,  // 'Q' 0x51
    0x7F, 0x09, 0x19, 0x29, 0x46,  // 'R' 0x52
    0x46, 0x49, 0x49, 0x49, 0x31,  // 'S' 0x53
    0x01, 0x01, 0x7F, 0x01, 0x01,  // 'T' 0x54
    0x3F, 0x40, 0x40, 0x40, 0x3F,  // 'U' 0x55
    0x1F, 0x20, 0x40, 0x20, 0x1F,  // 'V' 0x56
    0x3F, 0x40, 0x38, 0x40, 0x3F,  // 'W' 0x57
    0x63, 0x14, 0x08, 0x14, 0x63,  // 'X' 0x58
    0x07, 0x08, 0x70, 0x08, 0x07,  // 'Y' 0x59
    0x61, 0x51, 0x49, 0x45, 0x43,  // 'Z' 0x5a
    0x00, 0x7F, 0x41, 0x41, 0x00,  // '[' 0x5b
    0x02, 0x04, 0x08, 0x10, 0x20,  // '\' 0x5c
    0x00, 0x41, 0x41, 0x7F, 0x00,  // ']' 0x5d
    0x04, 0x02, 0x01, 0x02, 0x04,  // '^' 0x5e
    0x40, 0x40, 0x40, 0x40, 0x40,  // '_' 0x5f
    0x00, 0x01, 0x02, 0x04, 0x00,  // ''' 0x27
    0x20, 0x54, 0x54, 0x54, 0x78,  // 'a' 0x61
    0x7F, 0x48, 0x44, 0x44, 0x38,  // 'b' 0x62
    0x38, 0x44, 0x44, 0x44, 0x20,  // 'c' 0x63
    0x38, 0x44, 0x44, 0x48, 0x7F,  // 'd' 0x64
    0x38, 0x54, 0x54, 0x54, 0x18,  // 'e' 0x65
    0x08, 0x7E, 0x09, 0x01, 0x02,  // 'f' 0x66
    0x18, 0xA4, 0xA4, 0xA4, 0x7C,  // 'g' 0x67
    0x7F, 0x08, 0x04, 0x04, 0x78,  // 'h' 0x68
    0x00, 0x44, 0x7D, 0x40, 0x00,  // 'i' 0x69
    0x40, 0x80, 0x84, 0x7D, 0x00,  // 'j' 0x6a
    0x7F, 0x10, 0x28, 0x44, 0x00,  // 'k' 0x6b
    0x00, 0x41, 0x7F, 0x40, 0x00,  // 'l' 0x6c
    0x7C, 0x04, 0x18, 0x04, 0x78,  // 'm' 0x6d
    0x7C, 0x08, 0x04, 0x04, 0x78,  // 'n' 0x6e
    0x38, 0x44, 0x44, 0x44, 0x38,  // 'o' 0x6f
    0xFC, 0x24, 0x24, 0x24, 0x18,  // 'p' 0x70
    0x18, 0x24, 0x24, 0x18, 0xFC,  // 'q' 0x71
    0x7C, 0x08, 0x04, 0x04, 0x08,  // 'r' 0x72
    0x48, 0x54, 0x54, 0x54, 0x20,  // 's' 0x73
    0x04, 0x3F, 0x44, 0x40, 0x20,  // 't' 0x74
    0x3C, 0x40, 0x40, 0x20, 0x7C,  // 'u' 0x75
    0x1C, 0x20, 0x40, 0x20, 0x1C,  // 'v' 0x76
    0x3C, 0x40, 0x30, 0x40, 0x3C,  // 'w' 0x77
    0x44, 0x28, 0x10, 0x28, 0x44,  // 'x' 0x78
    0x1C, 0xA0, 0xA0, 0xA0, 0x7C,  // 'y' 0x79
    0x44, 0x64, 0x54, 0x4C, 0x44,  // 'z' 0x7a
    0x08, 0x36, 0x41, 0x41, 0x00,  // '{' 0x7b
    0x00, 0x00, 0x7F, 0x00, 0x00,  // '|' 0x7c
    0x00, 0x41, 0x41, 0x36, 0x08,  // '}' 0x7d
    0x08, 0x04, 0x08, 0x10, 0x08,  // '~' 0x7e
};

__code OLED_font OLED_FONT_5x8 = {
    (uint8_t *)_OLED_FONT_5x8,
    5,   // Font width in pixels
    1,   // Font height in OLED pages (8 pixels per page)
    1,   // Character spacing
    32,  // The code point of the first character
};
