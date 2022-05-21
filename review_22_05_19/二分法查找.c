//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////#include<string.h>
////利用二分法查找数组中的元素,二分法只能在有序数组中使用
//#define N 5
//int main()
//{
//	int i, n, left, right, mid, length;
//	int arr[N];
//	printf("请输入%d个有序的整数：", N);
//	for (i = 0; i < N; i++)
//		scanf("%d", &arr[i]);
//	//length = strlen(arr);  strlen只能用于求取字符串长度
//	length = sizeof(arr) / sizeof(arr[0]);
//	left = 0;
//	right = length - 1;
//	printf("请输入要查找的数：");
//	scanf("%d", &n);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (n == arr[mid])
//		{
//			printf("%d的下标为：%d", n, mid);
//			break;
//		}
//		else if (n < arr[mid])
//			right = mid - 1;
//		else
//			left = mid + 1;
//	}
//	if (left > right)
//		printf("数组中没有这个元素");
//	return 0;
//}