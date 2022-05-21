//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////输入3名学生4门课成绩，分别求每个学生的平均成绩所有学生每门课的平均成绩，
////所有成绩均放入一个4行5列的数组中，输入同一人数据间用空格，不同人用回车
////最后一列和最后一行分别放每个学生的平均成绩、每门课的平均成绩及班级总平均分
//#define N 3
//int main()
//{
//	int i, j;
//	float sum, arr[4][5];
//	for (i = 0; i < 3; i++)
//	{
//		sum = 0;
//		printf("请输入第%d个学生的语文、数学、英语和化学成绩:", i + 1);
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%f", &arr[i][j]);
//			sum += arr[i][j];
//		}
//		arr[i][4] = sum / 4;//计算每个学生的平均成绩
//		printf("\n");
//	}
//	for (j = 0; j < 5; j++)//计算每门课的平均成绩和班级总平均分
//	{
//		sum = 0;
//		for (i = 0; i < 3; i++)
//			sum += arr[i][0];
//		arr[3][j] = sum / 3;
//	}
//	//遍历数组
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 5; j++)
//			printf("%.2f ", arr[i][j]);
//		printf("\n");
//	}
//	return 0;
//}