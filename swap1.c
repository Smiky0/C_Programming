#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int num1, num2, temp;
    printf("Enter two values: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping num1 = %d, num2 = %d\n", num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
