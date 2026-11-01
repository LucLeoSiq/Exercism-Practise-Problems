#include "resistor_color.h"

#define COLORS BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE

resistor_band_t color_code(resistor_band_t color) 
{
    return color;
}

const resistor_band_t *colors(void) 
{
    static const resistor_band_t expected_colors[] = {
        COLORS
    };
    
    return expected_colors;
}