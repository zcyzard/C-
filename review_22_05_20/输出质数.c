//#define _CRT_SECURE_NO_WARNINGS
////���100���ڵ�����
////1�Ȳ�������Ҳ���Ǻ���
//#include<stdio.h>
//#include<math.h>
//#include<stdbool.h>
//#define N 100
////int main()
////{
////	int i, j, count = 0;
////	for (i = 1; i <= N; i++)
////	{
////		for (j = 2; j < i; j++)
////			if (i % j == 0)
////				break;
////		if (j == i)
////		{
////			count++;
////			printf("%d ", j);
////		}
////	}
////	printf("\ncount = %d", count);
////	return 0;
////}
//bool is_prime(int n)
//{
//	int j = 1;
//	if (n == 1)
//		return false;
//	else
//	{
//		for (j = 2; j <= sqrt(n); j++)//sqrt()Ϊ����ȡ��
//			if (n % j == 0)
//				return false;
//		if (j == n)
//			return true;
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= N; i++)
//		if (is_prime(i))
//			printf("%d ", i);
//	return 0;
//}