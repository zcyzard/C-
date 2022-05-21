#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
//演示多个字符从两端向中间汇聚
int main()
{
	char arr1[20] = "Windows 98!!!!";
	char arr2[20] = "##############";
	int left = 0;
	int right = strlen(arr1) - 1;//字符串后面默认有“\0”,strlen()不计入,而sizeof()计入
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//休息一秒
		system("cls");//清空屏幕
		left++;
		right--;
	}
	printf("%s", arr2);
		return 0;
}