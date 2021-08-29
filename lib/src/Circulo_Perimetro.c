#include <stdio.h>
#include "../include/lib.h"
#define PI 3.141519

/** @brief gets the perimeter of the circle
 *  @param A first parameter
 *  @returns r
 */


double CirculoPerimetro(double A)
{
    double r;
    r = ((2 * PI) * A);     
    printf("El Perimetro del circulo es: %.2lf\n", r);
    return r;
}