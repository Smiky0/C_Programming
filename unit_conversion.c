#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    float distance;
    printf("Enter the distance: ");
    scanf("%f", &distance);

    // in meteres
    printf("Distance in meteres = %.2fm\n", distance * 1000);
    // in centimeteres
    printf("Distance in centimeteres = %.2fcm\n", distance * 100000);
    // in inches
    printf("Distance in inches = %.2finches\n", distance * 39370.07);
    // in feet
    printf("Distance in feet = %.2ffeet\n", distance * 3280.83);
    return 0;
}