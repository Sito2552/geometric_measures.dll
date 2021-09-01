#include "../include/geometric_measures.h"
#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int opcion,opcion2;
    double area, perimetro, dato1, dato2, dato3;
    printf("\t  Elija la figura \n1 = circulo  2 = cuadrado  3 = rectangulo 4 = triangulo  \n");
    scanf("%d", &opcion);
     printf("\t  Elija la opcion que quiere sacar \n   1 = area  2 = perimetro\n");
    scanf("%d", &opcion2);
    switch (opcion)
    {
        case 1:
             
            printf("Ingrese el radio del circulo: ");
            scanf("%lf", &dato1);
            switch(opcion2){
            case 1:
            area = circle_area(dato1);
            break;
            case 2:
            perimetro = circle_perimeter(dato1);
            break; 

            default:
            printf("Para Sacar area o perimetro solo escoga entre 1 o 2\n");
            }
            break;
        case 2:
        
       printf("Ingrese el valor de los lados del cuadrado: ");
            scanf("%lf", &dato1);
            switch(opcion2){
            case 1:
            area = square_area(dato1);
            break;
            case 2:
            perimetro = square_perimeter(dato1);
            break; 
            default:
           printf("Para Sacar area o perimetro solo escoga entre 1 o 2\n");
            }
            break;
          
          case 3:
            printf("Ingrese el valor de la base del rectangulo: ");
            scanf("%lf", &dato1);
            printf("Ingrese el valor de la altura del rectangulo: ");
            scanf("%lf", &dato2);
             
             switch(opcion2){
            case 1:
             area = rectangle_area(dato1, dato2);
            break;
            case 2:
            perimetro = rectangle_perimeter(dato1, dato2);
            break; 
            default:
            printf("Para Sacar area o perimetro solo escoga entre 1 o 2\n");
            }
            break;  
       
        case 4:

        switch(opcion2){
            case 1:
            printf("Ingrese el valor de altura del triangulo: ");
            scanf("%lf", &dato1);
            printf("Ingrese el valor de la base del triangulo: ");
            scanf("%lf", &dato2);
            area = triangle_area(dato1, dato2);
            break;
            case 2:
            printf("Ingrese el valor del primer lado del triangulo: ");
            scanf("%lf", &dato2);
            printf("Ingrese el valor del segundo lado del triangulo: ");
            scanf("%lf", &dato1);
            printf("Ingrese el valor del tercer lado del triangulo: ");
            scanf("%lf", &dato3);
            perimetro = triangle_perimeter(dato1,dato2, dato3);
            break; 
            default:
           printf("Para Sacar area o perimetro solo escoga entre 1 o 2\n");
            }
          
            break;
    
          
        default:
            printf("Debe escoger solo en el rango del 1 al 4.\n");
    }

    switch(opcion2){
    case 1:
    printf("El area de la figura es: %.2lf.\n", area);
    break;

    case 2:
    printf("El perimetro de la figura es: %.2lf.", perimetro);
    break; 

    }
    return 0;
}
