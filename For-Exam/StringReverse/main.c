#include <stdio.h>
#include <string.h>
int main()
{
    // reversing string
    char str[] = "";
    gets(str);
    printf("The reverse of your input is %s", strrev(str));
    return 0;
}
