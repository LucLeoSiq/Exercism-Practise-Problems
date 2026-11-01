#include "grains.h"

#define TOTAL_SQUARES 64

uint64_t square(uint8_t index)
{
    return (index > 0 && index <= TOTAL_SQUARES) ? 1ul << (index - 1) : 0;
}

uint64_t total(void)
{
    return ((((uint64_t)1 << 63) - 1) << 1) + 1;
}