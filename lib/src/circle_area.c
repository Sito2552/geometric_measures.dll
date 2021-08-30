#include "../include/geometric_measures.h"
#include <stdio.h>
#define PI 3.141519

/** @brief Gets the area of a circle based on its radius
 *  @param A the radius
 *  @returns the area of the circle resulting from PI*A*A
 */
double circle_area(double A)
{
    double r;
    r = PI*A*A;
    return r;
}