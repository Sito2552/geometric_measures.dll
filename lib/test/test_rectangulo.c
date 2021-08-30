
#include <stdlib.h>
#include <stdio.h>

double area_rec(double base, double altura);

double perimetro_rec(double base, double altura);


int main()
{
    double base,altura,area,perimetro;

    printf ("Ingrese el valor base: ");
    scanf ("%lf",&base);

 printf ("Ingrese el valor altura: ");
    scanf ("%lf",&altura);

    area=area_rec( base,altura);
    perimetro=perimetro_rec( base, altura);

    printf ("El area del rectangulo es : %.2lf",area);
 
    printf ("\nEl perimetro del rectangulo es : %.2lf",perimetro);


    
    return 0;
}

double area_rec(double base, double altura)
{
    printf("Los datos son: %.2lf,%.2lf\n",base,altura);
    return (base * altura);
}
double perimetro_rec(double base, double altura)
{
    printf("Los datos son: %.2lf,%.2lf\n",base,altura);
    return ((2*altura)+(2*base));
}