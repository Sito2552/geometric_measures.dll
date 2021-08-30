#include "../include/lib.h"
#include <stdio.h>

/** @brief Sacando el perimetro de un rectangulo
 *  @param base es lo que mide la base en centimetros
 *  @param alturan es lo mide la altura en centimetros
 *  @returns ((2*altura)+(2*base))
 */


double perimetro_rec(double base, double altura)
{
    printf("Los datos son: %lf,%lf\n",base,altura);
    return ((2*altura)+(2*base));
}