#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��д����ʵ��������n��Ԫ�شӴ�С���У���main()�����벢���
#define N 3
void func(int* arr, int n)//int* arrҲ�����滻��int arr[],�����������˷ѿռ�
{
	int max;
	/*int sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz=%d\n", sz);*/
	//Ϊʲôsz=2��
	for (int i = 0; i < n - 1; i++)
	{
		//max���������ﶨ�塢��ʼ��
		for (int j = i + 1; j < n; j++)
			if (arr[i] < arr[j])
			{
				max = arr[j];
				arr[j] = arr[i];
				arr[i] = max;
			}
	}
}
int main()
{
	int i, arr[N];
	printf("������%d��������", N);
	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	printf("ԭ����Ϊ��\n");
	for (i = 0; i < N; i++)
		printf("%d ", arr[i]);
	printf("\n������Ϊ��\n");
	func(arr, N);
	for (i = 0; i < N; i++)
		printf("%d ", arr[i]);
	return 0;
}