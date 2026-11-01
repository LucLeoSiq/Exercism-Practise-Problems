#include "resistor_color_duo.h"
#include <stdio.h>

int color_code(resistor_band_t resistor[]) {
    return resistor[0] * 10 + resistor[1];
}