#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
//��ʾ����ַ����������м���
int main()
{
	char arr1[20] = "Windows 98!!!!";
	char arr2[20] = "##############";
	int left = 0;
	int right = strlen(arr1) - 1;//�ַ�������Ĭ���С�\0��,strlen()������,��sizeof()����
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//��Ϣһ��
		system("cls");//�����Ļ
		left++;
		right--;
	}
	printf("%s", arr2);
		return 0;
}