#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char input;
    printf("Enter a character: ");
    scanf("%c", &input);

    if (input < 91 && input > 64)
    {
        input += 32;
    }
    // assuming characters will be only alphabets
    switch (input)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("It's a vowel.");
        break;
    default:
        printf("It's a consonant.");
        break;
    }
    return 0;
}