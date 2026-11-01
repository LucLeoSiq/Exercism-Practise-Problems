#include "grains.h"

#define TOTAL_SQUARES 64

uint64_t square(uint8_t index)
{
    if (index == 0)
        return 0;
    
    uint64_t grains = 1;
    for (uint64_t current_square = 1; current_square < index; current_square++)
        grains *= 2;
        
    return grains;
}

uint64_t total(void)
{
    uint64_t grain_sum = 0;
    for (uint64_t current_square = 1; current_square <= TOTAL_SQUARES; current_square++)
        grain_sum += square(current_square);
    
    return grain_sum;
}