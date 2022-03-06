#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    float ci, si, rate, time, prncipl;
    printf("Enter the principal amount: ");
    scanf("%f", &prncipl);
    printf("Enter the rate in percent: ");
    scanf("%f", &rate);
    printf("Enter the time in year: ");
    scanf("%f", &time);

    // simple interest calculation
    si = (prncipl * rate * time) / 100.0;
    // compound interest calculation
    ci = prncipl * (pow(1 + rate / 100, time) - 1);

    printf("Simple interest for the given data is: %.2f\n", si);
    printf("Compound interest for the given data is: %.2f\n", ci);
    return 0;
}