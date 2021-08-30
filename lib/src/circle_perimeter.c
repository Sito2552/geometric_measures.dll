#include "../include/geometric_measures.h"
#include <stdio.h>
#define PI 3.141519

/** @brief Gets the perimeter of a circle based on its radius
 *  @param A the radius
 *  @returns the perimeter of the circle resulting from 2*PI*A
 */
double circle_perimeter(double A)
{
    double r;
    r = 2*PI*A;
    return r;
}