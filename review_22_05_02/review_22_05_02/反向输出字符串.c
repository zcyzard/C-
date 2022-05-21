#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<string.h>
int main()
{
	//反向输出"Windows 98"
	char str[] = "Windows 98";
	int i;
	int sz = strlen(str);
	for (i = 0; i < sz; i++)
		printf("%c", str[i]);//%c对应char型,%s对应char*型
	printf("\n");
	for (i = sz - 1; i >= 0; i--)
		printf("%c", str[i]);
	return 0;
}