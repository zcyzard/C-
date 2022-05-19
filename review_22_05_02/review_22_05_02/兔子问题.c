//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////一对兔子从出生后第3个月起每月生一对兔子，小兔子第三个月后每月又生一对兔子，加入兔子都不死，问每月的兔子总数是多少
////分析可知，前两个月的兔子对数加起来就是当月的数目（第三个月起）
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int month;
//	printf("请输入要查询的月份：");
//	scanf("%d", &month);
//	Fib(month);
//	printf("第%d个月的兔子数目为：%d", month, Fib(month));
//	return 0;
//}