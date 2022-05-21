//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////两个不同的自然数A和B，如果整数A的全部因子(包括1，不包括A本身)之和等于B；
////且整数B的全部因子(包括1，不包括B本身)之和等于A，则将整数A和B称为亲密数。求3000以内的全部亲密数
//#define N 3000
//void solve()
//{
//	int i, j;
//	int sum1, sum2;
//	for (i = 1; i <= N; i++)
//	{
//		sum1 = 0;
//		for (j = 1; j < i; j++)
//			if (i % j == 0)
//				sum1 += j;
//		sum2 = 0;
//		for (j = 1; j < sum1; j++)
//			if (sum1 % j == 0)
//				sum2 += j;
//		if (i == sum2 && i < sum1)
//			printf("(%d,%d)\n", i, sum1);
//	}
//}
//int main()
//{
//	solve();
//	return 0;
//}