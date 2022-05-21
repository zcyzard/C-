//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////判断一个数是否为"水仙花数"，所谓"水仙花数"是指这样的一个数：首先是一个三位数，其次，其各位数字的立方和等于该数本身。
////例如：371是一个"水仙花数"，371=3^3+7^3+1^3.
//int main()
//{
//	int num, i, a, sum = 0;
//	printf("请输入一个三位正整数：");
//	scanf("%d", &num);
//	if (num >= 100 && num <= 999)
//	{
//		int tmp = num;
//		for (i = 1; i <= 3; i++)
//		{
//			a = num % 10;
//			num = num / 10;
//			sum += a * a * a;
//		}
//		if (sum == tmp)
//			printf("水仙花数：%d ", tmp);
//		else
//			printf("%d不是水仙花数", tmp);
//	}
//	else
//		printf("输入不符合规定，请重新输入");
//	return 0;
//}