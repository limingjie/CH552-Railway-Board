//
// SSD1306 128x64 OLED library
//
// Required Libraries
// - I2C library from https://github.com/wagiminator/CH552-USB-OLED
//
// References
// - https://github.com/wagiminator/CH552-USB-OLED
// - https://github.com/datacute/Tiny4kOLED
//
// Apr 2023 by Li Mingjie
// - Email:  limingjie@outlook.com
// - GitHub: https://github.com/limingjie/
//

#pragma once
#include <stdint.h>

#include "font.h"

#define OLED_COLOR_INVERT 0
#define OLED_COLOR_NORMAL 1

void OLED_init(void);
void OLED_clear(void);
void OLED_setFont(OLED_font* font);
void OLED_setColor(__bit color);
void OLED_setMemoryAddress(uint8_t start_page, uint8_t end_page, uint8_t start_column, uint8_t end_column);
void OLED_setCursor(uint8_t page, uint8_t column);
void OLED_write(char c);
void OLED_print(const char* str);
void OLED_printRaw(uint8_t start_page, uint8_t end_page, uint8_t start_column, uint8_t end_column, uint8_t* pattern,
                   uint8_t pattern_size);
void OLED_rightScroll(uint8_t start_page, uint8_t end_page, uint8_t start_column, uint8_t end_column);
void OLED_leftScroll(uint8_t start_page, uint8_t end_page, uint8_t start_column, uint8_t end_column);
void OLED_deactivateScroll();
