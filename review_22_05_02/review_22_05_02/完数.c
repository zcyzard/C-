#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 1000
//һ�������õ�������������(��ȥ�����ĺͣ��������������������6=1+2+3�������ҳ�1000���ڵ�������
int main()
{
	for (int i = 1; i <= N; i++)
	{
		int sum = 0;
		for (int j = 1; j < i; j++)//������i/2+1������i
		{
			if (i % j == 0)
				sum += j;
		}
		if (i == sum)
			printf("%d ", i);
	}
	return 0;
}