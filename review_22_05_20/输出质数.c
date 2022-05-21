//#define _CRT_SECURE_NO_WARNINGS
////输出100以内的质数
////1既不是质数也不是合数
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
//		for (j = 2; j <= sqrt(n); j++)//sqrt()为向下取整
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