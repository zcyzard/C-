#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�������������Լ������С������
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
	printf("��������������");
	scanf("%d%d", &a, &b);
	func(a, b);
	printf("���Լ��Ϊ��%d\n��С������Ϊ��%d", func(a, b), a * b / func(a, b));
	return 0;
}