#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//���ö��ַ����������е�Ԫ��,���ַ�ֻ��������������ʹ��
int main()
{
	int n = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,12,45,71,445 };
	printf("������Ҫ���ҵ�����");
	scanf("%d", &n);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > n)	
			right = mid - 1;
		else if (arr[mid] < n)
			left = mid + 1;
		else
		{
			printf("%d�������е�λ��Ϊ��%d", n, mid);
			break;
		}
	}
	if (left > right)
		printf("Ҫ���ҵ����ܵ�������ȥ��");
	return 0;
}