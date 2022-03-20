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
    int temp_index, smol_elem;

    for (int i = 0; i < length; i++)
    {
        smol_elem = ar[i];
        for (int j = i + 1; j < length; j++)
        {
            if (ar[j] < smol_elem)
            {
                smol_elem = ar[j];
                temp_index = j;
            }
        }
        // swap
        ar[temp_index] = ar[i];
        ar[i] = smol_elem;
    }

    display(ar, length);

    return 0;
}