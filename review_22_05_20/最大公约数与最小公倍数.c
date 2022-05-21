//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////求两个数的最大公约数和最小公倍数
//int fun1(int a, int b)//最大公约数
//{
//	int r;
//	while (r = a % b)//分母赋给分子，余数赋给分母
//	{
//		a = b;
//		b = r;
//	}
//	return b;
//}
//int fun2(int a, int b, int c)//最小公倍数
//{
//	return a * b / c;
//}
//int main()
//{
//	int a, b;
//	printf("请输入两个正整数：");
//	scanf("%d%d", &a, &b);
//	int c = fun1(a, b);
//	int d = fun2(a, b, c);
//	printf("最小公倍数：%d\n最大公约数：%d", c, d);
//	return 0;
//}