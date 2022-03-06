#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int num = 3, result;

    // assuming num is a positive integer
    //  if condition (num%2==0) is true it will return 1
    //  if not then it will return 0
    result = (num % 2 == 0) ? 1 : 0;
    // if true then it will print even else odd
    if (result == 1)
    {
        printf("%d is an even number.", num);
    }
    else
    {
        printf("%d is an odd number.", num);
    }
    return 0;
}
