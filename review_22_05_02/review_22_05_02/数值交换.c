#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//交换函数
void func(int* pa, int* pb)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
//用指针变量交换两个整型变量的值
int main()
{
	int a, b;
	printf("请输入两个整数：");
	scanf("%d%d", &a, &b);
	printf("a=%d b=%d\n", a, b);
	func(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}
//用异或的方法交换两个整型变量的值
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d", a, b);
//	return 0;
//}