/** This library contains functions to get the area and perimeter of four
 * geometric figures (circle, square, triangle and rectangle).
 * It works with parameters of type double.
 * Autor: J. F. Jimenez Barrera, B. A. Gomez Miranda, V. Hernandez Ramirez, M. Perez Rosas, F. Robelo Cruz.
*/

#include <stdint.h>

/** @brief Gets the area of a circle based on its radius
 *  @param A the radius
 *  @returns the area of the circle resulting from PI*A*A
 */
double circle_area(double A);

/** @brief Gets the perimeter of a circle based on its radius
 *  @param A the radius
 *  @returns the perimeter of the circle resulting from 2*PI*A
 */
double circle_perimeter(double A);

/** @brief Gets the area of a square based on the lenght of its sides
 *  @param x the lenght of its sides
 *  @returns the area of the square resulting from x*x
 */
double square_area(double x);

/** @brief Gets the perimeter of a square based on the lenght of its sides
 *  @param x the lenght of its sides
 *  @returns the perimeter of the square resulting from x*4
 */
double square_perimeter(double x);

/** @brief Gets the area of a triangle based on its height and base
 * @param a the height
 * @param b the base
 * @returns the area of the triangle resulting from a*b/2
 */
double triangle_area(double a,double b);

/** @brief Gets the area of a triangle based on the lenght of it's sides
 * @param a the lenght of the first side
 * @param b the lenght of other side
 * @param c the lenght of the last side
 * @returns the perimeter of the triangle resulting from a+b+c
 **/
double triangle_perimeter(double a,double b,double c);

/** @brief Gets the area of a rectangle based on its base and height
 *  @param base the lenght of the base
 *  @param height the lenght of the height
 *  @returns the area of the rectangle resulting from base*height
 */
double rectangle_area(double base, double height);

/** @brief Gets the perimeter of a rectangle based on its base and height
 *  @param base the lenght of the base
 *  @param height the lenght of the height
 *  @returns the perimeter of the rectangle resulting from 2*height+2*base
 */
double rectangle_perimeter(double base, double height);