#include "../include/lib.h"
#include <stdio.h>

/** @brief Sacando el area de un rectangulo
 *  @param base es lo que mide la base en centimetros
 *  @param alturan es lo mide la altura en centimetros
 *  @returns (base * altura)
 */

double area_rec(double base, double altura)
{
    printf("Los datos son: %lf,%lf\n",base,altura);
    return (base * altura);
}