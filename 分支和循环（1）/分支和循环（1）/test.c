#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int age = 15;
//	//if (age < 18)
//	//	printf("未成年\n");//表达式为真执行，否则不执行
//
//	//if (age < 18)
//	//	printf("未成年\n");//表达式为真执行
//	//else
//	//	printf("成年\n");//表达式为假执行
//
//	//if-else if-else:按顺序判断每个表达式，为真则执行，为假则判断下一条，有一条为真就跳出结构
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	else
//	{
//		if (age < 28 && age >= 14)
//			printf("青年\n");
//		else if (age >= 28 && age < 50)
//			printf("壮年\n");
//		else if (age >= 50 && age < 90)
//			printf("老年\n");
//		else
//			printf("老老年\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	//条件语句写成赋值时，直接执行语句
//	if (5 == num)//为了避免将判断相等写成赋值，把常数放前面，如果写成赋值会报错
//	{
//		printf("呵呵\n");//会打印
//	}
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = a % 2;
//	if (1 == b)
//		printf("a=%d是奇数\n", a);
//	else
//		printf("a=%d是偶数\n", a);
//}

//int main()
//{
//	int i = 1;
//	int j = 0;
//	while (i < 101)
//	{
//		j = i % 2;
//		if (1 == j)
//			printf("%d\n", i);
//		i++;
//	}
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch括号里面放一个整型表达式（必须是整型，不是整型会报错），表达式是几就执行case几
//	{
//	case 1://case后面的也必须是整型并且必须是常量，不然也报错
//		printf("星期一\n");
//		break;//break表示跳出switch，不加的话后面的语句也会被执行
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		printf("放假\n");//case要执行多条语句不用括号
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{//当多个case都执行相同语句时，可以合并
//	 //实际上是输入1~5的时候都会执行5
//	 //（因为前四个没有break，也没有语句，会按照顺序执行下来，直到遇到5，执行完就break跳出）
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default://当switch后面的整型表达式在case范围内时执行
//		//default跟case没有强制的顺序规定，可以把default放前面
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		if (5 == i)
//			break;//break表示跳出循环
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;//continue表示跳过本次循环剩下代码，
//					//直接开始下一次循环，这个代码会陷入死循环
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

