#include <stdio.h>
int main()
{
    // converting input number into month and days
    int userDefinedDays, month, days;
    printf("Please enter days to know month and days \n");
    scanf("%d", &userDefinedDays);
    month = userDefinedDays / 30;
    days = userDefinedDays % 30;
    printf(" Month = %d, Days = %d", month, days);
    return 0;
}
