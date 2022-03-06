#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    /   / if year is divisible by 400 it's a leap year                     
    if (year % 400 == 0)
    {
        printf("%d is a leap year.", year);
    }
    // if year is divisble by 4 and not 100 then it's a leap year too
    else if (year % 4 == 0 && year % 100 != 0)
    {
        printf("%d is a leap year.", year);
    }
    // in other conditions it won't be a leap year
    else
    {
        printf("%d is not a leap year.", year);
    }
    return 0;
}