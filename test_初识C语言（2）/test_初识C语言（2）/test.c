#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//计算两个数的和
//	//C语言规定，变量要定义在当前代码块最前面
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入数据-使用输入函数scanf
//	scanf("%d%d", &num1, &num2);//&表示取地址，两个变量必须隔一个空格
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{
//	//加上const关键字表示常变量（还是变量，只是具有不可变的常属性）
//	//后面再改变值会报错
//	const int num = 4;
//	printf("%d\n", num);
//	//num = 8;报错，不能改变const常量值
//	printf("%d\n", num);
//	3;//字面常量
//	100;//字面常量
//	//int n = 10;
//	//int arr[n] = { 0 };//错误，数组长度要是常量
//	//const int n = 10;
//	//int arr[n] = { 0 };//仍然错误，说明n是具有常属性的变量
//
//	//#define定义的（标识符）常量
//    #define MAX 10//定义名为MAX，值为10的常量，句末不用加分号
//	int arr[MAX] = { 0 };//MAX是常量，不会报错
//	printf("%d\n", MAX);
//
//	//枚举常量（关键字：enum）
//	//枚举-一一列举
//	//列举所有性别
//	enum Sex
//	{
//		MALE,
//		FEMALE,
//		SECRET
//	};
//	//中括号每一个都是枚举常量，有具体的值
//	enum Sex s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}

//int main()
//{
//	//数据在计算机上存储的时候，存储的是2进制
//	// a-97
//	// A-65
//	// ……
//	//字符串：双引号定义
//	"";//空字符串
//	char arr1[] = "abc";//用字符数组来储存字符串
//	//"abc"--'a' 'b' 'c' '\0'，'\0'是字符串的结束标志
//	char arr2[] = { 'a','b','c'};//没有0，结果跟arr1不一样
//	char arr3[] = { 'a','b','c',0};//有0，结果跟arr1一样
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };//没有'\0'，abc之后是随机字符
//	//strlen-string length（计算字符串长度），计算到'\0'的时候截止
//	printf("%d\n", strlen(arr1));//3
//	//abc之后是随机，什么时候遇到零什么时候截止，所以结果是随机数
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	//\32--32是两个八进制数字，也就是十进制的26，所以\32代表26作为ASCII码值对应的字符
//	printf("%c\n", '\32');
//	//\t是制表符，\32也会转义，下面不会正常打印（遇到\t就空格了）
//	printf("c:\test\32\test.c\n");
//	//在\前面加\，将\表示为普通\，不再转义
//	printf("c:\\test\\32\\test.c");
//	//printf("%c\n", ''');//前面两个单引号被认为是空字符，后面的单引号就导致报错
//	printf("%c\n", '\'');//\'表示字符串引号，可以正常打印
//	//printf("%s\n", """);//类似的错误
//	printf("%s\n", "\"");//类似的解决方法
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	printf("%c\n", '\x61');
//	return 0;
//}

/*
加油
*/

//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？（1/0）>：");
//	scanf("%d", &input);//相当于python的input（）
//	//选择语句
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	//循环语句
//	while (line < 20000)
//	{
//		printf("敲一行代码,%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//		printf("好offer\n");
//	return 0;
//}

////函数
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int a = 100;
//	int b = 200;
//	int sum = 0;
//	//sum = num1 + num2;
//	sum = Add(num1, num2);
//	sum = Add(a, b);9
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整数数字的数组
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	printf("%d\n", arr[4]);//访问第五个元素（下标从0开始），用下标访问
//	char arr1[10];//定义一个存放10个字符的数组
//	float arr2[10];//定义一个存放10个浮点数的数组
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	//<<:左移
//	int b = a << 1;//左移一位，最后一个补零，所以b的值为2
//	printf("%d\n", b);
//	printf("%d\n", a);//a的值不会变
//	b = a << 2;//左移两位，b的值为4
//	printf("%d\n", b);
//	printf("%d\n", a);//a的值不会变
//	return 0;
//}

//int main()
//{
//	//（2进制）位操作
//	//&按位（二进制位，下同）与
//	//|按位或
//	//^按位异或
//	int a = 3;//二进制为011
//	int b = 5;//二进制为101
//	int c = a & b;//011&101，每一位都与一下得到001，所以c的值是1
//	printf("%d\n", c);
//	int d = a | b;//类似可得到d=111=7
//	printf("%d\n", d);
//	int e = a ^ b;//如果二者对应的二进制位相同，则该位为0，否则为1，所以e=110=6
//	printf("%d\n", e);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = 20;//赋值
//	a = a + 10;
//	a += 10;//与上一行等价
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	return 0;
//}

//单目操作符（只有一个操作数）
//双目操作符（2）
//三目操作符（3）
//int main()
//{
//	int a = 10;
//	//C语言中0表示假，其他的数字都表示真
//	//！把真改假，假改真（改完的真假分别为1，0）
//	printf("%d\n", a);
//	printf("%d\n", !a);//单目操作符
//	int b = -2;//符号也是单目操作符
//	int c = -b;
//	int d = 10;
//	//sizeof也是单目操作符，用于计算变量类型所占空间的大小
//	printf("%d\n", sizeof(d));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);//变量名时sizeof的括号可省
//	//printf("%d\n",sizeof int);//变量类型时不能省
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//数组有十个整型变量，所以返回40
//	//数组元素个数=数组所占总空间大小/单个元素所占空间大小
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz=%d\n", sz);
//	return 0;
//}
