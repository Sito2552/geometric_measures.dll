#include "../include/geometric_measures.h"
#include <stdio.h>

/** @brief Gets the perimeter of a square based on the lenght of its sides
 *  @param x the lenght of its sides
 *  @returns the perimeter of the square resulting from x*4
 */
double square_perimeter(double x)
{
    double per;
    per = x*4;
    return per;
}