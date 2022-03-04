#include <stdio.h>
int main()
{
    // fahrenheit  to celsius convert program
    int celsius;
    float fahrenheit;
    scanf("%d", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f", fahrenheit);
    return 0;
}
