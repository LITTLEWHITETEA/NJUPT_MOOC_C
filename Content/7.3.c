#include <stdio.h>
int SumDiff(int a, int b, int* p);
int main()
{
	int a, b, sum, dif;
	scanf("%d%d", &a, &b);
	sum = SumDiff(a, b, &dif);
	printf("sum=%d, difference=%d\n", sum, dif);
	return 0;
}
int SumDiff(int a, int b, int* p)
{
	*p = a - b;
	return a + b;
}