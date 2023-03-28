#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;//控制排序的趟数
//	for (i = 0; i < sz - 1; i++)//总趟数是数组大小减一
//	{
//		int j = 0;//控制本趟比较的元素
//		int flag = 1;//控制循环的标志，取1时终止，取0时继续
//		for (j = 0; j < sz - 1 - i; j++)//第一趟需要j增加到sz-2，后面趟数加一，j需要增加的值减1
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//当前面元素大于后面元素的时候交换顺序
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//如果本趟有任何一次交换，那么说明还不是有序，将flag改为0，继续循环
//			}
//		}
//		if (flag == 1)
//		{
//			break;//如果运行到这里，说明本趟没有任何交换，说明已经有序，不用机内下一趟
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 3,1,4,7,8,5,5,7,9,2,10,8,27,26,33,24,90,86,77,100,25,45 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//求出数组大小
//	int i = 0;
//	bubble_sort(arr, sz);//排序
//	for (i = 0; i < sz; i++)//打印排序后的数组
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
//		arr[i] = 0;//将数组元素全部初始化成0
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
//		//先交换第一个和倒数第一个
//		//再交换第二个和倒数第二个
//		//……
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
//	init(arr, 10);//把数组元素全部初始化为0
//	printf("arr：");
//	print(arr, 10);//打印数组元素
//	printf("\n");
//	printf("arr2: ");
//	print(arr2, 11);//打印数组元素
//	printf("\n");
//	printf("逆转后的arr2: ");
//	reverse(arr2, 11);//逆转数组元素的顺序
//	print(arr2, 11);//打印逆转之后的数组
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
		//交换顺序
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}
int main()
{
	int A[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int B[10] = { 10,9,8,7,6,5,4,3,2,1 };
	printf("交换前的A：");
	print(A, 10);
	printf("\n");
	printf("交换前的B：");
	print(B, 10);
	printf("\n");
	swap(A, B, 10);//交换元素
	printf("交换后的A：");
	print(A, 10);
	printf("\n");
	printf("交换后的B：");
	print(B, 10);
	printf("\n");
	return 0;
}