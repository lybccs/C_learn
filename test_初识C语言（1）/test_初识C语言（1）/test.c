//#include <stdio.h>
//包含一个叫stdio.h的文件
//std-标准standard input output
//#include <stdio.h>
////int是整型的意思
////main前面的int表示main函数调用返回一个整型值
////也可以改成void main但是这种写法过时了，不用
//int main()  //主函数-代码开始执行的地方-程序的入口
//{
//	//printf是库函数，使用的话要引入库：#include <std.h>
//	//程序从这里开始
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	return 0;//返回 0
//}

#include <stdio.h>
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}
//char-字符类型
//int main()
//{
//	//char - 字符型
//	//char ch = 'A';// 申请内存
//	//printf("%c\n", ch); //打印字符格式的数据
//	//short-短整型
//	//int-整型
//	int age = 20;  //申请整型数据内存
//	printf("%d\n", age);  //等价于printf("20\n");
//	//long 长整型
//	long num = 100;
//	printf("%d\n", num);
//	float f = 5.0;
//	printf("%f\n", f);
//	double d = 3.14;
//	printf("%lf\n", d);
//	return 0;
//}

//int main()
//{
//	short age = 20;//减少内存占用（age一般不会那么大）
//	printf("%d\n", age);
//	//打印各种数据所占用内存，用%d是因为内存是整数
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//int main()
//{
//	short age = 20;//向内存申请两个字节
//	float weight = 95.6;
//	return 0;
//}

//int mum2 = 20;//全局变量：定义在代码块之外
//int main()
//{
//	int num1 = 10;//局部变量：定义在代码块之内
//	return 0;
//}

//int a = 100;//全局变量：定义在代码块之外，任何地方都可以使用
//int main()
//{
//	{
//		int a = 5;//只能在括号内使用，其他地方如果没有重定义a又使用就报错
//	}
//	int a = 10; //局部变量：定义在代码块之内,只能在代码块之内使用
//	//局部变量和全局变量的名字建议不要相同，相同容易误会，产生bug
//	//同名时局部变量优先
//	printf("%d\n", a);
//	return 0;
//}

int main()
{
	//计算两个数的和
	//C语言规定，变量要定义在当前代码块最前面
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//输入数据-使用输入函数scanf
	scanf("%d%d", &num1, &num2);//&表示取地址，两个变量必须隔一个空格
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}
//
//int global = 2020;//全局变量，作用域是整个工程
//void test()
//{
//	printf("test()= %d\n", global);//全局变量也可以在函数定义中使用
//}
//int main()
//{
//	//在另一个文件中定义的变量要用extern声明一下再使用
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	test();//作用域内
//	printf("global = %d\n", global);//作用域内，可以使用
//	int num2 = 2;
//	{
//		int num = 0;
//		printf("num = %d\n", num);//在作用域内，可以使用
//		printf("num2 = %d\n", num2);//在作用域内，可以使用
//	}
//	//printf("num = %d\n", num);//在作用域外，不能使用
//	printf("num2 = %d\n", num2);//在作用域内，不能使用
//	return 0;
//}