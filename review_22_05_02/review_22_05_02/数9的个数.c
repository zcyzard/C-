#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//编写程序数一下1~100的所有整数中出现多少个数字9
int main()
{
	int i,n,count=0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			printf("%d ", i);
			count++;
		}
		if (i / 10 == 9)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount=%d", count);
	return 0;
}