#include <stdio.h>
int main()
{
    // celsius to fahrenheit convert program
    int celsius;
    float fahrenheit;
    printf("Please enter celsius to get fahrenheit \n");
    scanf("%d", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Fahrenheit is = %.2f", fahrenheit);
    return 0;
}
