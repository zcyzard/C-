#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//输入3名学生4门课成绩，分别求每个学生的平均成绩所有学生每门课的平均成绩，
//所有成绩均放入一个4行5列的数组中，输入同一人数据间用空格，不同人用回车
//最后一列和最后一行分别放每个学生的平均成绩、每门课的平均成绩及班级总平均分
#define N 3
int main()
{
	int i = 0;
	int j = 0;
	int num = 1;
	float arr[4][5];
	for (i = 0; i < 3; i++) //输入每个学生的各科成绩及平均成绩
	{
		printf("输入第%d个学生的语文、数学、英语和化学成绩:", num);
		//arr表示的是地址，arr[i][j]表示的是值，下面两行可以用循环写
		scanf("%f %f %f %f", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3]);
		arr[i][4] = (arr[i][0] + arr[i][1] + arr[i][2] + arr[i][3]) / 4;
		num++;
	}
	for (j = 0; j < 5; j++)//每门课的平均成绩
		arr[3][j] = (arr[0][j] + arr[1][j] + arr[2][j]) / 3;//可以换成循环
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%.2f  ", arr[i][j]);
		printf("\n");
	}
	return 0;
}