#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void display(int *, int);
int main()
{
    int len;
    printf("Enter array length: ");
    scanf("%d", &len);
    int arr[5];
    for (int i = 0; i < len; i++)
    {
        printf("Enter %dth element: ", i);
        scanf("%d", arr[i]);
    }

    display(arr, len);

    return 0;
}

void display(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d, ", arr++);
    }
}