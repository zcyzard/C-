#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��ŵ������
//������  1  2  3   4   5   6
//������  1  3  7  15  31  63
//f(n)=2^n-1
int func(int n)
{
	int result = 1, k = 2;
	for (int i = 1; i <= n; i++)
		result *= k;
	return result - 1;
}
int fib(int n)
{
	if (n == 1)
		return 1;
	else
		return 2 * fib(n - 1) + 1;//fib(n)=2*f(n-1)+1
}
int main()
{
	int num;
	printf("��������������");
	scanf("%d", &num);
	printf("%d��������Ҫ%d��\n", num, func(num));
	printf("%d��������Ҫ%d��\n", num, fib(num));
	return 0;
}