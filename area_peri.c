#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    float length, breadth, area, peri;

    // take input from user
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);

    // calculate area and perimeter of the rectangle
    peri = 2 * (length + breadth);
    area = (length * breadth);

    // print the values at last
    printf("Perimeter of the rectange: %.2f\n", peri);
    printf("Area of the rectange: %.2f\n", area);

    return 0;
}