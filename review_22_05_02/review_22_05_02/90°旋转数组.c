//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////随机输入一个4x4的数组，并将其按逆时针旋转90°后输出旧数组和新数组
//#define N 4
//int main()
//{
//	int i, j;
//	int arr1[N][N], arr2[N][N];
//	for (i = 0; i < N; i++)
//		for (j = 0; j < N; j++)
//		{
//			scanf("%d", &arr1[i][j]);//不要忘记&
//			arr2[j][N - 1 - i] = arr1[i][j];
//		}
//	printf("原数组为：\n");
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//			printf("%d ", arr1[i][j]);
//		printf("\n");
//	}
//	printf("新数组为：\n");
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//			printf("%d ", arr2[i][j]);
//		printf("\n");
//	}
//	return 0;
//}