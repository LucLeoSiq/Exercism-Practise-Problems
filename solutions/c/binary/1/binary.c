#include "binary.h"
#include <math.h>

int convert(const char *input) {
    // Check if array is valid and determine number elements
    int length = 0;    
    for (; *input != '\0'; length++, input++)
        if (*input != '0' && *input != '1')
            return INVALID;

    input--;
    int sum = 0;
    for (int i = 0; length > 0; length--, i++, input--) 
        sum += (*input - '0') * pow(2, i);
        
    return sum; 
}