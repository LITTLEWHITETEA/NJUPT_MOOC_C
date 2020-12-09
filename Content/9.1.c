#include <stdio.h>
#define DAYS_FEB(year) (year)%4==0 && (year)%100!=0 || (year)%400==0 ? 29:28
int main()
{
	int year, days;
	scanf("%d", &year);
	days = DAYS_FEB(year);
	printf("days of the FEB.: %d\n", days);
	return 0;
}