#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	return 0;
//}
#include <stdio.h>
////学生
////创建一个结构体类型-struct student表示学生（相当于类）
////struct用于创建类型
//struct student
//{
//	//成员变量
//	char name[20];//学生姓名
//	int age;//年龄
//	char id[20];//学号
//};//记得分号
//int main()
//{
//	int a = 10;
//	//类似上面的用int类型创建变量
//	//结构体类型也可以创建变量
//	struct student s1 = { "林烨彬",20,"3121006844" };
//	//创建一个具体的学生并初始化
//	printf("%s\n", s1.name);//用.访问成员变量
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	//结构体变量.成员名
//	struct student* ps = &s1;//使用指针指向结构体类型变量
//	printf("%s\n", (*ps).name);//解引用是变量本身，然后在用.
//	printf("%s\n", ps->name);//与上面等价
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//将一个整型变量存放在char类型中，首先会截断
//	//00000000000000000000000000000011
//	//截断是保留最后的位数，char是1字节，所以保留后面8位
//	//00000011
//	char b = 127;
//	//00000000000000000000000001111111
//	//截断后：01111111
//	char c = a + b;
//	//相加首先进行整型提升（补char的符号位）
//	//00000011最高位是0，所以整型提升后得到00000000000000000000000000000011
//	//01111111最高位是0，所以整型提升后得到00000000000000000000000001111111
//	//二者相加得到00000000000000000000000010000010
//	//存到char类型，所以会再截断，得到10000010
//	//下面要打印整型，会进行整型提升
//	//此时c最高位是1，提升要补1，得到11111111111111111111111110000010 - 补码
//	//11111111111111111111111110000001 - 反码
//	//10000000000000000000000001111110 - 原码（-126）
//	printf("%d\n", c);//-126
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;//要输入的数
//	int b = 0;//计算10的i次方所用
//	int ret = 0;//最终结果
//	int i = 0;//表示第i+1项
//	int d = 0;
//	printf("请输入一个正整数：");
//	scanf("%d", &a);
//	for (i = 0; i < 5; i++)
//	{
//		int c = 1;
//		for (b = 1; b <= i; b++)
//		{
//			c = c * 10;//10的i次方
//		}
//		d = d + c * a;//第i+1项
//		ret = ret + d;//把第i+1项加入最终结果
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
//#include <stdio.h>
//int to_the_power(int i,int j)
//{
//	//计算某个数i的j次方
//	int k = 0;
//	int ret = 1;
//	for (k = 0; k < j; k++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//int is_narcissus(int i)
//{
//	int j = 1;//数字的位数
//	int k = i;//用于后续计算各个位数的j次方相加
//	int ret = 0;
//	while (i != 0)
//	{
//		if (i / 10 != 0)
//		{
//			j++;//如果除以10不为0就说明还有位数，j+1
//		}
//		i = i / 10;//减少i的位数
//	}
//	while (k != 0)
//	{
//		ret = ret + to_the_power(k % 10, j);//最后一位的j次方
//		k = k / 10;//去掉最后一位
//	}
//	return ret;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100001; i++)
//	{
//		if (is_narcissus(i) == i)
//			printf("%d\n", i);//相等则表示是水仙数
//	}
//	return 0;
//}