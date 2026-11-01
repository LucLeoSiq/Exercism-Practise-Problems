#include "space_age.h"

float age(planet_t planet, int64_t seconds) {
    float earth_years = seconds / 31557600; 
    
    if (planet == MERCURY) return earth_years / 0.2408467;
    if (planet == VENUS) return earth_years / 0.61519726;
    if (planet == EARTH) return earth_years;
    if (planet == MARS) return earth_years / 1.8808158;
    if (planet == JUPITER) return earth_years / 11.862615;
    if (planet == SATURN) return earth_years / 29.447498;
    if (planet == URANUS) return earth_years / 84.016846;
    if (planet == NEPTUNE) return earth_years / 164.79132;   

    return -1;
}