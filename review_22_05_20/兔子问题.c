//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////һ�����Ӵӳ������3������ÿ����һ�����ӣ�С���ӵ������º�ÿ������һ�����ӣ��������Ӷ���������ÿ�µ����������Ƕ���
////������֪��ǰ�����µ����Ӷ������������ǵ��µ���Ŀ������������
//
//////�Ӻ���ǰ����
////int fib(int n)
////{
////	if (n <= 2)
////		return 1;
////	else
////		return fib(n - 1) + fib(n - 2);
////}
//
////��ǰ�������
//int fib(int n)
//{
//	int a = 1, b = 1, c, i = 0;
//	if (n <= 2)
//		return 1;
//	else
//	{
//		for (i = 3; i <= n; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int month;
//	printf("������Ҫ��ѯ���·ݣ�");
//	scanf("%d", &month);
//	printf("��%d���µ���������Ϊ��%d", month, fib(month));
//	return 0;
//}