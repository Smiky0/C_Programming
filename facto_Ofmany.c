#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int factorial(int num)
{
    int facto = 1;
    for (int i = num; i > 1; i--)
    {
        facto *= i;
    }
}

int main()
{
    int limit, num;
    printf("Limit of numbers: ");
    scanf("%d", &limit);

    for (int i = 0; i < limit; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &num);
        printf("Factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}