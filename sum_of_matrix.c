/*
row = 3 col = 3

    a =
        [
            [ 1, 2, 3 ],
            [ 4, 5, 6 ],
            [ 7, 8, 9 ]
        ]

    b =
        [
            [ 7, 8, 9 ],
            [ 10, 11, 12 ],
            [ 13, 14, 15 ]
        ]
*/

void display(int *);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int sum_matrix[3][3];
    int row, col;
    row = col = 3;
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum_matrix[i][j] = a[i][j] + b[i][j];
        }
    }
    display(sum_matrix[0]);
    return 0;
}

void display(int *sum_matrix)
{
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", sum_matrix[i]);
    }
}