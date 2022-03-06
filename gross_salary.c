#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    float grossSal, allowance, rent, basic;
    printf("Enter your basic salary: ");
    scanf("%f", &basic);

    allowance = basic * 40 / 100;
    rent = basic * 20 / 100;
    grossSal = allowance + rent + basic;
    printf("Your gross salary is: %.4f", grossSal);
    return 0;
}