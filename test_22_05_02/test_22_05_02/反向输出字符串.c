#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//反向输出字符串windows
	char str[20];
	printf("请输入一组字符串：");
	scanf("%s", str);
	printf("正向字符串为：");
	for (int i = 0; i < strlen(str); i++)
		printf("%c", str[i]);
	printf("\n反向字符串为：");
	for (int i = strlen(str) - 1; i >= 0; i--)
		printf("%c", str[i]);
}