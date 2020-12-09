#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int line_count = 0, count, flag = 0;


	for (int i = 100; i <= 999; i++)	//外圈循环
	{
		for (int count = 2; count < i / 2; count++)//找质数
			if (i % count == 0)
			{
				flag = 1;
				break;
			}
		if (flag == 0)
		{
			printf("%4d", i);
			line_count++;
			if (line_count % 8 == 0)
				printf("\n");
		}
		else
			flag = 0;
	}
	printf("\n");
	return	0;
}