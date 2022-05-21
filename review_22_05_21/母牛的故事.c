//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。请编程实现在第n年的时候，共有多少头母牛？
////年份  1   2   3   4    5    6   7    8
////数量  2   3   4   6    9    13  18   24
////当n<=3时，f(n)=n+1;当n>3时，f(n)=f(n-1)+n-2
//int fib(int n)
//{
//	if (n <= 3)
//		return n + 1;
//	else
//		return fib(n - 1) + n - 2;
//}
//int main()
//{
//	int year;
//	printf("请输入要查询的年份：");
//	scanf("%d", &year);
//	printf("第%d年的母牛数目为：%d", year, fib(year));
//	return 0;
//}