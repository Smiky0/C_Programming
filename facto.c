#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int num, facto = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = num; i > 0; i--)
    {
        facto *= i;
    }
    printf("Factorial = %d", facto);
    return 0;
}