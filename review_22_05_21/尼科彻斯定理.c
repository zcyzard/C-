//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////验证尼科彻斯定理，即：任何一个整数m的立方都可以写成m个连续奇数之和。
//int main()
//{
//	int num, i, j, sum;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	int cube = num * num * num;
//	if (num == 1)
//		printf("%d*%d*%d=1", num, num, num);
//	else
//	{
//		for (i = 1; i < cube; i = i + 2)
//		{
//			sum = 0;
//			int count = 0;
//			for (j = i; j < cube; j = j + 2)
//			{
//				sum += j;
//				count++;
//				if (count == num)
//					break;
//			}
//			if (sum == cube)
//			{
//				count = 0;
//				printf("%d*%d*%d=", num, num, num);
//				for (j = i; i < cube; j = j + 2)
//				{
//					count++;
//					if (count < num)
//						printf("%d+", j);
//					else
//						printf("%d", j);
//					if (count == num)
//						break;
//				}
//			}
//		}
//	}
//	return 0;
//}