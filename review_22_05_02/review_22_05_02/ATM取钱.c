#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//最多输入三次密码，若成功则登陆，若失败则退出程序
int main()
{
	int input;
	int i;
	for (i = 1; i <= 3; i++)
	{
		printf("请输入密码：");
		scanf("%d", &input);
		if (input == 123456)
		{
			printf("登陆成功\n");
			break;
		}
		else
			if (i <= 2)
				printf("密码错误\n");
	}
	if (i > 3)
		printf("密码错误过多，请5min后再试");
	return 0;
}