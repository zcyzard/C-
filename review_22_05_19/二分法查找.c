//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////#include<string.h>
////���ö��ַ����������е�Ԫ��,���ַ�ֻ��������������ʹ��
//#define N 5
//int main()
//{
//	int i, n, left, right, mid, length;
//	int arr[N];
//	printf("������%d�������������", N);
//	for (i = 0; i < N; i++)
//		scanf("%d", &arr[i]);
//	//length = strlen(arr);  strlenֻ��������ȡ�ַ�������
//	length = sizeof(arr) / sizeof(arr[0]);
//	left = 0;
//	right = length - 1;
//	printf("������Ҫ���ҵ�����");
//	scanf("%d", &n);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (n == arr[mid])
//		{
//			printf("%d���±�Ϊ��%d", n, mid);
//			break;
//		}
//		else if (n < arr[mid])
//			right = mid - 1;
//		else
//			left = mid + 1;
//	}
//	if (left > right)
//		printf("������û�����Ԫ��");
//	return 0;
//}