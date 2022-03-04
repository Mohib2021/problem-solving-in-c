#include <stdio.h>
int main()
{
    // fahrenheit  to celsius convert program
    int fahrenheit;
    float celsius;
    printf("Please enter fahrenheit to get celsius \n");
    scanf("%d", &fahrenheit);
    celsius = (fahrenheit - 32) / 1.8;
    printf("Celsius is = %.2f", celsius);
    return 0;
}
