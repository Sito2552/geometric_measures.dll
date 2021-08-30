#include "../include/geometric_measures.h"
#include <stdio.h>

/** @brief Gets the area of a triangle based on its height and base
 * @param a the height
 * @param b the base
 * @returns the area of the triangle resulting from a*b/2
 */
double triangle_area(double a,double b)
{
  double c;
  c=a*b/2;
  return c; 
}