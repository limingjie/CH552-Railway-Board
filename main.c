#include <ch554.h>
#include <gpio.h>
#include <oled.h>    // OLED
#include <stdio.h>   // sprintf
#include <system.h>  // mcu_config()
#include <time.h>    // millis(), delay()

// Only keep the used fonts to reduce binary size
// #include <font_5x8.h>
#include <font_chinese_16x16.h>
#include <font_Iosevka_10x24.h>

// SLLB120200
#define SW_LEFT      P14  // PIN 1
#define SW_FAR_LEFT  P15  // PIN 2
#define SW_MIDDLE    P34  // PIN T
#define SW_FAR_RIGHT P33  // PIN 3
#define SW_RIGHT     P11  // PIN 4

__data uint8_t sw_value        = 0;
__data uint8_t sw_value_min    = 0;
__data uint8_t sw_value_max    = 0;
__bit          b_sw_was_pushed = 0;

__code char* __code cities[]            = {"DAE", "FAG", "HIJ", "KAL", "MAN"};
__code char* __code code_number_arrow[] = {"GDKTC", "0123456789 ", "BC"};
__code uint8_t      train[]             = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,        // overwrite
    0x20,                                                  // connector
    0x70, 0x78, 0x78, 0x7c, 0x7c, 0x7c, 0x7e, 0x7e, 0x7e,  // lead head
    0x46, 0x46, 0x46, 0x7e, 0x7e, 0x7e, 0x46, 0x46, 0x46,  // window
    0x7e, 0x7e, 0x7e, 0x46, 0x46, 0x46, 0x7e, 0x7e, 0x7e,  // wheel & window
    0x20,                                                  // connector
    0x7e, 0x7e, 0x7e, 0x46, 0x46, 0x46, 0x7e, 0x7e, 0x7e,  // wheel & window
    0x46, 0x46, 0x46, 0x7e, 0x7e, 0x7e, 0x46, 0x46, 0x46,  // window
    0x7e, 0x7e, 0x7e, 0x46, 0x46, 0x46, 0x7e, 0x7e, 0x7e,  // wheel & window
    0x20,                                                  // connector
    0x7e, 0x7e, 0x7e, 0x46, 0x46, 0x46, 0x7e, 0x7e, 0x7e,  // wheel & window
    0x46, 0x46, 0x46, 0x7e, 0x7e, 0x7e, 0x46, 0x46, 0x46,  // window
    0x7e, 0x7e, 0x7e, 0x46, 0x46, 0x46, 0x7e, 0x7e, 0x7e,  // wheel & window
    0x20,                                                  // connector
    0x7e, 0x7e, 0x7e, 0x46, 0x46, 0x46, 0x7e, 0x7e, 0x7e,  // wheel & window
    0x46, 0x46, 0x46, 0x7e, 0x7e, 0x7e, 0x46, 0x46, 0x46,  // window
    0x7e, 0x7e, 0x7e, 0x7c, 0x7c, 0x7c, 0x78, 0x78, 0x70,  // right head
    0x20,                                                  // connector
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,        // overwrite
};

typedef struct display_section
{
    uint8_t           page;
    uint8_t           column;
    uint8_t           type;  // 0 - train codes, 1 - number, 2 - arrow, 3 - city, 4 - train
    uint8_t           max;
    uint8_t           value;
    __code OLED_font* font;
} section;

#define TYPE_CODE   0
#define TYPE_NUMBER 1
#define TYPE_ARROW  2
#define TYPE_CITY   3
#define TYPE_TRAIN  4

#define NUM_OF_SECTIONS 9
__xdata section sections[NUM_OF_SECTIONS] = {
    {0, 0, TYPE_CITY, 4, 0, &OLED_FONT_CHINESE_16x16},      // Left station
    {0, 56, TYPE_ARROW, 1, 1, &OLED_FONT_CHINESE_16x16},    // Arrow
    {0, 80, TYPE_CITY, 4, 1, &OLED_FONT_CHINESE_16x16},     // Right station
    {3, 30, TYPE_CODE, 4, 0, &OLED_FONT_IOSEVKA_12x24},     // Train code
    {3, 44, TYPE_NUMBER, 10, 8, &OLED_FONT_IOSEVKA_12x24},  // Train number digit 1
    {3, 58, TYPE_NUMBER, 10, 8, &OLED_FONT_IOSEVKA_12x24},  // Train number digit 2
    {3, 72, TYPE_NUMBER, 10, 0, &OLED_FONT_IOSEVKA_12x24},  // Train number digit 3
    {3, 86, TYPE_NUMBER, 10, 1, &OLED_FONT_IOSEVKA_12x24},  // Train number digit 4
    {7, 0, TYPE_TRAIN, 2, 1, NULL},                         // Train
};

