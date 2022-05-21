//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////求1000！的末尾有多少个0？//直接连乘会溢出
//int main()
//{
//	int i, k, count = 0;
//	for (i = 5; i <= 1000; i = i + 5)//穷举5的倍数
//	{
//		k = i;//统计K中包含5的因子的个数
//		while (i % 5 == 0)
//		{
//			count++;
//			k = k / 5;//去掉1个5
//		}
//	}
//	printf("1000！末尾0的个数为：%d", count);
//	return 0;
//}