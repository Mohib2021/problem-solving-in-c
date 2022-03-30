#include <stdio.h>
int main()
{
    // vowel and consonant check
    char userDefinedChar;
    userDefinedChar = getchar();
    switch (userDefinedChar)
    {

    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("Your pressed char is a vowel");
        break;

    default:
        printf("Your pressed char is a consonant");
    }
    return 0;
}
