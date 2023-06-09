#pragma once

#include "font.h"

__code uint8_t _OLED_FONT_IOSEVKA_8x16[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ' ' 0x20
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x0c, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // '!' 0x21
    0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00,  // '"' 0x22
    0x00, 0x00, 0x10, 0x01, 0xfe, 0x0f, 0x10, 0x01, 0x10, 0x01, 0xfe, 0x0f, 0x10, 0x01, 0x10, 0x01,  // '#' 0x23
    0x00, 0x00, 0x38, 0x06, 0x64, 0x08, 0xff, 0x3f, 0x84, 0x08, 0x08, 0x07, 0x00, 0x00, 0x00, 0x00,  // '$' 0x24
    0x00, 0x00, 0x3e, 0x08, 0xa2, 0x07, 0x3e, 0x00, 0xc0, 0x0f, 0x58, 0x08, 0x4e, 0x08, 0xc2, 0x0f,  // '%' 0x25
    0x00, 0x00, 0x9c, 0x07, 0xe2, 0x0c, 0x62, 0x08, 0xb2, 0x09, 0x1c, 0x07, 0x80, 0x0f, 0x00, 0x00,  // '&' 0x26
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ''' 0x27
    0x00, 0x00, 0x00, 0x00, 0xf8, 0x03, 0x0e, 0x0c, 0x03, 0x30, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00,  // '(' 0x28
    0x00, 0x00, 0x01, 0x20, 0x03, 0x30, 0x0e, 0x0c, 0xf8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ')' 0x29
    0x04, 0x00, 0x24, 0x00, 0x34, 0x00, 0x0f, 0x00, 0x34, 0x00, 0x24, 0x00, 0x04, 0x00, 0x00, 0x00,  // '*' 0x2a
    0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0xf0, 0x03, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x00, 0x00,  // '+' 0x2b
    0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x6c, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ',' 0x2c
    0x00, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x00, 0x00,  // '-' 0x2d
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // '.' 0x2e
    0x00, 0x00, 0x00, 0x30, 0x00, 0x1e, 0xc0, 0x01, 0x3c, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,  // '/' 0x2f
    0x00, 0x00, 0xfc, 0x07, 0x86, 0x0c, 0x42, 0x08, 0x42, 0x08, 0x26, 0x0c, 0xfc, 0x07, 0x00, 0x00,  // '0' 0x30
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x06, 0x00, 0xfe, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // '1' 0x31
    0x00, 0x00, 0x0c, 0x0e, 0x06, 0x0b, 0x82, 0x09, 0xc2, 0x08, 0x66, 0x08, 0x3c, 0x08, 0x00, 0x00,  // '2' 0x32
    0x00, 0x00, 0x0c, 0x06, 0x02, 0x08, 0x42, 0x08, 0xe2, 0x08, 0xbc, 0x07, 0x00, 0x00, 0x00, 0x00,  // '3' 0x33
    0x00, 0x00, 0x80, 0x01, 0xe0, 0x01, 0x30, 0x01, 0x0c, 0x01, 0xc2, 0x0f, 0x00, 0x01, 0x00, 0x00,  // '4' 0x34
    0x00, 0x00, 0x7e, 0x06, 0x22, 0x08, 0x22, 0x08, 0x22, 0x08, 0x62, 0x0c, 0xc2, 0x07, 0x00, 0x00,  // '5' 0x35
    0x00, 0x00, 0xc0, 0x07, 0x70, 0x0c, 0x2c, 0x08, 0x26, 0x08, 0x60, 0x0c, 0xc0, 0x07, 0x00, 0x00,  // '6' 0x36
    0x00, 0x00, 0x02, 0x00, 0x02, 0x08, 0x02, 0x0f, 0xc2, 0x01, 0x3a, 0x00, 0x0e, 0x00, 0x00, 0x00,  // '7' 0x37
    0x00, 0x00, 0x1c, 0x07, 0xa2, 0x08, 0x62, 0x08, 0x62, 0x08, 0xa2, 0x08, 0x1c, 0x07, 0x00, 0x00,  // '8' 0x38
    0x00, 0x00, 0x7c, 0x00, 0xc6, 0x00, 0x82, 0x0c, 0x82, 0x06, 0xc6, 0x01, 0x7c, 0x00, 0x00, 0x00,  // '9' 0x39
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x0c, 0x30, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ':' 0x3a
    0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x30, 0x6c, 0x30, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ';' 0x3b
    0x00, 0x00, 0x60, 0x00, 0x70, 0x00, 0x90, 0x00, 0x88, 0x01, 0x0c, 0x01, 0x04, 0x00, 0x00, 0x00,  // '<' 0x3c
    0x00, 0x00, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x00, 0x00,  // '=' 0x3d
    0x00, 0x00, 0x04, 0x00, 0x0c, 0x01, 0x88, 0x01, 0x90, 0x00, 0x70, 0x00, 0x60, 0x00, 0x00, 0x00,  // '>' 0x3e
    0x00, 0x00, 0x0c, 0x00, 0x02, 0x00, 0xc2, 0x0d, 0x62, 0x0c, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00,  // '?' 0x3f
    0x00, 0x00, 0xfc, 0x0f, 0x06, 0x18, 0xe2, 0x13, 0x12, 0x14, 0x16, 0x14, 0xfc, 0x13, 0x00, 0x00,  // '@' 0x40
    0x00, 0x00, 0x00, 0x0f, 0xf0, 0x01, 0x0e, 0x01, 0x3e, 0x01, 0xc0, 0x07, 0x00, 0x0c, 0x00, 0x00,  // 'A' 0x41
    0x00, 0x00, 0xfe, 0x0f, 0x42, 0x08, 0x42, 0x08, 0x62, 0x08, 0xbc, 0x0c, 0x80, 0x07, 0x00, 0x00,  // 'B' 0x42
    0x00, 0x00, 0xfc, 0x07, 0x02, 0x08, 0x02, 0x08, 0x02, 0x08, 0x0c, 0x0e, 0x08, 0x02, 0x00, 0x00,  // 'C' 0x43
    0x00, 0x00, 0xfe, 0x0f, 0x02, 0x08, 0x02, 0x08, 0x02, 0x08, 0x06, 0x0c, 0xfc, 0x07, 0x00, 0x00,  // 'D' 0x44
    0x00, 0x00, 0xfe, 0x0f, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x02, 0x08, 0x00, 0x00, 0x00, 0x00,  // 'E' 0x45
    0x00, 0x00, 0xfe, 0x0f, 0x42, 0x00, 0x42, 0x00, 0x42, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00,  // 'F' 0x46
    0x00, 0x00, 0xfc, 0x07, 0x06, 0x0c, 0x02, 0x08, 0x42, 0x08, 0x42, 0x04, 0xcc, 0x0f, 0x00, 0x00,  // 'G' 0x47
    0x00, 0x00, 0xfe, 0x0f, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0xfe, 0x0f, 0x00, 0x00,  // 'H' 0x48
    0x00, 0x00, 0x02, 0x08, 0x02, 0x08, 0xfe, 0x0f, 0x02, 0x08, 0x02, 0x08, 0x00, 0x00, 0x00, 0x00,  // 'I' 0x49
    0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x02, 0x08, 0x02, 0x08, 0xfe, 0x07, 0x00, 0x00, 0x00, 0x00,  // 'J' 0x4a
    0x00, 0x00, 0xfe, 0x0f, 0x60, 0x00, 0xf0, 0x01, 0x0c, 0x07, 0x02, 0x0c, 0x00, 0x00, 0x00, 0x00,  // 'K' 0x4b
    0x00, 0x00, 0xfe, 0x0f, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00,  // 'L' 0x4c
    0x00, 0x00, 0xfe, 0x0f, 0x1c, 0x00, 0xe0, 0x01, 0xe0, 0x01, 0x1c, 0x00, 0xfe, 0x0f, 0x00, 0x00,  // 'M' 0x4d
    0x00, 0x00, 0xfe, 0x0f, 0x0e, 0x00, 0x70, 0x00, 0xc0, 0x01, 0x00, 0x0e, 0xfe, 0x0f, 0x00, 0x00,  // 'N' 0x4e
    0x00, 0x00, 0xfc, 0x07, 0x06, 0x0c, 0x02, 0x08, 0x02, 0x08, 0x06, 0x0c, 0xfc, 0x07, 0x00, 0x00,  // 'O' 0x4f
    0x00, 0x00, 0xfe, 0x0f, 0x42, 0x00, 0x42, 0x00, 0x42, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00,  // 'P' 0x50
    0x00, 0x00, 0xfc, 0x07, 0x06, 0x08, 0x02, 0x18, 0x02, 0x70, 0x06, 0x48, 0xfc, 0x4f, 0x00, 0x00,  // 'Q' 0x51
    0x00, 0x00, 0xfe, 0x0f, 0x42, 0x00, 0x42, 0x00, 0xc2, 0x01, 0x66, 0x07, 0x3c, 0x0c, 0x00, 0x00,  // 'R' 0x52
    0x00, 0x00, 0x1c, 0x06, 0x26, 0x08, 0x42, 0x08, 0x42, 0x08, 0x86, 0x0c, 0x0c, 0x07, 0x00, 0x00,  // 'S' 0x53
    0x00, 0x00, 0x02, 0x00, 0x02, 0x00, 0xfe, 0x0f, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00,  // 'T' 0x54
    0x00, 0x00, 0xfe, 0x07, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x08, 0x00, 0x0c, 0xfe, 0x07, 0x00, 0x00,  // 'U' 0x55
    0x00, 0x00, 0x1e, 0x00, 0xf0, 0x01, 0x00, 0x0e, 0x80, 0x0f, 0x7c, 0x00, 0x06, 0x00, 0x00, 0x00,  // 'V' 0x56
    0x00, 0x00, 0xfe, 0x03, 0x00, 0x0f, 0xf0, 0x00, 0xe0, 0x07, 0xe0, 0x0f, 0x3e, 0x00, 0x00, 0x00,  // 'W' 0x57
    0x00, 0x00, 0x06, 0x0c, 0x1c, 0x07, 0xf0, 0x01, 0xb8, 0x03, 0x0e, 0x0e, 0x02, 0x08, 0x00, 0x00,  // 'X' 0x58
    0x00, 0x00, 0x0e, 0x00, 0x38, 0x00, 0xc0, 0x0f, 0x38, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00,  // 'Y' 0x59
    0x00, 0x00, 0x02, 0x0c, 0x02, 0x0f, 0xc2, 0x09, 0x72, 0x08, 0x1e, 0x08, 0x06, 0x08, 0x00, 0x00,  // 'Z' 0x5a
    0x00, 0x00, 0x00, 0x00, 0xff, 0x3f, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x00,  // '[' 0x5b
    0x00, 0x00, 0x01, 0x00, 0x1e, 0x00, 0xf0, 0x00, 0x80, 0x07, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00,  // '\' 0x5c
    0x00, 0x00, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00,  // ']' 0x5d
    0x00, 0x00, 0x18, 0x00, 0x0c, 0x00, 0x02, 0x00, 0x06, 0x00, 0x18, 0x00, 0x10, 0x00, 0x00, 0x00,  // '^' 0x5e
    0x00, 0x00, 0x00, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00, 0x00,  // '_' 0x5f
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ''' 0x27
    0x00, 0x02, 0x30, 0x0f, 0x90, 0x08, 0x90, 0x08, 0x90, 0x04, 0xe0, 0x0f, 0x00, 0x00, 0x00, 0x00,  // 'a' 0x61
    0x00, 0x00, 0xfe, 0x0f, 0x20, 0x04, 0x10, 0x08, 0x10, 0x08, 0x30, 0x0c, 0xe0, 0x07, 0x00, 0x00,  // 'b' 0x62
    0x00, 0x00, 0xe0, 0x07, 0x30, 0x0c, 0x10, 0x08, 0x10, 0x08, 0x60, 0x06, 0x40, 0x02, 0x00, 0x00,  // 'c' 0x63
    0x00, 0x00, 0xe0, 0x07, 0x30, 0x0c, 0x10, 0x08, 0x10, 0x08, 0x20, 0x04, 0xfe, 0x0f, 0x00, 0x00,  // 'd' 0x64
    0x00, 0x00, 0xe0, 0x07, 0xb0, 0x0c, 0x90, 0x08, 0x90, 0x08, 0xb0, 0x0c, 0xe0, 0x06, 0x00, 0x00,  // 'e' 0x65
    0x00, 0x00, 0x20, 0x00, 0x20, 0x00, 0xfc, 0x0f, 0x22, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00,  // 'f' 0x66
    0x00, 0x00, 0xe0, 0x27, 0x30, 0x4c, 0x10, 0x48, 0x10, 0x48, 0x20, 0x64, 0xf0, 0x3f, 0x00, 0x00,  // 'g' 0x67
    0x00, 0x00, 0xfe, 0x0f, 0x20, 0x00, 0x10, 0x00, 0x10, 0x00, 0x30, 0x00, 0xe0, 0x0f, 0x00, 0x00,  // 'h' 0x68
    0x00, 0x00, 0x10, 0x08, 0x10, 0x08, 0xf6, 0x0f, 0x06, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00,  // 'i' 0x69
    0x00, 0x20, 0x00, 0x60, 0x10, 0x40, 0x10, 0x40, 0xf6, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // 'j' 0x6a
    0x00, 0x00, 0xfe, 0x0f, 0x80, 0x01, 0xc0, 0x03, 0x30, 0x06, 0x10, 0x08, 0x00, 0x00, 0x00, 0x00,  // 'k' 0x6b
    0x00, 0x00, 0x02, 0x08, 0x02, 0x08, 0xfe, 0x0f, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00,  // 'l' 0x6c
    0x00, 0x00, 0xf0, 0x0f, 0x10, 0x00, 0x10, 0x00, 0xf0, 0x0f, 0x10, 0x00, 0x10, 0x00, 0xf0, 0x0f,  // 'm' 0x6d
    0x00, 0x00, 0xf0, 0x0f, 0x20, 0x00, 0x10, 0x00, 0x10, 0x00, 0x30, 0x00, 0xe0, 0x0f, 0x00, 0x00,  // 'n' 0x6e
    0x00, 0x00, 0xe0, 0x07, 0x30, 0x0c, 0x10, 0x08, 0x10, 0x08, 0x30, 0x0c, 0xe0, 0x07, 0x00, 0x00,  // 'o' 0x6f
    0x00, 0x00, 0xf0, 0x7f, 0x20, 0x04, 0x10, 0x08, 0x10, 0x08, 0x30, 0x0c, 0xe0, 0x07, 0x00, 0x00,  // 'p' 0x70
    0x00, 0x00, 0xe0, 0x07, 0x30, 0x0c, 0x10, 0x08, 0x10, 0x08, 0x20, 0x04, 0xf0, 0x7f, 0x00, 0x00,  // 'q' 0x71
    0x00, 0x00, 0x00, 0x00, 0xf0, 0x0f, 0x20, 0x00, 0x10, 0x00, 0x30, 0x00, 0x20, 0x00, 0x00, 0x00,  // 'r' 0x72
    0x00, 0x00, 0x00, 0x04, 0xf0, 0x0c, 0x90, 0x08, 0x90, 0x09, 0x10, 0x09, 0x20, 0x07, 0x00, 0x00,  // 's' 0x73
    0x00, 0x00, 0x10, 0x00, 0x10, 0x00, 0xfe, 0x07, 0x10, 0x08, 0x10, 0x0c, 0x00, 0x06, 0x00, 0x00,  // 't' 0x74
    0x00, 0x00, 0xf0, 0x07, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x08, 0x00, 0x04, 0xf0, 0x0f, 0x00, 0x00,  // 'u' 0x75
    0x00, 0x00, 0x70, 0x00, 0xc0, 0x03, 0x00, 0x0c, 0x00, 0x0f, 0xf0, 0x00, 0x10, 0x00, 0x00, 0x00,  // 'v' 0x76
    0x00, 0x00, 0xf0, 0x03, 0x00, 0x0e, 0xc0, 0x01, 0x80, 0x0f, 0x80, 0x0f, 0x70, 0x00, 0x00, 0x00,  // 'w' 0x77
    0x00, 0x00, 0x10, 0x08, 0x60, 0x06, 0xc0, 0x03, 0xe0, 0x03, 0x30, 0x0c, 0x00, 0x00, 0x00, 0x00,  // 'x' 0x78
    0x00, 0x00, 0x30, 0x00, 0xc0, 0x43, 0x00, 0x7e, 0x00, 0x0f, 0xf0, 0x00, 0x10, 0x00, 0x00, 0x00,  // 'y' 0x79
    0x00, 0x00, 0x10, 0x0c, 0x10, 0x0e, 0x10, 0x0b, 0xd0, 0x08, 0x70, 0x08, 0x30, 0x08, 0x00, 0x00,  // 'z' 0x7a
    0x00, 0x00, 0x40, 0x00, 0x40, 0x00, 0xbf, 0x1f, 0x10, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00,  // '{' 0x7b
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // '|' 0x7c
    0x00, 0x00, 0x00, 0x20, 0x00, 0x21, 0xbf, 0x1f, 0x40, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00,  // '}' 0x7d
    0x00, 0x01, 0xc0, 0x01, 0x40, 0x00, 0xc0, 0x00, 0x80, 0x01, 0x80, 0x01, 0x40, 0x00, 0x00, 0x00,  // '~' 0x7e
};

__code OLED_font OLED_FONT_IOSEVKA_8x16 = {
    (uint8_t *)_OLED_FONT_IOSEVKA_8x16,
    8,   // Font width in pixels
    2,   // Font height in OLED pages (8 pixels per page)
    0,   // Character spacing
    32,  // The code point of the first character
};
