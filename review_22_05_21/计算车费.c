//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////<3km为10元,3≤h<8每千米1.6元(不足1km按1km算),≥8每千米2.2元(不足1km按1km算)
//float func(float n)
//{
//	float rmb = 0;
//	if (n < 3)
//		return 10;
//	else if (n < 8)
//	{
//		if (n == (int)n)
//			return (n - 3) * 1.6 + 10;
//		else
//			return (int)(n - 2) * 1.6 + 10;
//	}
//	else
//	{
//		if (n == (int)n)
//			return (n - 8) * 2.2 + 10 + 5 * 1.6;
//		else
//			return (int)(n - 7) * 2.2 + 10 + 5 * 1.6;
//	}
//}
//int main()
//{
//	float distance;
//	printf("请输入里程：");
//	scanf("%f", &distance);
//	printf("车费为：%.2f", func(distance));
//	return 0;
//}