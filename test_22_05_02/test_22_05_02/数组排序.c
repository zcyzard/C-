#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��д����ʵ��������n��Ԫ�شӴ�С���У���main()�����벢���
void func(int* x, int n)
{
	int tmp = 0;
	//int max = 0;
	for (int i = 0; i < n - 1; i++)//��Ҫ�Ƚϵ�����
	{
		//max = x[i];
		//������ôд������ÿһ����ɺ�max��ֵ���ᱻ��һ�ָ���
		for (int j = i + 1; j < n; j++)//ÿһ����Ҫ�ȽϵĴ���
			if (x[i] < x[j])
			{
				tmp = x[j];
				x[j] = x[i];
				x[i] = tmp;
			}
	}
}
#define N  5
int main()
{
	int arr[N];
	printf("������%d��������", N);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	printf("ԭ����Ϊ��\n");
	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	func(arr, N);
	printf("\n������Ϊ��\n");
	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	return 0;
}