#include <stdio.h>
#include <string.h>
int main()
{
    // string concatenation
    char firstStr[] = "Hello ";
    char secondStr[] = "World!";

    printf("Concatenated String: %s\n", strcat(firstStr, secondStr));
    return 0;
}
