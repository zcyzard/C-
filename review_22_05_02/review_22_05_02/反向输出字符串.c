#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<string.h>
int main()
{
	//�������"Windows 98"
	char str[] = "Windows 98";
	int i;
	int sz = strlen(str);
	for (i = 0; i < sz; i++)
		printf("%c", str[i]);//%c��Ӧchar��,%s��Ӧchar*��
	printf("\n");
	for (i = sz - 1; i >= 0; i--)
		printf("%c", str[i]);
	return 0;
}