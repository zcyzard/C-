//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////自定义一个数组，并对其进行冒泡排序
//#define N 5
//void func(int* x, int n)
//{
//	int i = 0, j = 0, tmp;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - i - 1; j++)
//			if (x[j] > x[j + 1])
//			{
//				tmp = x[j];
//				x[j] = x[j + 1];
//				x[j + 1] = tmp;
//			}
//}
//int main()
//{
//	int arr[N], i;
//	printf("请输入%d个数：", N);
//	for (i = 0; i < N; i++)
//		scanf("%d", &arr[i]);
//	printf("原数组：\n");
//	for (i = 0; i < N; i++)
//		printf("%d ", arr[i]);
//	printf("\n新数组：\n");
//	func(arr, N);
//	for (i = 0; i < N; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}