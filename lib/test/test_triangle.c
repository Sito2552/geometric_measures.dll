#include <stdio.h>
#include <stdlib.h>

double triangle_area(double a,double b);
double triangle_perimeter(double a,double b,double c);

int main()
{
    double base, height, op, s_a, s_b, s_c, area, per;
    printf("Ingrese el valor de la base del triangulo:\n");
    scanf("%lf", &base);
    printf("Ingrese el valor de la altura del triangulo:\n");
    scanf("%lf", &height);
    printf("Ingrese el valor del lado a:\n");
    scanf("%lf", &s_a);
    printf("Ingrese el valor del lado b:\n");
    scanf("%lf", &s_b);
    printf("Ingrese el valor del lado c:\n");
    scanf("%lf", &s_c);
    area = triangle_area(height, base);
    per = triangle_perimeter(s_a, s_b, s_c);
    printf("El area del triangulo es: %.2lf\n",area);
    printf("El perimetro del triangulo es: %.2lf",per);
}
double triangle_area(double a,double b)
{
  double c;
  c=a*b/2;
  return c; 
}
double triangle_perimeter(double a,double b,double c)
{
  double p;
  p=a+b+c;
  return p;
}