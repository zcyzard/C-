//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////��һͷĸţ����ÿ�������һͷСĸţ��ÿͷСĸţ�ӵ��ĸ���ͷ��ʼ��ÿ�����Ҳ��һͷСĸţ������ʵ���ڵ�n���ʱ�򣬹��ж���ͷĸţ��
////���  1   2   3   4    5    6   7    8
////����  2   3   4   6    9    13  18   24
////��n<=3ʱ��f(n)=n+1;��n>3ʱ��f(n)=f(n-1)+n-2
//int fib(int n)
//{
//	if (n <= 3)
//		return n + 1;
//	else
//		return fib(n - 1) + n - 2;
//}
//int main()
//{
//	int year;
//	printf("������Ҫ��ѯ����ݣ�");
//	scanf("%d", &year);
//	printf("��%d���ĸţ��ĿΪ��%d", year, fib(year));
//	return 0;
//}