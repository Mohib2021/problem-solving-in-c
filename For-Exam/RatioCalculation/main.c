#include <stdio.h>
int main()
{
    // Ratio calculation
    int a, b, c, d;
    float ratio;
    printf("Please enter four intiger \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (c - d != 0)
    {
        ratio = (float)(a + b) / (float)(c - d);
        printf("The ratio is %f \n", ratio);
    }
    return 0;
}
