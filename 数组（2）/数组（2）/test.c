#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;//�������������
//	for (i = 0; i < sz - 1; i++)//�������������С��һ
//	{
//		int j = 0;//���Ʊ��˱Ƚϵ�Ԫ��
//		int flag = 1;//����ѭ���ı�־��ȡ1ʱ��ֹ��ȡ0ʱ����
//		for (j = 0; j < sz - 1 - i; j++)//��һ����Ҫj���ӵ�sz-2������������һ��j��Ҫ���ӵ�ֵ��1
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//��ǰ��Ԫ�ش��ں���Ԫ�ص�ʱ�򽻻�˳��
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//����������κ�һ�ν�������ô˵�����������򣬽�flag��Ϊ0������ѭ��
//			}
//		}
//		if (flag == 1)
//		{
//			break;//������е����˵������û���κν�����˵���Ѿ����򣬲��û�����һ��
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 3,1,4,7,8,5,5,7,9,2,10,8,27,26,33,24,90,86,77,100,25,45 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������С
//	int i = 0;
//	bubble_sort(arr, sz);//����
//	for (i = 0; i < sz; i++)//��ӡ����������
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;//������Ԫ��ȫ����ʼ����0
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void reverse(int arr[], int sz)
//{
//	int i = 0;
//	sz = sz - 1;
//	while (i < sz)
//	{
//		//�Ƚ�����һ���͵�����һ��
//		//�ٽ����ڶ����͵����ڶ���
//		//����
//		int tmp = arr[i];
//		arr[i] = arr[sz];
//		arr[sz] = tmp;
//		i++;
//		sz--;
//	}
//}
//int main()
//{
//	int arr[10];
//	int arr2[11] = { 1,3,2,5,4,6,7,8,10,9,2 };
//	init(arr, 10);//������Ԫ��ȫ����ʼ��Ϊ0
//	printf("arr��");
//	print(arr, 10);//��ӡ����Ԫ��
//	printf("\n");
//	printf("arr2: ");
//	print(arr2, 11);//��ӡ����Ԫ��
//	printf("\n");
//	printf("��ת���arr2: ");
//	reverse(arr2, 11);//��ת����Ԫ�ص�˳��
//	print(arr2, 11);//��ӡ��ת֮�������
//	return 0;
//}

#include <stdio.h>
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void swap(int arr1[], int arr2[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		//����˳��
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}
int main()
{
	int A[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int B[10] = { 10,9,8,7,6,5,4,3,2,1 };
	printf("����ǰ��A��");
	print(A, 10);
	printf("\n");
	printf("����ǰ��B��");
	print(B, 10);
	printf("\n");
	swap(A, B, 10);//����Ԫ��
	printf("�������A��");
	print(A, 10);
	printf("\n");
	printf("�������B��");
	print(B, 10);
	printf("\n");
	return 0;
}