#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

double CirculoArea(double A);
double CirculoPerimetro(double A);

int main()
{
    double r,per,are;
    printf("Inserte el radio del circulo\n");
    scanf("%lf", & r);

    
    CirculoArea(r); 
    CirculoPerimetro(r);
}
double CirculoArea(double A)
{
    double r;
    r = (PI * (A*A));     
    printf("El Area del Circulo es: %.2lf\n", r);
    return r;
}
double CirculoPerimetro(double A)
{
    double r;
    r = ((2 * PI) * A);     
    printf("El Perimetro del circulo es: %.2lf\n", r);
    return r;
}