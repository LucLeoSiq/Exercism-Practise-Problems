#include "hamming.h"
#include "stdio.h"
#include "string.h" 

int compute(const char *lhs, const char *rhs){ 
    if (strlen(lhs) != strlen(rhs))
        return -1;

    int distance = 0;
    for (int counter = 0; counter < (int) strlen(lhs); counter++) { 
        if (lhs[counter] != rhs[counter])
            distance++;
    }

    return distance;
}