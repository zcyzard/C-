//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////编写函数实现数组中n个元素从大到小排列，在main()中输入并输出
//#define N 3
//void func(int* x, int n)
//{
//	int i, j, tmp;
//	for (i = 0; i < n - 1; i++)
//		for (j = i + 1; j < n; j++)
//			if (x[i] < x[j])
//			{
//				tmp = x[j];
//				x[j] = x[i];
//				x[i] = tmp;
//			}
//}
//int main()
//{
//	int i, arr[N];
//	printf("请输入%d个整数：", N);
//	for (i = 0; i < N; i++)
//		scanf("%d", &arr[i]);
//	printf("原数组为：\n");
//	for (i = 0; i < N; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//	func(arr, N);
//	printf("新数组为：\n");
//	for (i = 0; i < N; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}