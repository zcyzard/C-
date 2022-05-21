//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#define N 5
//int func(int* x, int sz)
//{
//	int index, i;
//	index = *x;//指针可以当作数组来操作，如x[i]
//	for (i = 1; i < sz; i++)
//		if (*(x + i) > index)
//			index = *(x + i);
//	return index;
//}
//int main()
//{
//	int i, arr[N];
//	printf("请输入%d个整数:", N);
//	for (i = 0; i < N; i++)
//		scanf("%d", &arr[i]);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("max = %d", func(arr, sz));
//	return 0;
//}