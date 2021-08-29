#include <stdio.h>
#include "../include/lib.h"
#define PI 3.141519

/** @brief gets the area of the circle
 *  @param A first parameter
 *  @returns r
 */

double CirculoArea(double A)
{
    double r;
    r = (PI * (A*A));     
    printf("El Area del Circulo es: %.2lf\n", r);
    return r;
}