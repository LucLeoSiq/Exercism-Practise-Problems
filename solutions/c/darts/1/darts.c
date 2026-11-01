#include "darts.h"
#include "math.h"

int score(coordinate_t coordinate);

int score(coordinate_t coordinate) {
    float distance = sqrt(pow(coordinate.x - 0 , 2) + pow(coordinate.y - 0 , 2));

    if (distance <=  1.0) return 10;
    if (distance <=  5.0) return 5;
    if (distance <=  10.0) return 1;

    return 0;
}