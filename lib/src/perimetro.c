#include <stdio.h>
#include "../include/lib.h"

/** @brief calcula el perimetro de un cuadrado
 *  @param x es la longitud del lado del cuadrado en centimetros
 *  @returns per
 */


double squareperimeter(double x)
{
    double per;

    per = (x * 4);
    printf("El perimetro del cudrado es: %.2lf cm\n", per);
    return per;
}