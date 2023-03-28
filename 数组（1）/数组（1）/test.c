#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int arr1[10] = { 1,2,3 };//创建数组并初始化
//	char arr2[5] = { 'a','b' };//不完全初始化
//	char arr3[5] = "ab";//不完全初始化
//	char arr4[5] = { 'a',98 };//相当于用整数初始化字符变量
//	char arr5[] = "abcdef";//不指定数组大小必须初始化并且会根据初始化自动给定大小
//	char arr6[7];//指定了大小的数组可以先不初始化
//	printf("%d\n", sizeof(arr5));//计算数组所占内存大小，7
//	printf("%d\n", strlen(arr5));//计算字符串长度，6
//	//不完全初始化剩下的元素默认为零或者0对应的ASCII值
//	//int n = 5;不能用变量创建数组
//	//char ch[n];
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//数组中放四个字符：'a','b','c','\0'
//	char arr2[] = { 'a','b','c' };//三个：'a','b','c'
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//4
//	printf("%d\n", strlen(arr2));//随机数（遇不到\0），不能准确停止
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
//	//通过下标访问数组元素，下标从零开始
//	printf("%c\n", arr[3]);//打印下标为3的字符（d）
//	int i = 0;
//	int len = strlen(arr);//strlen返回无符号整型，先在这里赋值给整型比较好
//	for (i = 0; i < len; i++)
//	{
//		printf("%c", arr[i]);//通过循环打印字符串
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//要打印的元素个数，这里是数组长度
//	//不能用这种方法算字符型数组（因为最后有一个\0不需要打印）
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]%p\n", i, &arr[i]);
//		//数组在内存中连续存放，一个地址大小一个字节，
//		//int数据是四字节，所以相邻元素地址差4
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5 };
//	//二维数组不完全初始化先放第一行（从左到右）
//	//然后再依次放其他行
//	int arr1[3][4] = { {1,2,3},{4,5} };
//	//把二维数组每一行当成一个一维数组，{}分行，{}内从左到右填
//	int arr2[][5] = { {1,2,3,4},{1,23,4} };
//	int arr3[][5] = { 1,2,3,4,5,6 };
//	//二维数组无论如何都不能省略列，省略行之后会按照{}分行初始化
//	//也会按照顺序排入数组
//	return 0;
//}

