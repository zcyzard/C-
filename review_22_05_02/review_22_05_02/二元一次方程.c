#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//���Ԫһ�η���ax^2+bx+c=0�ĸ�
int main()
{
	float a, b, c;
	printf("�����뷽�̵�����������");
	scanf("%f%f%f", &a, &b, &c);
	if (a == 0 && b == 0)
		printf("�÷����޸�");
	else if(a==0)
		printf("�÷���ֻ��һ������x1=%.2f",-c/b);
	else
	{
		float m= b * b - 4 * a * c;//�����
		if (m > 0)
			printf("x1 = % .2f\nx2 = % .2f", (-b + sqrt(abs(m)) )/ (2 * a), (-b - sqrt(abs(m))) / (2 * a));
		else if (m == 0)
			printf("x1=x2=%.2f", -b / (2 * a));
		else
		{
			printf("x1=%.2f+%.2fi\nx2=%.2f-%.2fi", -b / (2 * a), sqrt(abs(m)) / (a * 2), -b / (2 * a), (sqrt(abs(m))) / (a * 2));
		}
	}
	return 0;
}