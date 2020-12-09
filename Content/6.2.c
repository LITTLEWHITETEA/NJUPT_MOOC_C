#include <stdio.h>
int fun(int a, int b, int r[]);
int main()
{
	int array[1000] = { 0 };
	int a, b, c, i, j = 0;
	scanf("%d%d", &a, &b);
	c = fun(a, b, array);
	for (i = 0; array[i] != 0; i++)
	{
		j++;
		if (j != 1)
		{
			printf(" ");
		}
		printf("%d", array[i]);
	}
	printf("\n");
	return 0;
}
int fun(int a, int b, int r[])
{
	int k, i = 0;
	for (k = a; k <= b; k++)
	{
		if ((k % 7 == 0 || k % 11 == 0) && (k % 77 != 0))
		{
			r[i] = k;
			i++;
		}
	}
	return i;
}