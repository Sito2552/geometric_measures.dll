#include <stdio.h>
#include "../include/lib.h"
/** @brief This function calculate the triangle area with two input (base and height) and returns the value of the area (in double)
 * @param a = value of height
 * @param b = value of base 
 * @returns c=(a*b)/2 (area)
 **/
double triangle_area(double a,double b)
{
  double c;
  c=(a*b)/2;
  printf("The area is : %lf",c);
  return c;
}