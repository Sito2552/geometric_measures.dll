#include <stdio.h>
/** @brief This function calculate the triangle perimeter with one,two or three input and returns the value of perimeter (in double)
 * @param a = value of side a 
 * @param b = value of side b 
 * @param c= value of side c 
 * @returns d= a*3 or (a*2)+c or a+b+c (depends of the type of triangle)
 **/
int main()
{
  double a,b,c,d;
  int option;
  printf("what type of triangle is?\n\n");
  printf("1). Equilateral triangle (has three equal sides)\n2).Isosceles triangle (has two equal sides)\n3).Scalene (has no equal sides)\n\nWrite the option you want : ");
  scanf("%d",&option);
  switch (option){
                case 1:
                
                printf("Write the lenght of the side: ");
                scanf("%lf",&a);
                d=a*3;
                printf("The perimeter is : %lf",d);
                break;

                case 2:
               
                printf("Write the lenght of the equal sides: ");
                scanf("%lf",&a);
                printf("Write the lenght of remaining side : ");
                scanf("%lf",&c);
                d=(a*2)+c;
                printf("The perimeter is : %lf",d);
                break;
                case 3:
                
                printf("Write the lenght of side a: "); 
                scanf("%lf",&a);
                printf("Write the lenght of side b: "); 
                scanf("%lf",&b);
                printf("Write the lenght of side c: "); 
                scanf("%lf",&c);
                d=a+b+c;
                printf("The perimeter is : %lf",d);
                break;
                default:
                printf("the options are between 1 and 3");
            }  
  
  return 0;
}