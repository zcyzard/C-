#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//编写函数实现数组中n个元素从大到小排列，在main()中输入并输出
#define N 3
void func(int* arr, int n)//int* arr也可以替换成int arr[],但是这样会浪费空间
{
	int max;
	/*int sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz=%d\n", sz);*/
	//为什么sz=2？
	for (int i = 0; i < n - 1; i++)
	{
		//max不能在这里定义、初始化
		for (int j = i + 1; j < n; j++)
			if (arr[i] < arr[j])
			{
				max = arr[j];
				arr[j] = arr[i];
				arr[i] = max;
			}
	}
}
int main()
{
	int i, arr[N];
	printf("请输入%d个整数：", N);
	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	printf("原数组为：\n");
	for (i = 0; i < N; i++)
		printf("%d ", arr[i]);
	printf("\n新数组为：\n");
	func(arr, N);
	for (i = 0; i < N; i++)
		printf("%d ", arr[i]);
	return 0;
}