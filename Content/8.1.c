#include <stdio.h>
#include <string.h>
int main()
{
	char s[] = "0123456789ABCDEF", ox[64];
	long n;
	int i = 0;
	scanf("%ld", &n);
	do
	{
		ox[i] = n % 16;
		n = n / 16;
		i++;
	} while (n != 0);
	for (i--; i >= 0; i--)
	{
		printf("%c", s[ox[i]]);
	}
	return 0;
}