#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��������
void func(int* pa, int* pb)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
//��ָ����������������ͱ�����ֵ
int main()
{
	int a, b;
	printf("����������������");
	scanf("%d%d", &a, &b);
	printf("a=%d b=%d\n", a, b);
	func(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}
//�����ķ��������������ͱ�����ֵ
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