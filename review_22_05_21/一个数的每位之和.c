//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//////�������һ��������������ÿλ����֮��
//
//////ѭ��ʵ��
////int func(int n)
////{
////	int sum = 0, a;
////	if (n <= 9)
////		return n;
////	else
////		while (n)
////		{
////			a = n % 10;
////			n = n / 10;
////			sum += a;
////		}
////	return sum;
////}
//
//////�ݹ�ʵ��
//int func(int n)
//{
//	if (n > 9)
//		return func(n / 10) + n % 10;
//	return n;
//}
//int main()
//{
//	int num;
//	printf("������һ����������");
//	scanf("%d", &num);
//	printf("%d��ÿλ֮��Ϊ��%d", num, func(num));
//	return 0;
//}