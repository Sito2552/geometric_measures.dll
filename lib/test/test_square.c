#include <stdlib.h>
#include <stdio.h>

double square_area(double x);
double square_perimeter(double x);

int main()
{
    double centimetros, area, per;
    printf("Ingrese la longitud de los lados del cuadrado en centimetros: ");
    scanf("%lf", &centimetros);
    area = square_area(centimetros);
    per = square_perimeter(centimetros);
    printf("El area del cuadrado es: %.2lf\n", area);
    printf("El perimetro del cuadrado es: %.2lf\n", per);
}

double square_area(double x)
{
    double area;
    area = x*x;
    return area;
}
double square_perimeter(double x)
{
    double per;
    per = x*4;
    return per;
}