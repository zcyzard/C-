#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�ж�1000��~2000��֮�������
int main()
{
	int count = 0, i;
	for (i = 1000; i <= 2000; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount=%d", count);
	return 0;
}