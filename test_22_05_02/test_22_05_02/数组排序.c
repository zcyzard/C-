#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//编写函数实现数组中n个元素从大到小排列，在main()中输入并输出
void func(int* x, int n)
{
	int tmp = 0;
	//int max = 0;
	for (int i = 0; i < n - 1; i++)//需要比较的轮数
	{
		//max = x[i];
		//不能这么写，否则每一轮完成后max的值都会被下一轮覆盖
		for (int j = i + 1; j < n; j++)//每一轮需要比较的次数
			if (x[i] < x[j])
			{
				tmp = x[j];
				x[j] = x[i];
				x[i] = tmp;
			}
	}
}
#define N  5
int main()
{
	int arr[N];
	printf("请输入%d个整数：", N);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	printf("原数组为：\n");
	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	func(arr, N);
	printf("\n新数组为：\n");
	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	return 0;
}