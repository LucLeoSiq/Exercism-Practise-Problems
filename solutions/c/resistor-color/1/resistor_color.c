#include "resistor_color.h"

resistor_band_t color_code(resistor_band_t color) 
{
    return color;
}

const resistor_band_t *colors(void) 
{
    static const resistor_band_t expected_colors[] = {
        BLACK, BROWN, RED, ORANGE, YELLOW,
        GREEN, BLUE, VIOLET, GREY, WHITE
    };
    
    return expected_colors;
}