#include <stdio.h>
#include <string.h>
int main()
{
    // copying string
    char str[] = "";
    char copying[] = "";
    gets(str);
    printf("Before copy %s\n", copying);
    strcpy(copying, str);
    printf("After copy %s", copying);
    return 0;
}
