//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////������ͬ����Ȼ��A��B���������A��ȫ������(����1��������A����)֮�͵���B��
////������B��ȫ������(����1��������B����)֮�͵���A��������A��B��Ϊ����������3000���ڵ�ȫ��������
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