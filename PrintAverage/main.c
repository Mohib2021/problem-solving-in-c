#include <stdio.h>
int main()
{
    // Printing average of N numbers
    int i, desiredNumber, Sum = 0, numbers;
    float Average;

    printf("Please Enter How many Number you want?\n");
    scanf("%d", &desiredNumber);

    printf("Please Enter the numbers one by one\n");
    for (i = 0; i < desiredNumber; ++i)
    {
        scanf("%d", &numbers);
        Sum = Sum + numbers;
    }
    Average = Sum / desiredNumber;
    printf("Average of your %d given numbers is = %.2f", desiredNumber, Average);
    return 0;
}
