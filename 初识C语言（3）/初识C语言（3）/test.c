#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max=%d\n", max);
//	//字符串的结束标志：'\0'，‘\0'的ASCII值为0
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr));//计算数组所占内存大小（单位：字节）
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}
//int main()
//{
//	int a = 0;//a是整型，二进制是32个零
//	int b = ~a;//~表示按二进制位取反，所以b二进制是32个1就是2^32-1
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = a++;//后置++，先使用，再++（这里是先把a赋给b然后a再加一）
//	int c = ++a;//前置++，先++，再使用（这里a先加一，然后赋给c）
//	printf("a=%d b=%d,c=%d\n", a, b, c);//12,10,12
//	int d = 10;
//	int e = d--;
//	printf("d=%d,e=%d\n", d, e);//和后置++类似
//	int f = 10;
//	int g = --f;
//	printf("f=%d,g=%d", f, g);//和前置++类似
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;//强制类型转换
//	return 0;
//}

//int main()
//{
//	//0--假
//	//非零--真
//	//&&--逻辑与
//	//||--逻辑或
//	int a = 3;//真
//	int b = 5;//真
//	int c = a && b;//真
//	printf("c=%d\n", c);//值为1
//	printf("c=%d\n", a && 0);//假，值为0
//	int d = a || 0;//有一个为真就为真，值为1
//	printf("d=%d 假=%d\n", d,0||0);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("max=%d\n", max);
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4];//[]-下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()-函数调用操作符
//	return 0;
//}

//int main()
//{
//	register int a = 10;//建议把a定义成寄存器变量
//	return 0;
//}
//int main()
//{
//	//typedef - 类型定义 - 类型重定义（给类型重新起名）
//	typedef unsigned int u_int;//把unsigned int重命名为u_int
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}

////static修饰局部变量
////局部变量的生命周期变长
//void test()
//{
//	static int a = 1;//a是一个静态的局部变量，保留上一次调用函数的值并且不会重新赋值
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

////static修饰全局变量
////改变了变量的作用域-让静态的全局变量只能在自己所在的源文件内部使用
//int main()
//{
//	//extern-声明外部符号
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}


////声明外部函数
////粗略理解：static修饰函数改变了函数作用域
////函数具有外部链接属性，可以使用extern声明其他源文件的函数
////加上static之后外部链接属性变成内部，无法再用extern
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}


//#define MAX 100
//int main()
//{
//	int a = 100;
//	int b = MAX;
//	printf("a=%d b=%d", a, b);
//	return 0;
//}

////宏的定义
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	//max = (a>b?a:b)
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 10;//向内存申请4个字节
//	int* p = &a;//取地址，p即为指针变量的名字
//	//有一种变量是用来存放地址的-指针变量
//	printf("%p\n", p);
//	printf("%p\n", &a);
//	*p = 20;//*-解引用操作符，此处*p即代表a，这句代码把a的值变为20
//	printf("a=%d\n", a);
//	return 0;
//}

int main()
{
	char ch = 'w';
	char* pc = &ch;//存放字符类型数据的地址用字符型指针
	*pc = 'a';//同上
	printf("%c\n", ch);//a
	printf("%d\n", sizeof(pc));//指针存放地址，64位中地址是64个2进制序列，所以这里指针的大小是8个字节
	return 0;
}

