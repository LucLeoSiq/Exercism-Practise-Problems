#include "difference_of_squares.h"

unsigned int difference_of_squares(unsigned int number)
{
    return (square_of_sum(number) - sum_of_squares(number));
}

unsigned int square_of_sum(unsigned int number)
{
    unsigned int result = 0;
    for (unsigned int counter = 0; counter <= number; counter++)
        result += counter;

    return (result * result);
}

unsigned int sum_of_squares(unsigned int number)
{
    unsigned int result = 0;
    for (unsigned int counter = 0; counter <= number; counter++)
        result += counter * counter;

    return result;
}