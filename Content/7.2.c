#include <stdio.h>
void sort(int n, int array[]);
int main()
{
	int n, array[10] = { 0 }, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}
	sort(n, array);
	for (i = 0; i < n; i++)
	{
		printf("%d  ", array[i]);
		if (i == n - 1) { printf("\n"); }
	}
	return 0;
}
void sort(int n, int array[])
{
	int i, j, m = 0, * p = array, temp;
	for (i = 0; i < n - 1; i++)
	{
		m = i;
		for (j = i + 1; j < n; j++)
		{
			if (*(p + m) > * (p + j))
			{
				m = j;
			}
		}
		temp = *(p + i);
		*(p + i) = *(p + m);
		*(p + m) = temp;
	}
}