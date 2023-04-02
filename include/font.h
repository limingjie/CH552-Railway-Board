#pragma once

#include <stdint.h>

typedef struct OLED_font
{
    __code uint8_t* data;     // font data
    uint8_t         width;    // font width in pixels
    uint8_t         height;   // font height in pixels
    uint8_t         spacing;  // font character spacing in pixel
    uint8_t         first;    // The value of first character
} OLED_font;
