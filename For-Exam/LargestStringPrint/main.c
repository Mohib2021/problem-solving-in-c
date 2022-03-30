#include <stdio.h>
#include <string.h>
int main()
{
    // printing largest string
    int firstStrLength, secondStrLength;
    char firstStr[] = "";
    char secondStr[] = "";
    gets(firstStr);
    gets(secondStr);
    firstStrLength = strlen(firstStr);
    secondStrLength = strlen(secondStr);
    if (firstStrLength > secondStrLength)
    {
        puts(firstStr);
    }
    else
    {
        puts(secondStr);
    }
    return 0;
}
