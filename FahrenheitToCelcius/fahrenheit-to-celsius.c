#include <stdio.h>
int main()
{
    // fahrenheit  to celsius convert program
    int fahrenheit;
    float celsius;
    scanf("%d", &fahrenheit);
    celsius = (fahrenheit - 32) / 1.8;
    printf("%.2f", celsius);
    return 0;
}
