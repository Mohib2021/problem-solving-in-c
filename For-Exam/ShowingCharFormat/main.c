#include <stdio.h>
#include <ctype.h>
int main()
{
    // informing user what the input charecter is
    char userDefinedChar;
    printf("Enter any charecter to know what it is \n");
    userDefinedChar = getchar();
    if (isalpha(userDefinedChar))
    {
        printf("Your input is an alphabet");
    }
    else if (isdigit(userDefinedChar))
    {
        printf("Your input is a digit");
    }
    else
    {
        printf("Your input is a special charecter");
    }
    return 0;
}
