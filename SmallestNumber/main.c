#include <stdio.h>
int main()
{
    // Printing smallest number out of three
    int a = 1, b = 3, c = 4;
    if (a < b && a < c)
    {
        printf("%d is smallest", a);
    }
    else if (b < a && b < c)
    {
        printf("%d is smallest", b);
    }
    else
    {
        printf("%d is smallest", c);
    }
    return 0;
}
