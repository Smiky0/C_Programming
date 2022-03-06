#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int sum = 0, num = 4589;
    // if num = 1234, num%10 will return 4
    // and num/10 will return 123
    sum += num % 10, num /= 10; // sum += 9, num = 458
    sum += num % 10, num /= 10; // sum += 8, num = 45
    sum += num % 10, num /= 10; // sum +=5, num = 4
    sum += num;                 // sum += 4

    printf("Sum of all digits in a four digit number: %d\n", sum);
    return 0;
}