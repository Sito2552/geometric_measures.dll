#include "../include/geometric_measures.h"
#include <stdio.h>
#include <stdlib.h>

    int main()
    {
        double area, perimetro, dato1, dato2, dato3;
        int menu;

        printf("Ingrese la opcion para la figura que desee.\n");
        printf("1.- Triangulo\n");
        printf("2.- Cuadrado\n");
        printf("3.- Rectangulo\n");
        printf("4.- Circulo\n");
        scanf("%d", &menu);

        switch(menu)
        
        {
            case 1:
                printf("Triangulo\n");
                printf("Ingrese la altura del triangulo: " );
                scanf("%lf", &dato1);
                printf("Ingrese el valor del primer lado del triangulo(la base): ");
                scanf("%lf", &dato2);
                area = triangle_area(dato1, dato2);
                printf("Ingrese el valor del segundo lado del triangulo: ");
                scanf("%lf", &dato1);
                printf("Ingrese el valor del tercer lado del triangulo: ");
                scanf("%lf", &dato3);
                perimetro = triangle_perimeter(dato1, dato2, dato3);
                printf("El area del triangulo es: %.2lf.\n", area);
                printf("El perimetro del triangulo es: %.2lf.", perimetro);
                break;
            case 2:    
                printf("Cuadrado\n");
                printf("Ingrese la longitud de los lados del cuadrado: " );
                scanf("%lf", &dato1);
                area = square_area(dato1);
                perimetro = square_perimeter(dato1);
                printf("El area del cuadrado es: %.2lf.\n", area);
                printf("El perimetro del cuadrado es: %.2lf.", perimetro);
                break;
            case 3:
                printf("Rectangulo\n");
                printf("Ingrese el valor de la longitud del rectangulo: ");
                scanf("%lf", &dato1);
                printf("Ingrese el valor de la altura del rectangulo: ");
                scanf("%lf", &dato2);
                area = rectangle_area(dato1, dato2);
                perimetro = rectangle_perimeter(dato1, dato2);
                printf("El area del rectangulo es: %.2lf.\n", area);
                printf("El perimetro del rectangulo es: %.2lf.", perimetro);
                break;
            case 4:
                printf("Circulo\n");
                printf("Ingrese el radio del circulo: ");
                scanf("%lf", &dato1);
                area = circle_area(dato1);
                perimetro = circle_perimeter(dato1);
                printf("El area del circulo es: %.2lf.\n", area);
                printf("El perimetro del circulo es: %.2lf.", perimetro);
                break;
            default:
                printf("Numero no valido (ingrese del 1 al 4)");
    }
   return 0;
}