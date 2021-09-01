#include "../include/geometric_measures.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int figura,choose;
    do{
    
    
    double Ladolong,LadolongA, Radio, Area, Altura, Base,Perimetro;
    printf("*************************************************************************\n");
    printf("***                                                                   ***\n");
    printf("***                     ELIJE LA FIGURA A CALCULAR                    ***\n");
    printf("***                                                                   ***\n");
    printf("*** Teclea la opcion que desees:                                      ***\n");
    printf("*** 1.- Circulo                                                       ***\n");
    printf("*** 2.- Rectangulo                                                    ***\n");
    printf("*** 3.- Triangulo                                                     ***\n");
    printf("*** 4.- Cuadrado                                                      ***\n");
    printf("*** 5.- Salir                                                         ***\n");
    printf("***                                                                   ***\n");
    printf("*************************************************************************\n");
    scanf("%d", &figura);
    switch (figura)
    {
        case 1:
            do
            {
                Area = 0;
                Perimetro = 0;
                printf("*************************************************************************\n");
                printf("*** Ingresa el radio del circulo:                                     ***\n");
                printf("*************************************************************************\n");
                scanf("%lf", &Radio);
                Area = circle_area(Radio);
                Perimetro = circle_perimeter(Radio);     
                printf("*************************************************************************\n");
                printf("*** El Area del Circulo es: %.2lf                                     ***\n", Area);
                printf("*** El Perimetro del Circulo es: %.2lf                                ***\n", Perimetro);
                printf("***                                                                   ***\n");
                printf("***  Desea calcular otro circulo?                                     ***\n");
                printf("*** SI = 1                                                            ***\n");
                printf("*** NO = 0                                                            ***\n");
                printf("*************************************************************************\n");
                scanf("%d", &choose);
            }while(choose == 1);
            break;
        case 2:
            do
            {
            Area = 0;
            Perimetro = 0;
            printf("*************************************************************************\n");
            printf("*** Ingrese la Altura en cm de un lado del Rectangulo:                ***\n");
            printf("*************************************************************************\n");
            scanf("%lf", &Altura);
            printf("*************************************************************************\n");
            printf("*** Ingrese la Base en cm de un lado del Rectangulo:                  ***\n");
            printf("*************************************************************************\n");
            scanf("%lf", &Base);
            Area = rectangle_area(Base,Altura);
            Perimetro = rectangle_perimeter(Base,Altura);
            printf("*************************************************************************\n");
            printf("*** El Area del Rectangulo es: %.2lf                                  ***\n", Area);
            printf("*** El Perimetro del Rectangulo es: %.2lf                             ***\n", Perimetro);
            printf("***                                                                   ***\n");
            printf("***  Desea calcular otro Rectangulo?                                  ***\n");
            printf("*** SI = 1                                                            ***\n");
            printf("*** NO = 0                                                            ***\n");
            printf("*************************************************************************\n");
            scanf("%d", &choose);
            }while(choose == 1);
            break;
        case 3:
            do
            {
            Area = 0;
            Perimetro = 0;
            printf("*************************************************************************\n");
            printf("*** Ingrese la Altura en cm del Triangulo:                            ***\n");
            printf("*************************************************************************\n");
            scanf("%lf", &Altura);
            printf("*************************************************************************\n");
            printf("*** Ingrese la Altura en cm del lado 'A' del Triangulo:               ***\n");
            printf("*************************************************************************\n");
            scanf("%lf", &LadolongA);
            printf("*************************************************************************\n");
            printf("*** Ingrese la Base en cm del lado 'B' del Triangulo:                 ***\n");
            printf("*************************************************************************\n");
            scanf("%lf", &Base);
            printf("*************************************************************************\n");
            printf("*** Ingrese la Altura en cm del lado 'C' del Triangulo:               ***\n");
            printf("*************************************************************************\n");
            scanf("%lf", &Ladolong);
            Area = triangle_area(Base,Altura);
            Perimetro = triangle_perimeter(Base,LadolongA,Ladolong);
            printf("*************************************************************************\n");
            printf("*** El Area del Triangulo es: %.2lf                                   ***\n", Area);
            printf("*** El Perimetro del Triangulo es: %.2lf                              ***\n", Perimetro);
            printf("***                                                                   ***\n");
            printf("***  Desea calcular otro Triangulo?                                   ***\n");
            printf("*** SI = 1                                                            ***\n");
            printf("*** NO = 0                                                            ***\n");
            printf("*************************************************************************\n");
            scanf("%d", &choose);
            }while(choose == 1);
            break;
        case 4:
            do
            {
            Area = 0;
            Perimetro = 0;
            Ladolong =0;
            printf("*************************************************************************\n");
            printf("*** Ingrese la longitud en cm de un lado del cuadrado:                ***\n");
            printf("*************************************************************************\n");
            scanf("%lf", &Ladolong);
            Area = square_area(Ladolong);
            Perimetro = square_perimeter(Ladolong);
            printf("*************************************************************************\n");
            printf("*** El Area del Cuadrado es: %.2lf                                    ***\n", Area);
            printf("*** El Perimetro del Cuadrado es: %.2lf                               ***\n", Perimetro);
            printf("***                                                                   ***\n");
            printf("***  Desea calcular otro cuadrado?                                    ***\n");
            printf("*** SI = 1                                                            ***\n");
            printf("*** NO = 0                                                            ***\n");
            printf("*************************************************************************\n");
            scanf("%d", &choose);
            }while(choose == 1);
            break;
        case 5:
            printf("*************************************************************************\n");
            printf("*** HASTA LUEGO!!!!                                                   ***\n");
            printf("*************************************************************************\n");
        break;
            default:
            printf("*************************************************************************\n");
            printf("*** SOLO NUMEROS DEL 1 AL 5                                           ***\n");
            printf("*************************************************************************\n");
    }
 
    }while(figura != 5);
}