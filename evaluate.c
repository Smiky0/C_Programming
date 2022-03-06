#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a, b, c, d, e, f, g;
    float result;
    printf("Enter values of a,b,c,d,e,f,g in same order: ");
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);
    result = ((a + b / c * d - e) * (f - g));
    printf("The result of the evaluation is : %.3f", result);
    return 0;
}