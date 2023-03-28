#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "###########";
//	strcpy(arr2,arr1);//把arr1字符串的内容复制到arr2里面（会把'\0'也复制过去）
//	printf("%s\n", arr2);
//	//strcpy-string copy-字符串拷贝
//	//strlrn-string length-字符串长度有关
//
//	return 0;
//}



////memset
////memory - 内存 set-设置
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//把第一个参数（指针存放地址）的前5个字节替换成'*'
//	printf("%s\n", arr);//***** world
//	return 0;
//}


//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的使用
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	max = get_max(100, 300);//也可以这样调用
//	printf("max=%d\n", max);
//	return 0;
//}


//void Swap(int x,int y)
//{	//这样不能实现交换（注意作用域）
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}

//void Swap1(int* pa, int* pb)
//{	//参数类型选为指针，利用解引用修改a和b的值
//	//解引用表示地址存放的数据，进行操作会修改数据的值
//	int tmp = 0;
//	tmp = *pb;//将b的赋给tmp
//	*pb = *pa;//将b的值修改为a的值（pb存放的是b的地址，用*pb会修改b的值）
//	*pa = tmp;//将a的值修改为tmp
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	int tmp = 0;
//	Swap1(&a, &b);//传的是地址
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//#include <math.h>//sqrt()所在头文件
////是素数返回1，不是素数返回0
//int is_prime(int x)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//			return 0;//如果有一个2<=i<根号x能整除x，则x不是素数，返回0
//	}
//	return 1;//如果运行到这里，说明对任意的2<=i<根号x，i都不能整除x，所以x是素数，返回1
//}
//int main()
//{
//	//打印100-200之间的素数
//	int j = 100;
//	for (j = 100; j <= 200; j++)
//	{
//		if (is_prime(j) == 1)
//			printf("%d\n", j);
//	}
//	return 0;
//}


//is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;//闰年返回1
//	}
//	else
//		return 0;//不是闰年返回0
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		if (is_leap_year(year)==1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

////虽然写了数组形参，但是传递的是地址（数组名代表首元素地址），所以arr是指针
//int binary_search(int arr[], int k, int sz)
//{
//	//算法的实现
//	//先给出左右下标
//	int left = 0;
//	int right = sz - 1;
//	int mid = (left + right) / 2;//中间元素的下标
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)//可以用索引但是不能用sizeof算数组长度
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//运行到这里说明元素不在数组中
//}
//int main()
//{
//	//利用二分法查找有序数组
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//在主函数算数组元素个数再传给算法函数
//	int ret = binary_search(arr,k,sz);//调用实现算法的函数
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//	return 0;
//}

//void Add(int* p)
//{
//	//每次调用都让num增加1
//	(*p)++;//++优先级比较高，所以要用括号把*p括起来
//}
//int main()
//{
//	int num = 1;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}

//函数嵌套调用：在一个函数内调用另一个函数

//链式访问：把一个函数的返回值作为另一个函数的参数
//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));//把strlen的返回值作为printf的参数
//	return 0;
//}

//
//int mian()
//{
//	//调用printf的时候首先打印，然后返回打印的字符数
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	return 0;
//}

//编译是从上往下编译
//所以如果函数定义放在最后面，要先声明
//否则编译到函数调用的时候会认为是未声明标识符

//#include "add.h"//引入自己写的头文件，可以不用在这个源文件中定义和声明函数
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);//函数调用
//	printf("%d\n", sum);
//	return 0;
//}
//
//#include <stdio.h>
//#include <math.h>
//int is_prime(int i)
//{
//	//是素数返回1，不是素数返回0
//	int j = 1;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//int is_leap_year(int x)
//{
//	//是闰年返回1，不是闰年返回0
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 1000;
//	if (is_leap_year == 1)
//	{
//		printf("%d是闰年", year);
//	}
//	else
//		printf("%d不是闰年", year);
//	return 0;
//}

//#include <stdio.h>
//void swap(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//void multiplication_table(int x)
//{
//	int i = 0;
//	int j = 0;
//	int ret = 0;
//	for (i = 1; i <= x; i++)
//	{
//		for (j = 1; j <= x; j++)
//		{
//			ret = i * j;
//			printf("%d ",ret);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 9;
//	printf("请输入一个整数：");
//	scanf("%d", &a);
//	multiplication_table(a);
//	return 0;
//}