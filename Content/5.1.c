//��°ͺղ���,2000���ڵ���ż���ֽ�Ϊ��������֮��
#include"stdio.h"
#include"stdlib.h"
int main()
{
	int i, j, k, a[1000], n = 0;//������a�洢2000���ڵ���������,n��ʾ�����ĸ���
	for (i = 2; i < 2000; i++)
	{
		int key = 1;//key=1��ʱ���ʾ������
		for (j = 2; j <= i / 2; j++)
			if (i % j == 0)
			{
				key = 0; break;
			}
		if (key)
		{
			a[n] = i; n++;
		}
	}
	
	scanf_s("%d", &k);//k������ڵ���4
	int w = 0;
	for (i = 0; i < n; i++)
		for (j = n - 1; j >= i; j--)
			if (a[i] + a[j] == k)
			{
				printf("%4d=%4d+%4d\n", a[i], a[j], k);
				w++;
			}
	
	printf("\n");
	return 0��
}