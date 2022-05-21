#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 10
//打印直角杨辉三角
int main()
{
	int i, arr[N][N];
	for (i = 0; i < N; i++)
	{
		arr[i][i] = 1;
		arr[i][0] = 1;
	}
	for (i = 2; i < N; i++)
		for (int j = 1; j < i; j++)
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];//重点理解
	for (i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
			printf("%-3d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}