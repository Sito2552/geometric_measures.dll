#include <stdio.h>
#include <stdlib.h>

double rectangle_area(double base, double height);
double rectangle_perimeter(double base, double height);

int main()
{
    double base,height,area,perimetro;
    printf ("Ingrese el valor de la base: ");
    scanf ("%lf",&base);
    printf ("Ingrese el valor de la altura: ");
    scanf ("%lf",&height);
    area=rectangle_area(base, height);
    perimetro=rectangle_perimeter(base, height);
    printf ("El area del rectangulo es : %.2lf\n",area);
    printf ("El perimetro del rectangulo es : %.2lf",perimetro);
    return 0;
}

double rectangle_area(double base, double height)
{
    return base*height;
}
double rectangle_perimeter(double base, double height)
{
    return (2*height+2*base);
}