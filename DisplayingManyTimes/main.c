#include <stdio.h>
int main()
{
    // printing message accroding to users mind
    int number;
    printf("How many time you want to display? \n");
    scanf("%d", &number);
    for (int i = 0; i < number; i++)
    {
        printf("I am a student of FPE \n");
    }

    return 0;
}
