//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////台阶数 1  2  3  4  5   6   7   8   9  10
////方法数 1  2  3  5  8  13  21  34  55  89
////从后往前递推
//int Fib1(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return Fib1(n - 1) + Fib1(n - 2);
//}
////从前往后递推
//int Fib2(int n)
//{
//	int a = 1;
//	int b = 2;
//	int c;
//	if (n <= 2)
//		return n;
//	else
//	{
//		for (int i = 3; i <= n; i++)
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
//	printf("请输入台阶数：");
//	scanf("%d", &num);
//	printf("%d个台阶共有%d种方法\n", num, Fib1(num));
//	printf("%d个台阶共有%d种方法\n", num, Fib2(num));
//	return 0;
//}