void startup()
{
    // Set MCU Frequency
    mcu_config();
    delay(5);

    timer_init();
    OLED_init();
    OLED_clear();

    // Init SLLB120200 pins
    PIN_input_PU(SW_LEFT);
    PIN_input_PU(SW_RIGHT);
    PIN_input_PU(SW_MIDDLE);
}

__bit switch_pushed()
{
    if (PIN_read(SW_MIDDLE) && b_sw_was_pushed)
    {
        b_sw_was_pushed = 0;
        return 1;
    }
    return 0;
}

void process_switches()
{
    static __bit           b_sw_was_left       = 0;
    static __bit           b_sw_was_right      = 0;
    static __data uint16_t sw_interval         = 1000;
    static __data uint32_t last_sw_change_time = 0;

    __bit b_sw_middle    = PIN_read(SW_MIDDLE);
    __bit b_sw_far_left  = PIN_read(SW_FAR_LEFT);
    __bit b_sw_left      = PIN_read(SW_LEFT);
    __bit b_sw_far_right = PIN_read(SW_FAR_RIGHT);
    __bit b_sw_right     = PIN_read(SW_RIGHT);

    delay(10);         // debounce

    if (!b_sw_middle)  // Middle pushed
    {
        b_sw_was_pushed = 1;
    }
    else if (!b_sw_far_left)  // On Far-Left
    {
        if (millis() - last_sw_change_time > sw_interval && sw_value > sw_value_min)
        {
            last_sw_change_time = millis();
            sw_interval         = 100;
            sw_value--;
        }
    }
    else if (!b_sw_left)  // On Left
    {
        if (!b_sw_was_left)
        {
            last_sw_change_time = millis();
            b_sw_was_left       = 1;
            if (sw_value > sw_value_min)
            {
                sw_value--;
            }
        }
    }
    else if (!b_sw_far_right)  // On Far-Right
    {
        if (millis() - last_sw_change_time > sw_interval && sw_value < sw_value_max)
        {
            last_sw_change_time = millis();
            sw_interval         = 100;
            sw_value++;
        }
    }
    else if (!b_sw_right)  // On Right
    {
        if (b_sw_was_right != 1)
        {
            last_sw_change_time = millis();
            b_sw_was_right      = 1;
            if (sw_value < sw_value_max)
            {
                sw_value++;
            }
        }
    }
    else
    {
        b_sw_was_left  = 0;
        b_sw_was_right = 0;
        sw_interval    = 1000;
    }
}

void render_section(__bit color, section* ptr)
{
    OLED_setColor(color);
    OLED_setFont(ptr->font);
    OLED_setCursor(ptr->page, ptr->column);
    if (ptr->type == 3)
    {
        OLED_print(cities[ptr->value]);
    }
    else if (ptr->type == 4)
    {
        OLED_deactivateScroll();
        delay(100);
        OLED_printRaw(7, 7, 0, 127, train, 128);
        if (ptr->value == 0)
        {
            OLED_leftScroll(7, 7, 0, 127);
        }
        else if (ptr->value == 2)
        {
            OLED_rightScroll(7, 7, 0, 127);
        }
    }
    else
    {
        OLED_write(code_number_arrow[ptr->type][ptr->value]);
    }
}

void main()
{
    __data uint32_t last_system_time = 0;
    uint8_t         current_section  = 0;
    __bit           color            = OLED_COLOR_NORMAL;

    startup();

    section* ptr = sections;
    for (uint8_t i = NUM_OF_SECTIONS; i; i--)
    {
        render_section(OLED_COLOR_NORMAL, ptr);
        ptr++;
    }

    sw_value_min = 0;
    sw_value_max = sections[current_section].max;
    sw_value     = sections[current_section].value;

    while (1)
    {
        process_switches();

        // Debug
        // if (sections[current_section].type != 4)
        // {
        //     OLED_setColor(OLED_COLOR_NORMAL);
        //     OLED_setFont(&OLED_FONT_5x8);
        //     OLED_setCursor(6, 0);
        //     OLED_write('0' + sw_value);
        //     OLED_write(b_sw_was_pushed ? '1' : '0');
        // }

        if (switch_pushed())
        {
            if (sections[current_section].type == 4)
            {
                sections[current_section].value = 1;  // stop scroll
            }

            render_section(OLED_COLOR_NORMAL, &sections[current_section++]);
            current_section %= NUM_OF_SECTIONS;

            sw_value_min = 0;
            sw_value_max = sections[current_section].max;
            sw_value     = sections[current_section].value;
        }

        if (sw_value != sections[current_section].value)
        {
            sections[current_section].value = sw_value;
            render_section(color, &sections[current_section]);
        }

        // Blink
        if (millis() - last_system_time > 500)
        {
            last_system_time = millis();
            color            = !color;
            if (sections[current_section].type != 4)
            {
                render_section(color, &sections[current_section]);
            }
        }
    }
}
