#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��������������룬���ɹ����½����ʧ�����˳�����
int main()
{
	int input;
	int i;
	for (i = 1; i <= 3; i++)
	{
		printf("���������룺");
		scanf("%d", &input);
		if (input == 123456)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
			if (i <= 2)
				printf("�������\n");
	}
	if (i > 3)
		printf("���������࣬��5min������");
	return 0;
}