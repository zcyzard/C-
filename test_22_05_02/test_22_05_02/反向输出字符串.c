#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//��������ַ���windows
	char str[20];
	printf("������һ���ַ�����");
	scanf("%s", str);
	printf("�����ַ���Ϊ��");
	for (int i = 0; i < strlen(str); i++)
		printf("%c", str[i]);
	printf("\n�����ַ���Ϊ��");
	for (int i = strlen(str) - 1; i >= 0; i--)
		printf("%c", str[i]);
}