#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// global variable
int rev_arr[11];
int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
int counter = 0;

// display array
void display(int *arr)
{
    for (int i = 0; i < 11; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// array reverse using into another array
void array1()
{
    for (int i = 11 - 1; i >= 0; i--)
    {
        rev_arr[counter++] = arr[i];
    }
    display(rev_arr);
}

// array reverse without making new array
void array2()
{
    for (int i = 0; i < 11 / 2; i++)
    {
        counter = arr[i];
        arr[i] = arr[11 - i - 1];
        arr[11 - i - 1] = counter;
    }
    display(arr);
}

int main()
{
    array1();
    array2();
    return 0;
}