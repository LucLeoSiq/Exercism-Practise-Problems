#include "difference_of_squares.h"

unsigned int difference_of_squares(unsigned int number)
{
    return (square_of_sum(number) - sum_of_squares(number));
}

// Calculate the square of the sum (1 + 2 + ... + 10)² = 55² = 3025.
unsigned int square_of_sum(unsigned int number)
{
    unsigned int sum_result = 0;
    for (unsigned int counter = 0; counter <= number; counter++)
        sum_result += counter;

    return (sum_result * sum_result);
}

// Calculate the sum of the square  1² + 2² + ... + 10² = 385.
unsigned int sum_of_squares(unsigned int number)
{
    unsigned int sum_result = 0;
    for (unsigned int counter = 0; counter <= number; counter++)
        sum_result += counter * counter;

    return sum_result;
}