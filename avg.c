#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    float num1, num2, avg;
    printf("Enter two number: ");
    scanf("%f %f", &num1, &num2);

    avg = (num1 + num2) / 2;
    printf("Average of %.2f and %.2f is %.2f", num1, num2, avg);
    return 0;
}