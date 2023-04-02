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

void OLED_init(void);
void OLED_clear(void);
void OLED_setFont(OLED_font* font);
void OLED_setMemoryAddress(uint8_t start_page, uint8_t end_page, uint8_t start_column, uint8_t end_column);
void OLED_setCursor(uint8_t row, uint8_t col);
void OLED_write(char c);
void OLED_print(const char* str);
