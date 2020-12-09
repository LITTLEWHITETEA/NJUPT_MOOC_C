#include <stdio.h>
#include <math.h>
int judgeprime(int n);
int main() {
	int m, j, k;
	int count = 1;
	printf("%4d=%4d+%4d ", 4, 2, 2);
	for (m = 6; m <= 2000; m = m + 2)
	{
		k = m / 2;
		for (j = 3; j <= k; j = j + 2)
			if (judgeprime(j) && judgeprime(m - j))
			{
				printf("%4d=%4d+%4d", m, j, m - j);
				count++;
				if (count % 4 == 0)
				{
					printf("\n");
				}
				else { printf(" "); }
				break;
			}
	}
	printf("\n");
	return 0;
}
int judgeprime(int n)
{
	int i, k;
	if (n == 1)
		return 0;
	k = (int)sqrt(n);
	for (i = 2; i <= k; i++)
		if (n % i == 0)
			return 0;
	return 1;
}