#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;//表示当前打印的行数
//	for (i = 0; i < 14; i++)
//	{
//		int j = 0;//控制打印的*的个数
//		if (i < 7)
//		{
//			for (j = 0; j < 6 - i; j++)
//			{
//				printf("%c", ' ');//i=0时要6个空格，后面每增加一行少一个空格
//			}
//			for (j = 0; j < 2 * i + 1; j++)
//			{
//				printf("%c", '*');//i=0要1个*，后面每增加一行多两个*
//			}
//			printf("\n");//打完一行换一行
//		}
//		else
//		{
//			for (j = 0; j < i - 6; j++)
//			{
//				printf("%c", ' ');//i=7时要1个空格，后面每增加一行多一个空格
//			}
//			for (j = 0; j < -2 * i + 25; j++)
//			{
//				printf("%c", '*');//i=7要11个*，后面每增加一行少两个*
//			}
//			printf("\n");
//		}
//
//	}
//	return 0;
//}
//#include <stdio.h>
//void reverse(char* str, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "hehehijk";
//	int sz = strlen(arr);
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	printf("\n");
//	reverse(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int d = 20;//目前的钱的数量
//	int n = 0;//目前空瓶的数量
//	int all = 0;//目前喝到的汽水数
//	while (d != 0 || n > 1)
//	{
//		if (d != 0)
//		{
//			//如果目前还有钱
//			d--;//花钱买一瓶汽水
//			n++;//空瓶数加一
//			all++;//喝到的汽水数加一
//		}
//		if (n > 1)
//		{
//			//如果目前还有两个以上的空瓶
//			n = n - 2;//用空瓶换一个汽水
//			all++;//汽水数加一
//			n++;//空瓶数加一
//		}
//	}
//	printf("能喝%d瓶汽水\n", all);
//	printf("剩下%d块钱\n", d);
//	printf("剩下%d个空瓶\n", n);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 20;
//	int s = 0;
//	int empty = 0;
//	while (n--)
//	{
//		s++;
//		empty++;
//		if (empty == 2)
//		{
//			n++;
//			empty = 0;
//		}
//	}
//	printf("%d", s);
//	return 0;
//}