//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
////求二元一次方程ax^2+bx+c=0的根
//int main()
//{
//	float a, b, c, x1, x2;
//	float m, n;
//	printf("请输入方程的三个系数：");
//	scanf("%f%f%f", &a, &b, &c);
//	if (a == 0 && b == 0)
//		printf("该方程没有根");
//	else if (a == 0)
//		printf("该方程只有一个根，x1=%.2f", -c / b);
//	else
//	{
//		m = b * b - 4 * a * c;
//		n = sqrt(abs(m));
//		if (m == 0)
//			printf("x1=x2=%.2f", -b / (2 * a));
//		else if (m > 0)
//			printf("x1=%.2f\nx2=%.2f", (-b + sqrt(m)) / (2 * a), (-b - sqrt(m)) / (2 * a));
//		else
//			printf("x1=%.2f+%.2fi\nx2=%.2f-%.2fi", -b / (2 * a), n / (2 * a), -b / (2 * a), n / (2 * a));
//	}
//	return 0;
//}