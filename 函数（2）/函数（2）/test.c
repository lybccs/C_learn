#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//void print(int x)
//{
//	if (x > 9)
//	{
//		//当x>9即x有两位以上时，
//		//递归调用print拆解成打印前n-1位组成数字和第n个数字
//		print(x / 10);
//	}
//	printf("%d ", x % 10);//打印第n个数字
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//递归
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	print(num);
//	return 0;
//}


////递归求字符串长度
//int my_strlen(char* x)
//{
//	//如果还没有数到空字符，就返回1+后n-1个字符串的长度
//	if (*x != '\0')
//	{
//		//x＋1表示指针所指地址＋1，而x指向的是首元素地址
//		//所以可以做到“缩短”字符串
//		return 1 + my_strlen(x + 1);
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	//my_strlen(bit)
//	//my_strlen(it)+1
//	//my_strlen(t)+1+1
//	//my_strlen(\0)+1+1+1
//	int len = my_strlen(arr);
//	printf("len=%d", len);
//	return 0;
//}
//递归计算量大，算得慢
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	//n>2的时候才需要这样算
//	while (n > 2)
//	{
//		//将结果往前推一位并修改前两个数
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//	//如果进入while，c就是所求值，如果没进，c=1也是正确的
//
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret=%d", ret);
//}

//void test(int n)
//{
//	if (n < 10000)
//		test(n + 1);
//}
//int main()
//{
//	test(1);
//	return 0;
//}

//void move(char x, char y)
//{
//	printf("%c -> %c\n", x, y);
//}
//void hanoi(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		move(a, c);//将A柱的一个盘子移到C柱
//	}
//	else
//	{
//		hanoi(n - 1, a, c, b);//先将A上n-1个盘子借助C移到B
//		move(a, c);//将A上的一个盘子移到C
//		hanoi(n - 1, b, a, c);//将B剩余n-1个盘子借助A移到C
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入A柱上的盘子数：");
//	scanf("%d", &n);
//	printf("移动方案：\n");
//	hanoi(n, 'A', 'B', 'C');
//	return 0;
//}

//int Fib(int x)
//{
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	if (x == 1)
//	{
//		return a;
//	}
//	else if (x == 2)
//	{
//		return b;
//	}
//	else
//	{
//		while (x > 2)
//		{
//			c = a + b;//将c推进一位
//			/*将a和b推进一位*/
//			a = b;
//			b = c;
//			x--;//
//		}
//		return c;//返回最终结果
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("请输入需要跳的台阶数：");
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("一共有%d种跳法。", ret);
//	return 0;
//}

//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//#include <stdio.h>
//int factorial_1(int x)
//{
//	int ret = 1;
//	int i = 1;
//	while (i <= x)
//	{
//		ret = ret * i;
//		i++;
//	}
//	return ret;
//}
//int factorial_2(int x)
//{
//	if (x == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return x * factorial_2(x - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret1 = 0;//接收非递归的阶乘
//	int ret2 = 0;//接收递归的阶乘
//	printf("请输入一个整数：");
//	scanf("%d", &n);
//	ret1 = factorial_1(n);
//	printf("非递归法求出%d的阶乘为：%d\n", n, ret1);
//	ret2 = factorial_2(n);
//	printf("递归法求出%d的阶乘为：%d\n", n, ret2);
//	return 0;
//}

#include <stdio.h>
//int strlen_1(char* str)
//{
//	//使用非递归求解
//	int i = 0;//用于记录当前长度
//	while (*str != '\0')
//	{
//		i = i + 1;
//		str++;
//	}
//	return i;
//}
//int strlen_2(char* str)
//{
//	//使用递归求解
//	if (*str != '\0')
//	{
//		return 1 + strlen(str + 1);
//	}
//	return 0;
//}
//int main()
//{
//	char str[200000] = {'0'};
//	int len_1 = 0;//接收非递归
//	int len_2 = 0;//接收递归
//	printf("请输入一个字符串：");
//	scanf("%s", str);
//	len_1 = strlen_1(str);
//	len_2 = strlen_2(str);
//	printf("非递归法求得的长度为：%d\n", len_1);
//	printf("递归法求得的长度为：%d\n", len_2);
//	return 0;
//}

//
//#include <stdio.h>
////定义一个函数，通过递归方式计算字符串长度
//int string_len(char* str)  //定义一个字符型指针指向字符串首地址 
//{
//    if (*str == '\0')     //字符串最后是以“\0”表示结尾的，判断是否为空字符
//        return 0;
//    else
//        return 1 + string_len(str + 1);   //通过递归计算字符串长度，str+1表示指向下一个字符地址
//}
//
////定义一个字符串翻转函数
//void reverse_string(char* string) //定义一个字符型指针，指向字符串首地址
//{
//    int len = string_len(string);  //调用函数的参数为指针，则也必须用指针
//    //求解字符串长度
//    if (len > 1)
//    {
//        char temp = string[0];     //定义一个字符变量保存第一个字符
//        string[0] = string[len - 1]; //将最后一个字符赋予第一个字符
//        string[len - 1] = '\0';//将最后一个字符的内容赋为'\0';字符串结尾字符。
//        reverse_string(string + 1);//递归调用，从第二个字符开始
//        string[len - 1] = temp;  //不动
//    }
//}
//
////主函数，定义字符串数组，调用翻转函数
//int main()
//{
//    char ch[] = "abcdefg";
//    reverse_string(ch);
//    printf("%s", ch);
//    return 0;
//}


//#include <stdio.h>
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;//拆解成前n-1位的和加上最后一位
//	}
//	return n;//小于9的时候只有一位，与它本身相等
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("请输入一个非负整数：");
//	scanf("%d", &n);
//	ret = DigitSum(n);
//	printf("%d的每一位上的数字相加的结果为：%d", n, ret);
//	return 0;
//}

//int to_power(int n, int k)
//{
//	if (k > 1)
//	{
//		return n * to_power(n, k - 1);
//	}
//	return n;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	printf("请输入n：");
//	scanf("%d", &n);
//	printf("请输入k：");
//	scanf("%d", &k);
//	ret = to_power(n, k);
//	printf("%d的%d次方为%d", n, k, ret);
//	return 0;
//}