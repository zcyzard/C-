#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 6
int main()
{
	//打印一个直角杨辉三角
	int i, j, arr[N][N];
	for (int i = 0; i < N; i++)//给外围赋值1，底层除外
	{
		arr[i][i] = 1;
		arr[i][0] = 1;
	}
	for (i = 2; i < N; i++)//给内层赋值
		for (j = 1; j < i; j++)
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
	for (i = 0; i < N; i++)
	{
		for (j = 0; j <= i; j++)
			printf("%4d", arr[i][j]);
		printf("\n");
	}
	return 0;
}