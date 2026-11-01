#include "collatz_conjecture.h"

int steps(int number)
{ 
    int counter;
    for (counter = 0; number > 1; counter++)
    {
        if (number % 2 == 0)
            number = number / 2; 
        else
            number = (number * 3) + 1;
    }

    if (number < 1)
        return ERROR_VALUE;

    return counter;
}