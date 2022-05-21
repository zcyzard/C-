//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define N 10
////         1
////       1   1
////     1   2   1
////   1   3   3   1
//// 1   4   6   4   1
//
////´òÓ¡Ö±½ÇÑî»ÔÈý½Ç
//int main()
//{
//	int i = 0, j = 0, arr[N][N];
//	for (i = 0; i < N; i++)
//	{
//		arr[i][i] = 1;
//		arr[i][0] = 1;
//	}
//	for (i = 2; i < N; i++)
//		for (j = 1; j < i; j++)
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j <= i; j++)
//			printf("%-3d ", arr[i][j]);
//		printf("\n");
//	}
//	return 0;
//}