#include <stdio.h>
int main()
{ // Finding number 101 to 200 and print them who are divisable by 2 and 5
    int number, sum = 0;
    for (int i = 101; i < 200; i++)
    {
        if (i % 2 == 0 && i % 5 == 0)
        {
            sum = sum + i;
        }
    }
    printf("Sum of them is %d", sum);

    return 0;
}
