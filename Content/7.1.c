#include <stdio.h>
void sort(int m, int array[]);
int main()
{
	int array[10] = { 1,2,3,4,5,6,7,8,9,10 }, m, i;
	scanf("%d", &m);
	sort(m, array);
	for (i = 0; i < 10; i++)
	{
		printf("%3d", array[i]);
		if (i == 9)
		{
			printf("\n");
		}
	}
	return 0;
}
void sort(int m, int array[])
{
	int j, temp;
	temp = array[9];
	for (j = 8; j >= 0; j--)
	{
		array[j + 1] = array[j];
	}
	array[0] = temp;
	m--;
	if (m > 0)
	{
		sort(m, array);
	}
}