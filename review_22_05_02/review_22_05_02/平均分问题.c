#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����3��ѧ��4�ſγɼ����ֱ���ÿ��ѧ����ƽ���ɼ�����ѧ��ÿ�ſε�ƽ���ɼ���
//���гɼ�������һ��4��5�е������У�����ͬһ�����ݼ��ÿո񣬲�ͬ���ûس�
//���һ�к����һ�зֱ��ÿ��ѧ����ƽ���ɼ���ÿ�ſε�ƽ���ɼ����༶��ƽ����
#define N 3
int main()
{
	int i, j;
	float arr[4][5];
	int num = 1;
	float sum;
	for (i = 0; i < 3; i++)//����ÿ��ѧ���ĸ��Ƴɼ���ƽ���ɼ�
	{
		sum = 0;
		printf("�����%d��ѧ�������ġ���ѧ��Ӣ��ͻ�ѧ�ɼ�:", num);
		for (j = 0; j < 4; j++)
		{
			scanf("%f", &arr[i][j]);
			sum += arr[i][j];
		}
		num++;
		arr[i][4] = sum / 4;//ƽ���ɼ�
	}
	for (j = 0; j < 5; j++)//ÿ�ſε�ƽ���ɼ����༶��ƽ����
	{
		sum = 0;
		for (i = 0; i < 3; i++)
			sum += arr[i][j];
		arr[3][j] = sum / 3;
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%.2f  ", arr[i][j]);
		printf("\n");
	}
	return 0;
}