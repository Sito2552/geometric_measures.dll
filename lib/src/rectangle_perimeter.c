#include "../include/geometric_measures.h"
#include <stdio.h>

/** @brief Gets the perimeter of a rectangle based on its base and height
 *  @param base the lenght of the base
 *  @param height the lenght of the height
 *  @returns the perimeter of the rectangle resulting from 2*height+2*base
 */
double rectangle_perimeter(double base, double height)
{
    return (2*height+2*base);
}