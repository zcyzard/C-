#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����1/1-1/2+1/3-1/4+...+11/9-1/100��ֵ����ӡ�����
int main()
{
	int i;
	float sign = 1;
	float sum = 0;
	for (i = 1; i <= 100; i++)
	{
		sum += sign / i;
		sign = -sign;
	}
	printf("1/1-1/2+1/3-1/4+...+11/9-1/100�ĺ�Ϊ��\n%.2f", sum);
	return 0;
}