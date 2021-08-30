#include "../include/geometric_measures.h"
#include <stdio.h>

/** @brief Gets the area of a triangle based on the lenght of it's sides
 * @param a the lenght of the first side
 * @param b the lenght of other side
 * @param c the lenght of the last side
 * @returns the perimeter of the triangle resulting from a+b+c
 **/
double triangle_perimeter(double a,double b,double c)
{
  double p;
  p=a+b+c;
  return p;
}