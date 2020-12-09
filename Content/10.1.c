#include <stdio.h>
struct Student
{
	int ID;
	char name[20];
	int score[3];
};
typedef struct Student Student;
int Input(Student[]);
void Average(Student[], int len);
int main()
{
	Student st[10];
	int num;
	num = Input(st);
	Average(st, num);
	return 0;
}
int Input(Student s[])
{
	int i, j, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d%s", &s[i].ID, s[i].name);
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &s[i].score[j]);
		}
	}
	return n;
}
void Average(Student s[], int len)
{
	int i, j;
	for (i = 0; i < len; i++)
	{
		int ave = 0;
		for (j = 0; j <= 2; j++)
		{
			ave += s[i].score[j];
		}
		ave = ave / 3;
		printf("The average score of the %dth student is %d.\n", i + 1, ave);
	}
}