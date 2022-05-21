//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdbool.h>
//#define N 10000
////一个数正好等于其所有因子(除去本身）的和，则这个数叫完数，例如6=1+2+3，试着找出1000以内的完数。
//bool is_cmpnum(int n)
//{
//	int i = 0, sum = 0;
//	for (i = 1; i < n; i++)
//		if (n % i == 0)
//			sum += i;
//	if (sum == n)
//		return true;
//	else
//		return false;//bool没有返回值时默认为真
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= N; i++)
//		if (is_cmpnum(i))
//			printf("%d ", i);
//	return 0;
//}