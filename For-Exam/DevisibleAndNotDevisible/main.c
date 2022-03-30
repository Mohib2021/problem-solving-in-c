#include <stdio.h>
int main()
{
    /* print those number who are divisable by 5 but not by 8 and the
    total of the number and their sum  */

    int totalNumber = 0, sum = 0;
    for (int i = 15; i <= 75; i++)
    {
        if (i % 5 == 0 && i % 8 != 0)
        {
            printf("%d \n", i);
            totalNumber++;
            sum = sum + i;
        }
    }
    printf("Total Number = %d \n", totalNumber);
    printf("Sum = %d", sum);

    return 0;
}
