//#define _CRT_SECURE_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////汉诺塔问题
////盘子数  1  2  3   4   5   6
////步骤数  1  3  7  15  31  63
////f(n)=2^n-1
//int func(int n)
//{
//	int i = 1, result = 1, k = 2;
//	for (i = 1; i <= n; i++)
//		result *= k;
//	return result - 1;
//}
//int fib(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return 2 * fib(n - 1) + 1;
//}
//int main()
//{
//	int num1, num2, input;
//	printf("请输入盘子的数目：");
//	scanf("%d", &input);
//	num1 = func(input);
//	num2 = fib(input);
//	printf("该汉诺塔需要的步骤数目为：%d\n", num1);
//	printf("该汉诺塔需要的步骤数目为：%d\n", num2);
//	return 0;
//}