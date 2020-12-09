#include <stdio.h>
void taxis(int a[]);
int main()
{
	int a[10] = { 0 }, i, sum = 0, max, min, k = 0;
	double ave;
	for (i = 0; i <= 9; i++)
		scanf("%d", &a[i]);
	taxis(a);
	max = a[0];
	min = a[9];
	for (i = 0; i <= 9; i++)
	{
		if (a[i] != max && a[i] != min)
		{
			sum = sum + a[i];
			k++;
		}
	}
	if (k)
	{
		ave = sum * 1.0 / k;
	}
	else
	{
		ave = 0;
	}
	printf("%lf\n", ave);
	return 0;
}
void taxis(int a[])
{
	int tempt, i, j;
	for (i = 0; i <= 9; i++)
		for (j = i + 1; j <= 9; j++)
		{
			if (a[j] >= a[i])
			{
				tempt = a[i];
				a[i] = a[j];
				a[j] = tempt;
			}
		}
	return;
}