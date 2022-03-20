#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void display(int *ar, int limit)
{
    for (int i = 0; i < limit; i++)
    {
        printf("%d ", ar[i]);
    }
}

int main()
{
    int length = 7;
    int ar[] = {12, 45, 78, 1, 0, 86, 5};
    int temp;

    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                // swap
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
    display(ar, length);

    return 0;
}