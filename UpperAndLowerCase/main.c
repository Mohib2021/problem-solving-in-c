#include <stdio.h>
#include <ctype.h>
int main()
{
    // converting upper to lower and lower to uppercase
    char userDefinedChar;
    printf("Please enter any alphabet \n");
    userDefinedChar = getchar();
    if (isupper(userDefinedChar))
    {
        userDefinedChar = tolower(userDefinedChar);
        printf("Your input is %c", userDefinedChar);
    }
    else if (islower(userDefinedChar))
    {
        userDefinedChar = toupper(userDefinedChar);
        printf("Your input is %c", userDefinedChar);
    }

    return 0;
}
