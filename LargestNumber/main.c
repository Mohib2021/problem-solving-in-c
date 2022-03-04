#include <stdio.h>
int main()
{
    // Printing largest number out of three
    int a = 6, b = 3, c = 4;
    if (a > b && a > c)
    {
        printf("%d is largest", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is largest", b);
    }
    else
    {
        printf("%d is largest", c);
    }
    return 0;
}
