#include <stdlib.h>
#include <stdio.h>
double squareperimeter(double x);
double squarearea(double x);

int main()
{
    double centimetros;

    printf("Ingrese la longitud de los lados del cuadrado en centimetros: ");
    scanf("%lf", &centimetros);

    squareperimeter(centimetros);
    squarearea(centimetros);

}

double squareperimeter(double x)
{
    double per;

    per = (x * 4);
    printf("El perimetro del cudrado es: %.2lf cm\n", per);
    return per;
}

double squarearea(double x)
{
    double area;

    area = (x * x);
    printf("El area del cuadro es: %.2lf cm", area);
    return area;
}