#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;//��ʾ��ǰ��ӡ������
//	for (i = 0; i < 14; i++)
//	{
//		int j = 0;//���ƴ�ӡ��*�ĸ���
//		if (i < 7)
//		{
//			for (j = 0; j < 6 - i; j++)
//			{
//				printf("%c", ' ');//i=0ʱҪ6���ո񣬺���ÿ����һ����һ���ո�
//			}
//			for (j = 0; j < 2 * i + 1; j++)
//			{
//				printf("%c", '*');//i=0Ҫ1��*������ÿ����һ�ж�����*
//			}
//			printf("\n");//����һ�л�һ��
//		}
//		else
//		{
//			for (j = 0; j < i - 6; j++)
//			{
//				printf("%c", ' ');//i=7ʱҪ1���ո񣬺���ÿ����һ�ж�һ���ո�
//			}
//			for (j = 0; j < -2 * i + 25; j++)
//			{
//				printf("%c", '*');//i=7Ҫ11��*������ÿ����һ��������*
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
//	int d = 20;//Ŀǰ��Ǯ������
//	int n = 0;//Ŀǰ��ƿ������
//	int all = 0;//Ŀǰ�ȵ�����ˮ��
//	while (d != 0 || n > 1)
//	{
//		if (d != 0)
//		{
//			//���Ŀǰ����Ǯ
//			d--;//��Ǯ��һƿ��ˮ
//			n++;//��ƿ����һ
//			all++;//�ȵ�����ˮ����һ
//		}
//		if (n > 1)
//		{
//			//���Ŀǰ�����������ϵĿ�ƿ
//			n = n - 2;//�ÿ�ƿ��һ����ˮ
//			all++;//��ˮ����һ
//			n++;//��ƿ����һ
//		}
//	}
//	printf("�ܺ�%dƿ��ˮ\n", all);
//	printf("ʣ��%d��Ǯ\n", d);
//	printf("ʣ��%d����ƿ\n", n);
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