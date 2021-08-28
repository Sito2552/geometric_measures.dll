#include <stdio.h>
/** @brief This function calculate the triangle area with two input (base and height) and returns the value of the area (in double)
 * @param a = value of height
 * @param b = value of base
 * @param c= value of area  
 * @returns c =(a*b)/2 
 **/
int main()
{
  double a,b,c;
  printf("write the value of the base ");
  scanf("%lf",&b);
  printf("Write the value of height ");
  scanf("%lf",&a);
  c=(a*b)/2;
  printf("The area is : %lf",c);
  return 0;
}