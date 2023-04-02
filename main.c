#include <ch554.h>
#include <gpio.h>
#include <oled.h>    // OLED
#include <stdio.h>   // sprintf
#include <system.h>  // mcu_config()
#include <time.h>    // millis(), delay()

#include <font_5x8.h>
#include <font_dos_8x16.h>
#include <font_chinese_16x16.h>
#include <font_chinese_24x24.h>
#include <font_chinese_32x32.h>

__data uint32_t last_system_time = 0;

void startup()
{
    // Set MCU Frequency
    mcu_config();
    delay(5);

    timer_init();
    OLED_init();
    OLED_clear();
}

void main()
{
    __xdata char buf[25];

    startup();

    uint8_t  col   = 0;
    int8_t   inc   = 1;
    uint32_t count = 0;

    OLED_setFont(&OLED_FONT_5x8);
    OLED_setCursor(0, col);
    OLED_print("OLED 128x64 Font Demo");

    while (1)
    {
        if (millis() - last_system_time > 20)
        {
            last_system_time = millis();
            count++;

            OLED_setFont(&OLED_FONT_CHINESE_16x16);
            OLED_setCursor(1, col);
            OLED_paddingPrint("\x01\x02\x03\x04", 1);

            OLED_setFont(&OLED_FONT_DOS_8x16);
            OLED_print("MCU Font");

            OLED_setFont(&OLED_FONT_CHINESE_32x32);
            OLED_setCursor(3, col);
            OLED_paddingPrint("\x01\x02\x03\x04", 1);

            OLED_setFont(&OLED_FONT_5x8);
            OLED_setCursor(0, col);
            OLED_paddingPrint("OLED 128x64 Font Demo", 1);
            OLED_setCursor(7, 0);
            sprintf(buf, "%3ld fps", count * 1000 / millis());
            OLED_print(buf);

            col += inc;

            if (col == 127)
            {
                inc = -1;
            }
            else if (col == 0)
            {
                inc = 1;
            }
        }
    }
}
