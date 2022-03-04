#include <stdio.h>
int main()
{
    // Infroming user about input (even or odd)
    int num;
    printf("Please enter a digit \n");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Your input number is even");
    }
    else
    {
        printf("Your input number is odd");
    }
    return 0;
}
