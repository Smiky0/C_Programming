#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    double num;
    int new_num;
    scanf("%lf", &num);
    new_num = num;
    new_num /= 10;
 
    switch (new_num)
    {
    case 10:
        printf("a");
        break;
    case 9:
        printf("a");
        break;
    case 8:
        printf("b");
        break;
    case 7:
        printf("c");
        break;
    case 6:
        printf("d");
        break;
    case 5:
        printf("e");
        break;
    default:
        printf("f");
        break;
    }
    return 0;
}