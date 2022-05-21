//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//////创建变量
////void func(int* num1, int* num2)
////{
////	int tmp;
////	tmp = *num1;
////	*num1 = *num2;
////	*num2 = tmp;
////}
////int main()
////{
////	int a, b;
////	printf("请输入两个数：");
////	scanf("%d%d", &a, &b);
////	printf("交换前：\n");
////	printf("a = %d\nb = %d", a, b);
////	func(&a, &b);
////	printf("\n交换后：\n");
////	printf("a = %d\nb = %d", a, b);
////	return 0;
////}
//
////不创建变量
//int main()
//{
//	int a, b;
//	printf("请输入两个数：");
//	scanf("%d%d", &a, &b);
//	printf("交换前：\n");
//	printf("a = %d\nb = %d", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("\n交换后：\n");
//	printf("a = %d\nb = %d", a, b);
//	return 0;
//}