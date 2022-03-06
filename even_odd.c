#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int num = 42;

    // assuming num is a positive integer
    if (num % 2 == 0)
    {
        printf("%d is an even number", num);
    }
    else
    {
        printf("%d is an odd number", num);
    }

    return 0;
}

