//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//////随机输入一个正整数，求其每位数字之和
//
//////循环实现
////int func(int n)
////{
////	int sum = 0, a;
////	if (n <= 9)
////		return n;
////	else
////		while (n)
////		{
////			a = n % 10;
////			n = n / 10;
////			sum += a;
////		}
////	return sum;
////}
//
//////递归实现
//int func(int n)
//{
//	if (n > 9)
//		return func(n / 10) + n % 10;
//	return n;
//}
//int main()
//{
//	int num;
//	printf("请输入一个正整数：");
//	scanf("%d", &num);
//	printf("%d的每位之和为：%d", num, func(num));
//	return 0;
//}