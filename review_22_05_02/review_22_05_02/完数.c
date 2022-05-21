#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 1000
//一个数正好等于其所有因子(除去本身）的和，则这个数叫完数，例如6=1+2+3，试着找出1000以内的完数。
int main()
{
	for (int i = 1; i <= N; i++)
	{
		int sum = 0;
		for (int j = 1; j < i; j++)//不能用i/2+1来代替i
		{
			if (i % j == 0)
				sum += j;
		}
		if (i == sum)
			printf("%d ", i);
	}
	return 0;
}