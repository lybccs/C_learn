#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	//EOF-end of file
//	while ((ch = getchar()) != EOF)//读取键盘输入的字符
//		//输入ctrl+z结束，（打入EOF不会结束，注意判断不等号后面不是字符串）
//	{
//		putchar(ch);//输出ch代表的字符
//	}
//	return 0;
//}
//
//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	int ch = 0;
//	printf("请输入密码：>");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//		;//解决“密码后面多余字符干扰判断的问题”
//	printf("请确认（Y/N）：>");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功\n");
//	else
//		printf("放弃确认\n");
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	//初始化，判断，调整都写在了括号里面，注意用分号隔开
//	//先初始化，再判断，再确定是否执行，再调整，再判断……不执行则跳出for循环
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;//for循环也能用continue，也是跳过后面代码且进入下一次循环（从调整语句开始）
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//采用左闭右开写法
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	//只会打印十次hehe（i=0循环之后j变成了10，后面i=1，2，……的时候j都不满足小于10，不会打印）
//	for (; i < 10; i++)
//	{
//		for (;j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int x, y;//声明的时候可以不初始化
//	//for的初始化，判断，调整语句都可以有多条
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//		printf("hehe\n");
//		printf("hah");
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int k = 0;
//	//如果判断语句写成了赋值的话，首先会赋值，然后根据值判断真假（0为假，非0为真）
//	for (i = 0, k = 0; k = 0; i++, k++)//循环0次
//	{
//		k++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do//不加中括号只会执行第一句
//	{
//		if (i == 5)
//			continue;//死循环
//		printf("%d ",i);
//		i++;
//	} while (i <= 10);//注意分号不能省
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 1;
//	printf("请输入一个整数：");
//	scanf("%d", & n);
//	for (i = 1; i <= n; i++)
//	{
//		j = j * i;
//	}
//	printf("%d的阶乘为%d", n, j);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int sum = 0;
//	int k = 1;
//	while (i <= 10)
//	{
//		k = k * i;
//		sum = sum + k;
//		i++;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	//写一个代码，在arr数组（有序的）中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是： %d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10 };
//	int k = 7;//要找的元素
//	int sz = sizeof(arr) / sizeof(arr[0]);//元素个数
//	int left = 0;//查找范围最左下标
//	int right = sz - 1;//查找范围最右下标
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;//修改查找范围
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;//修改查找范围
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//#include <windows.h>//Sleep所在头文件
//#include <stdlib.h>//system所在头文件
//int main()
//{
//	//模拟字符从两端相遇
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "                    ";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//字符串最后有一个'\0'
//	int right = strlen(arr1) - 1;//采用这种方法比较容易理解
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000);//括号里面是要休息的毫秒
//		system("cls");//执行系统命令的函数-cls-清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

#include <string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入\n");
		}
	}
	if (i == 3)
		printf("连续输入错误三次，退出系统.");
	return 0;
}

