#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//利用二分法查找数组中的元素,二分法只能在有序数组中使用
int main()
{
	int n = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,12,45,71,445 };
	printf("请输入要查找的数：");
	scanf("%d", &n);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > n)	
			right = mid - 1;
		else if (arr[mid] < n)
			left = mid + 1;
		else
		{
			printf("%d在数组中的位置为：%d", n, mid);
			break;
		}
	}
	if (left > right)
		printf("要查找的数跑到喵星球去了");
	return 0;
}