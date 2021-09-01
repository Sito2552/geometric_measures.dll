#include "../include/geometric_measures.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    int option;
    double ar,per,par_a,par_b,par_c,height;
    printf("Type the value of a square side: ");
            scanf("%lf", &par_a);
            ar=square_area(par_a);
            per=square_perimeter(par_a);
            printf("the area of the square is: %lf\n", ar);
            printf("the perimeter of the square is: %lf\n", per);
            printf("******************************************\n");
    printf("Type the value of the radius of circle: ");
            scanf("%lf", &par_a);
            ar=circle_area(par_a);
            per=circle_perimeter(par_a);
            printf("the area of the circle is: %lf\n", ar);
            printf("the perimeter of the circle is: %lf\n", per);
            printf("******************************************\n");
    printf("Type the value of the base of rectangle: ");
            scanf("%lf", &par_a);
            printf("Type the value of the base of rectangle: ");
            scanf("%lf", &par_b);
            ar=rectangle_area(par_a,par_b);
            per=rectangle_perimeter(par_a,par_b);
            printf("the area of the rectangle is: %lf\n", ar);
            printf("the perimeter of the rectangle is: %lf\n", per);
            printf("******************************************\n");
    printf("Type the height of the triangle: ");
            scanf("%lf", &height);
            printf("Type the value of base (or side 1 of triangle): ");
            scanf("%lf", &par_a);
            printf("Type the value of side 2 of triangle: ");
            scanf("%lf", &par_b);
            printf("Type the value of side 3 of triangle: ");
            scanf("%lf", &par_c);
            ar=triangle_area(height,par_a);
            per=triangle_perimeter(par_a,par_b,par_c);
            printf("the area of the triangle is: %lf\n", ar);
            printf("the perimeter of the triangle is: %lf\n", per);
            printf("******************************************\n");



    return 0;
}