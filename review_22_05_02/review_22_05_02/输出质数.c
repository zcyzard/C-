#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
//���100���ڵ�����
bool is_prime(int n)
{
	int j = 1;
	for (j = 2; j <= sqrt(n); j++)
		if (n % j == 0)
			return false;
	if (j == n)//������
		return true;
}
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
		if (is_prime(i))
			printf("%d ", i);
	return 0;
}
//д�Ĳ���,1�Ȳ�������Ҳ���Ǻ���