//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
////���Ԫһ�η���ax^2+bx+c=0�ĸ�
//int main()
//{
//	float a, b, c, x1, x2;
//	float m, n;
//	printf("�����뷽�̵�����ϵ����");
//	scanf("%f%f%f", &a, &b, &c);
//	if (a == 0 && b == 0)
//		printf("�÷���û�и�");
//	else if (a == 0)
//		printf("�÷���ֻ��һ������x1=%.2f", -c / b);
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