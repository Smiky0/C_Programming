#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    float faren, celci;
    printf("Temperature: ");
    scanf("%f", &faren);
    celci = (faren - 32) * 5 / 9;
    printf("Temperature in celcius will be: %.2f", celci);
    return 0;
}