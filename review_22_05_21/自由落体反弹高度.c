//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////小球从100m处自由落体，反弹后跳回原高度的一半，求第十次落到地面时总共经历了多少米？第十次反弹多少米？
//int main()
//{
//	int i;
//	float  sum = 0, nsum, h = 100;
//	for (i = 1; i <= 10; i++)
//	{
//		sum += h;
//		h = h / 2;
//		if (i < 10)//将从空中落地到回到空中视为一轮
//			sum += h;
//		if (i == 9)
//			nsum = sum;
//	}
//	printf("第十次落回地面总共经历%f米\n第十次反弹%f米", sum, (sum - nsum) / 2);
//	return 0;
//}