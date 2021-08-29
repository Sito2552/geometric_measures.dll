#include <stdio.h>
#include <stdlib.h>

double triangle_area(double a,double b);
double triangle_per(double a,double b,double c);

int main()
{
    double base,height,op,s_a,s_b,s_c;
    printf("Type the value of triangle base:\n");
    scanf("%lf", & base);
    printf("Type the value of triangle height:\n");
    scanf("%lf", & height);
    printf("Type the value of side a:\n");
    scanf("%lf", & s_a);
    printf("Type the value of side b:\n");
    scanf("%lf", & s_b);
    printf("Type the value of side c:\n");
    scanf("%lf", & s_c);
    
    triangle_area(height,base); 
    triangle_per(s_a,s_b,s_c);
}
double triangle_area(double a,double b)
{
  double c;
  c=(a*b)/2;
  printf("The triangle area is : %lf \n",c);
  return c;
}
double triangle_per(double a,double b,double c)
{
  double p;
  p=a+b+c;
  printf("The triangle perimeter is : %lf",p);
  return p;
}