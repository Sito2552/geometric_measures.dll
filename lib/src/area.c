#include <stdio.h>
#include "../include/lib.h"

/** @brief calcula el area de un cuadrado
 *  @param x es la longitud del lado del cuadrado en centimetros
 *  @returns area 
 */

double squarearea(double x)
{
    double area;

    area = (x * x);
    printf("El area del cuadro es: %.2lf cm", area);
    return area;
}