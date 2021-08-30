#include "./lib/include/geometric_measures.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int figura;
    double area, perimetro, parametro1, parametro2, parametro3;
    printf("\t  Elija la figura que desea evaluar\n1 = circulo  2 = cuadrado  3 = triangulo  4 = rectangulo\n");
    scanf("%d", &figura);
    switch (figura)
    {
        case 1:
            printf("Ingrese el radio del circulo: ");
            scanf("%lf", &parametro1);
            area = circle_area(parametro1);
            perimetro = circle_perimeter(parametro1);
            break;
        case 2:
            printf("Ingrese la longitud de los lados del cuadrado: ");
            scanf("%lf", &parametro1);
            area = square_area(parametro1);
            perimetro = square_perimeter(parametro1);
            break;
        case 3:
            printf("Ingrese la altura del triangulo: ");
            scanf("%lf", &parametro1);
            printf("Ingrese la longitud de la base (primer lado) del triangulo: ");
            scanf("%lf", &parametro2);
            area = triangle_area(parametro1, parametro2);
            printf("Ingrese el valor del segundo lado del triangulo: ");
            scanf("%lf", &parametro1);
            printf("Ingrese el valor del tercer lado del triangulo: ");
            scanf("%lf", &parametro3);
            perimetro = triangle_perimeter(parametro1, parametro2, parametro3);
            break;
        case 4:
            printf("Ingrese el valor de la longitud de la base del rectangulo: ");
            scanf("%lf", &parametro1);
            printf("Ingrese el valor de la altura del rectangulo: ");
            scanf("%lf", &parametro2);
            area = rectangle_area(parametro1, parametro2);
            perimetro = rectangle_perimeter(parametro1, parametro2);
            break;
        default:
            printf("Escoga un numero del 1 al 4 como se le indico.\n");
    }
    printf("El area de su figura es: %.2lf.\n", area);
    printf("El perimetro de su figura es: %.2lf.", perimetro);
    return 0;
}