#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // taking value of pi as 3.14
    float radius, area, circum;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // area of circle
    area = 3.14 * (radius * radius);
    // circumference of a circle
    circum = 2 * 3.14 * radius;
    // print
    printf("Area of circle with radius %.2f = %.2f\n", radius, area);
    printf("Circumference of circle with radius %.2f = %.2f\n", radius, circum);
    return 0;
}