//#define _CRT_SECURE_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////��ŵ������
////������  1  2  3   4   5   6
////������  1  3  7  15  31  63
////f(n)=2^n-1
//int func(int n)
//{
//	int i = 1, result = 1, k = 2;
//	for (i = 1; i <= n; i++)
//		result *= k;
//	return result - 1;
//}
//int fib(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return 2 * fib(n - 1) + 1;
//}
//int main()
//{
//	int num1, num2, input;
//	printf("���������ӵ���Ŀ��");
//	scanf("%d", &input);
//	num1 = func(input);
//	num2 = fib(input);
//	printf("�ú�ŵ����Ҫ�Ĳ�����ĿΪ��%d\n", num1);
//	printf("�ú�ŵ����Ҫ�Ĳ�����ĿΪ��%d\n", num2);
//	return 0;
//}