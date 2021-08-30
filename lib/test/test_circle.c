#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

double circle_area(double A);
double circle_perimeter(double A);

int main()
{
    double r,per,are;
    printf("Inserte el radio del circulo.\n");
    scanf("%lf", &r);
    are = circle_area(r);
    per = circle_perimeter(r);
    printf("El area del circulo es: %.2lf\n", are);
    printf("El perimetro del circulo es: %.2lf\n", per);
}

double circle_area(double A)
{
    double r;
    r = PI*A*A;
    return r;
}
double circle_perimeter(double A)
{
    double r;
    r = 2*PI*A;
    return r;
}