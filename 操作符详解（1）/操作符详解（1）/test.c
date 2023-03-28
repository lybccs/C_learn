#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	// 00000000000000000000000000000101
//	//00000000000000000000000000000101  (左移一位)
//	// 00000000000000000000000000001010 （左边丢弃，右边补零，得到10）
//	printf("%d\n", b);//10
//	return 0;
//}

//int main()
//{
//	//& - 按二进制位与
//	int a = -3;
//	int b = 5;
//	int c = a & b;
//	//0……0011(前面不用写是因为全是0，与完是0，对结果不影响，实际算的时候是用32位二进制算的)
//	//0……0101
//	//0……0001=1
//	printf("%d\n", c);//1
//	return 0;
//}

//int main()
//{
//	//^ - 按二进制异或
//	//对应的二进制位相同为0，相异为1
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	//0……0011
//	//0……0101
//	//0……0110
//	printf("%d\n", c);//6
//	return 0;
//}

//#include <stdio.h>
//int different(int a, int b)
//{
//	//首先用两个数进行异或
//	int c = a ^ b;
//	//再计算两个数异或之后的二进制序列中1的个数，大小与两个数原先不相同的位数相等
//	int i = 0;//控制右移的位数
//	int count = 0;//计算1的个数
//	for (i = 0; i < 32; i++)
//	{
//		//右移i位，跟1按位与，如果最后一位是1，则得到1，否则得到0
//		//i从0增大到31表示对每一位一一检验
//		if ((c >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	int num = 0;
//	num = different(a,b);
//	printf("%d和%d在内存的二进制表示中，有%d位不同", a, b, num);
//	return 0;
//}


//#include <stdio.h>
//int number_of_1(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);//每次都将补码中最后一个1改为0，其余不变
//		count++;//每改一个加上1，a=0时说明补码已经全被改为0，退出循环
//	}
//	return count;
//}
//int main()
//{
//	int a = -0;
//	int num = 0;
//	num = number_of_1(a);
//	printf("%d\n", num);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 9;
//	int b = 10;
//	printf("before: a=%d,b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after: a=%d,b=%d\n", a, b);
//	return 0;
//}

//#include <stdio.h>
//void show_binary(int a,int i)
//{
//	int j = 0;
//	for (j = 32-i; j >= 0; j=j-2)//第一个表达式的意思是打印偶数位从右移30位开始，奇数位从右移31位开始
//	{
//		//由于打印是从左往右，所以这次i从31开始，i右移31位再跟1按位与
//		//如果第1位是1，则结果是1，打印1，否则打印0
//		//然后i-2，打印第三位
//		//……
//		//i=1打印最后一个奇数位
//		if ((a >> j) & 1 == 1)
//		{
//			printf("%d", 1);
//		}
//		else
//		{
//			printf("%d", 0);
//		}
//	}
//}
//int main()
//{
//	int a = 5;
//	int b = -5;
//	show_binary(a, 1);//奇数位
//	printf("\n");
//	show_binary(a, 2);//偶数位
//	printf("\n");
//	show_binary(b, 1);
//	printf("\n");
//	show_binary(b, 2);
//	return 0;
//}