//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////台阶数 1  2  3  4  5   6   7   8   9  10
////方法数 1  2  3  5  8  13  21  34  55  89
////从后往前递推
//int fib(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
////从前往后递推
//int func(int n)
//{
//	int i = 0, a = 1, b = 2, c;
//	if (n < 3)
//		return n;
//	else
//	{
//		for (i = 3; i <= n; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int num;
//	printf("请输入台阶数目：");
//	scanf("%d", &num);
//	int nsum = func(num);
//	printf("青蛙跳上%d个台阶的方法总数：%d\n", num, nsum);
//	int sum = fib(num);
//	printf("青蛙跳上%d个台阶的方法总数：%d\n", num, sum);
//	return 0;
//}