#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int num, num1, num2;
    num = 1, num1 = 2, num2 = 3;
    if (num > num1)
    {
        if (num > num2)
        {
            printf("%d is the largest number", num);
        }
        else
        {
            printf("%d is the largest number", num2);
        }
    }

    else if (num1 > num2)
    {
        printf("%d is the largest number", num1);
    }
    else
    {
        printf("%d is the largest number", num2);
    }

    return 0;
}