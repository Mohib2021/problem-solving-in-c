#include <stdio.h>
int main()
{
    // Printing even number from 15 to 55
    for (int i = 15; i <= 55; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d \n", i);
        }
    }

    return 0;
}
