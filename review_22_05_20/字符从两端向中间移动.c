//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<windows.h>
////演示多个字符从两端向中间汇聚
//int main()
//{
//	char ch1[20] = "#############";
//	char ch2[20] = "Windows 98!!!";
//	int sz = strlen(ch1);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		ch1[left] = ch2[left];
//		ch1[right] = ch2[right];
//		printf("%s\n", ch1);//为什么不用%c？
//		Sleep(1000);
//		//system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//}