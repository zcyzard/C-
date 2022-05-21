#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//求两个数的最大公约数和最小公倍数
int func(int n, int m)
{
	int tmp;
	while (tmp = n % m)
	{
		n = m;
		m = tmp;
	}
	return m;
}
int main()
{
	int a, b;
	printf("请输入两个数：");
	scanf("%d%d", &a, &b);
	func(a, b);
	printf("最大公约数为：%d\n最小公倍数为：%d", func(a, b), a * b / func(a, b));
	return 0;
}