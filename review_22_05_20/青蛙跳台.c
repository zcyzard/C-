//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////̨���� 1  2  3  4  5   6   7   8   9  10
////������ 1  2  3  5  8  13  21  34  55  89
////�Ӻ���ǰ����
//int fib(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
////��ǰ�������
//int func(int n)
//{
//	int i = 0, a = 1, b = 2, c;
//	if (n < 3)
//		return n;
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
//	int num;
//	printf("������̨����Ŀ��");
//	scanf("%d", &num);
//	int nsum = func(num);
//	printf("��������%d��̨�׵ķ���������%d\n", num, nsum);
//	int sum = fib(num);
//	printf("��������%d��̨�׵ķ���������%d\n", num, sum);
//	return 0;
//}