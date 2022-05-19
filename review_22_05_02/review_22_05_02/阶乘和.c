//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////阶乘和可以用一层循环完成
///*for (i = 1; i <= n; i++)
//{
//	result *= i;
//	sum += result;
//}*/
//int func(int n)
//{
//	int i, j;
//	int result = 1;
//	int sum = 0;
//	if (n > 0)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			result = 1;
//			for (j = 1; j <= i; j++)
//				result *= j;
//			sum += result;
//		}
//		return sum;
//	}
//	else
//		return result;
//}
//int main()
//{
//	//求1~n的阶乘和
//	int n;
//	printf("请输入一个非负整数：");
//	scanf("%d", &n);
//	printf("阶乘和为：%d", func(n));
//	return 0;
//}