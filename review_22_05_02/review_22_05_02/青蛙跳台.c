//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////̨���� 1  2  3  4  5   6   7   8   9  10
////������ 1  2  3  5  8  13  21  34  55  89
////�Ӻ���ǰ����
//int Fib1(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return Fib1(n - 1) + Fib1(n - 2);
//}
////��ǰ�������
//int Fib2(int n)
//{
//	int a = 1;
//	int b = 2;
//	int c;
//	if (n <= 2)
//		return n;
//	else
//	{
//		for (int i = 3; i <= n; i++)
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
//	printf("������̨������");
//	scanf("%d", &num);
//	printf("%d��̨�׹���%d�ַ���\n", num, Fib1(num));
//	printf("%d��̨�׹���%d�ַ���\n", num, Fib2(num));
//	return 0;
//}