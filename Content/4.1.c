#include<stdio.h>
int main()
{
    double m, s, item, factorial, power;
    int n, i, sign;
    n = 1;
    factorial = 1;
    i = 1;
    power = 1;
    sign = 1;
    s = 0;
    item = 1;
    scanf("%lf", &m);
    do
    {
        for (i = 1; i <= n; i++)
            factorial *= i;
        for (i = 1; i <= n; i++)
            power *= m;
        item = (double)sign * power / factorial;
        s += item;
        sign = -sign;
        item *= -sign;
        power = 1;
        factorial = 1;
        n++;
    } while (item >= 1e-4);
    printf("%.2f\n", s);
    return 0;
}