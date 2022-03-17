#include "trygonometria.h"
#include <cmath>

double degreemath::sin(double degree)
{
    return std::sin(degree * M_PI / 180);
}

double degreemath::cos(double degree)
{
    return std::cos(degree * M_PI / 180);
}

double degreemath::tan(double degree)
{
    return std::tan(degree * M_PI / 180);
}

double degreemath::ctg(double degree)
{
    return 1/std::tan(degree * M_PI / 180);
}

