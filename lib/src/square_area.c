#include "../include/geometric_measures.h"
#include <stdio.h>

/** @brief Gets the area of a square based on the lenght of its sides
 *  @param x the lenght of its sides
 *  @returns the area of the square resulting from x*x
 */
double square_area(double x)
{
    double area;
    area = x*x;
    return area;
}