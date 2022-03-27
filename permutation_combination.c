#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int facto(int, int);

int main()
{
    int total, ways;
    int up, down;
    printf("total: ");
    scanf("%d", &total);
    printf("ways: ");
    scanf("%d", &ways);

    // combination
    up = facto((total - ways) + 1, total);
    down = facto(2, ways);
    int combination = up / down;
    printf("Combination of %dC%d is %d\n", total, ways, combination);

    // permutaion
    int permutaion = facto(total - ways + 1, total);
    printf("Permutation of %dP%d is %d\n", total, ways, permutaion);
    return 0;
}

// function for factorial
int facto(int start, int end)
{
    int facto = 1;
    for (int i = start; i <= end; i++)
    {
        facto *= i;
    }
    return facto;
}
