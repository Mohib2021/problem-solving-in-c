#include <stdio.h>
int main()
{
    // Printing sum of square of number from 1 to 10
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i * i;
    }
    printf("Sum of square of number from 1 to 10 is %d", sum);

    return 0;
}
