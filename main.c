#include <ch554.h>
#include <gpio.h>
#include <oled.h>    // OLED
#include <stdio.h>   // sprintf
#include <system.h>  // mcu_config()
#include <time.h>    // millis(), delay()

#include <font_5x8.h>
#include <font_dos_8x16.h>
#include <font_chinese_16x16.h>

#define SW_VALUE_MIN 0
#define SW_VALUE_MAX 100

#define SW_1 P14
#define SW_2 P15
#define SW_T P34
#define SW_3 P33
#define SW_4 P11

__data uint32_t last_sw_change_time = 0;

void startup()
{
    // Set MCU Frequency
    mcu_config();
    delay(5);

    timer_init();
    OLED_init();
    OLED_clear();

    // Init SLLB120200 pins
    PIN_input_PU(SW_1);
    PIN_input_PU(SW_2);
    PIN_input_PU(SW_T);
    PIN_input_PU(SW_3);
    PIN_input_PU(SW_4);
}

void main()
{
    // __xdata char buf[25];

    startup();

    __bit           b_SW_1       = 1;
    __bit           b_SW_2       = 1;
    __bit           b_SW_3       = 1;
    __bit           b_SW_4       = 1;
    __bit           b_SW_T       = 1;
    __bit           SW_was_left  = 0;
    __bit           SW_was_right = 0;
    __data uint8_t  SW_value     = 0;
    __data uint8_t  slider_pos   = 0;
    __data uint16_t SW_interval  = 500;

    OLED_setFont(&OLED_FONT_CHINESE_16x16);
    OLED_setCursor(1, 3);
    OLED_write(2);
    OLED_setFont(&OLED_FONT_DOS_8x16);
    OLED_print("825");
    OLED_setFont(&OLED_FONT_5x8);
    OLED_setCursor(0, 1);
    OLED_print("Beijing->Qinhuangdao");
    OLED_setCursor(5, 4);
    OLED_print("07:08 - 09:44");
    OLED_setCursor(7, 0);
    OLED_print("#====================");

    while (1)
    {
        b_SW_1 = PIN_read(SW_1);
        b_SW_2 = PIN_read(SW_2);
        b_SW_3 = PIN_read(SW_3);
        b_SW_4 = PIN_read(SW_4);
        b_SW_T = PIN_read(SW_T);

        if (!b_SW_2)  // On Far-Left
        {
            if (millis() - last_sw_change_time > SW_interval && SW_value > SW_VALUE_MIN)
            {
                last_sw_change_time = millis();
                SW_value--;
                SW_interval = 50;
            }
        }
        else if (!b_SW_1)  // On Left
        {
            if (!SW_was_left)
            {
                SW_was_left = 1;
                if (SW_value > SW_VALUE_MIN)
                {
                    last_sw_change_time = millis();
                    SW_value--;
                }
            }
        }
        else if (!b_SW_3)  // On Far-Right
        {
            if (millis() - last_sw_change_time > SW_interval && SW_value < SW_VALUE_MAX)
            {
                last_sw_change_time = millis();
                SW_value++;
                SW_interval = 50;
            }
        }
        else if (!b_SW_4)  // On Right
        {
            if (SW_was_right != 1)
            {
                SW_was_right = 1;
                if (SW_value < SW_VALUE_MAX)
                {
                    last_sw_change_time = millis();
                    SW_value++;
                }
            }
        }
        else
        {
            SW_was_left  = 0;
            SW_was_right = 0;
            SW_interval  = 500;
        }

        if (SW_value / 5 != slider_pos)
        {
            OLED_setCursor(7, slider_pos);
            OLED_write('=');
            slider_pos = SW_value / 5;
            OLED_setCursor(7, slider_pos);
            OLED_write('#');
        }
    }
}
