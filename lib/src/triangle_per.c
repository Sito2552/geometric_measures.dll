#include <stdio.h>
#include "../include/lib.h"
/** @brief This function calculate the triangle perimeter with one,two or three input and returns the value of perimeter (in double)
 * @param a = value of side a 
 * @param b = value of side b 
 * @param c= value of side c 
 * @returns p= a+b+c (perimeter)
 **/
double triangle_per(double a,double b,double c)
{
  double p;
  p=a+b+c;
  printf("The perimeter is : %lf",p);
  return p;
}