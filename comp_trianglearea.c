#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle *tr, int n)
{
    // temp to use later for swapping triangle
    triangle temp;
    // define variable to store area of triangle[i] and triangle[i+1]
    float semiperi, semiperi1, area, area1;
    // simple bubble sort below...
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - j - 1; i++)
        {
            // semiperi is basically semi perimeter for triangle i and i+1
            semiperi = (tr[i].a + tr[i].b + tr[i].c) / 2.0;
            semiperi1 = (tr[i + 1].a + tr[i + 1].b + tr[i + 1].c) / 2.0;
            // area is for triangle i and area1 for triangle i+1
            // sqrtf returns float value
            area = sqrtf(semiperi * (semiperi - tr[i].a) * (semiperi - tr[i].b) * (semiperi - tr[i].c));
            area1 = sqrtf(semiperi1 * (semiperi1 - tr[i + 1].a) * (semiperi1 - tr[i + 1].b) * (semiperi1 - tr[i + 1].c));
            // compare two area values then if condition satisfies
            // simply swap triangle i with i+1
            if (area > area1)
            {
                temp = tr[i];
                tr[i] = tr[i + 1];
                tr[i + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    sort_by_area(tr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    return 0;
}