#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n, sum = 0;
    printf("Enter a range: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("Sum of n numbers = %d", sum);
    return 0;
}