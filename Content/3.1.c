#include <stdio.h>
int main()
{
    double F, C;
    scanf("%lf", &F);
    C = 5 * (F - 32) / 9;
    printf("Celsius=%lf", C);
    return 0;
}