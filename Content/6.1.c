#include <stdio.h>
int judgeleapyear(int a);
int main()
{
	int leapyear[13] = { 0,31,29,31,30,31,30,31,31,30,31,30 };
	int nonleapyear[13] = { 0,31,28,31,30,31,30,31,31,30,31,30 };
	int y, m, d, sum = 0, i;
	scanf("%d-%d-%d", &y, &m, &d);
	if (judgeleapyear(y))
	{
		for (i = 1; i <= m - 1; i++)
		{
			sum = sum + leapyear[i];
		}
		sum = sum + d;
	}
	else
	{
		for (i = 1; i <= m - 1; i++)
		{
			sum = sum + nonleapyear[i];
		}
		sum = sum + d;
	}
	printf("%d\n", sum);
	return 0;
}
int judgeleapyear(int year)
{
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
		return 1;
	return 0;
}