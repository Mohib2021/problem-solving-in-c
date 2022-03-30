#include <stdio.h>
int main()
{
    // String vowel and position of vowel check
    int index = 0;
    char str[100];
    gets(str);
    while (str[index] != '\0')
    {
        switch (str[index])
        {
        case 'a':
            printf("a is found at %d\n", index);
            break;
        case 'A':
            printf("A is found at %d\n", index);
            break;
        case 'e':
            printf("e is found at %d\n", index);
            break;
        case 'E':
            printf("E is found at %d\n", index);
            break;
        case 'i':
            printf("i is found at %d\n", index);
            break;
        case 'I':
            printf("I is found at %d\n", index);
            break;
        case 'o':
            printf("o is found at %d\n", index);
            break;
        case 'O':
            printf("O is found at %d\n", index);
            break;
        case 'u':
            printf("u is found at %d\n", index);
            break;
        default:
            break;
        }
        index++;
    }
    return 0;
}
