#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "###########";
//	strcpy(arr2,arr1);//��arr1�ַ��������ݸ��Ƶ�arr2���棨���'\0'Ҳ���ƹ�ȥ��
//	printf("%s\n", arr2);
//	//strcpy-string copy-�ַ�������
//	//strlrn-string length-�ַ��������й�
//
//	return 0;
//}



////memset
////memory - �ڴ� set-����
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//�ѵ�һ��������ָ���ŵ�ַ����ǰ5���ֽ��滻��'*'
//	printf("%s\n", arr);//***** world
//	return 0;
//}


//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//������ʹ��
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	max = get_max(100, 300);//Ҳ������������
//	printf("max=%d\n", max);
//	return 0;
//}


//void Swap(int x,int y)
//{	//��������ʵ�ֽ�����ע��������
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}

//void Swap1(int* pa, int* pb)
//{	//��������ѡΪָ�룬���ý������޸�a��b��ֵ
//	//�����ñ�ʾ��ַ��ŵ����ݣ����в������޸����ݵ�ֵ
//	int tmp = 0;
//	tmp = *pb;//��b�ĸ���tmp
//	*pb = *pa;//��b��ֵ�޸�Ϊa��ֵ��pb��ŵ���b�ĵ�ַ����*pb���޸�b��ֵ��
//	*pa = tmp;//��a��ֵ�޸�Ϊtmp
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	int tmp = 0;
//	Swap1(&a, &b);//�����ǵ�ַ
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//#include <math.h>//sqrt()����ͷ�ļ�
////����������1��������������0
//int is_prime(int x)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//			return 0;//�����һ��2<=i<����x������x����x��������������0
//	}
//	return 1;//������е����˵���������2<=i<����x��i����������x������x������������1
//}
//int main()
//{
//	//��ӡ100-200֮�������
//	int j = 100;
//	for (j = 100; j <= 200; j++)
//	{
//		if (is_prime(j) == 1)
//			printf("%d\n", j);
//	}
//	return 0;
//}


//is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;//���귵��1
//	}
//	else
//		return 0;//�������귵��0
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		if (is_leap_year(year)==1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

////��Ȼд�������βΣ����Ǵ��ݵ��ǵ�ַ��������������Ԫ�ص�ַ��������arr��ָ��
//int binary_search(int arr[], int k, int sz)
//{
//	//�㷨��ʵ��
//	//�ȸ��������±�
//	int left = 0;
//	int right = sz - 1;
//	int mid = (left + right) / 2;//�м�Ԫ�ص��±�
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)//�������������ǲ�����sizeof�����鳤��
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//���е�����˵��Ԫ�ز���������
//}
//int main()
//{
//	//���ö��ַ�������������
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������������Ԫ�ظ����ٴ����㷨����
//	int ret = binary_search(arr,k,sz);//����ʵ���㷨�ĺ���
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n", ret);
//	}
//	return 0;
//}

//void Add(int* p)
//{
//	//ÿ�ε��ö���num����1
//	(*p)++;//++���ȼ��Ƚϸߣ�����Ҫ�����Ű�*p������
//}
//int main()
//{
//	int num = 1;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}

//����Ƕ�׵��ã���һ�������ڵ�����һ������

//��ʽ���ʣ���һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));//��strlen�ķ���ֵ��Ϊprintf�Ĳ���
//	return 0;
//}

//
//int mian()
//{
//	//����printf��ʱ�����ȴ�ӡ��Ȼ�󷵻ش�ӡ���ַ���
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	return 0;
//}

//�����Ǵ������±���
//����������������������棬Ҫ������
//������뵽�������õ�ʱ�����Ϊ��δ������ʶ��

//#include "add.h"//�����Լ�д��ͷ�ļ������Բ��������Դ�ļ��ж������������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);//��������
//	printf("%d\n", sum);
//	return 0;
//}
//
//#include <stdio.h>
//#include <math.h>
//int is_prime(int i)
//{
//	//����������1��������������0
//	int j = 1;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//int is_leap_year(int x)
//{
//	//�����귵��1���������귵��0
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 1000;
//	if (is_leap_year == 1)
//	{
//		printf("%d������", year);
//	}
//	else
//		printf("%d��������", year);
//	return 0;
//}

//#include <stdio.h>
//void swap(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//void multiplication_table(int x)
//{
//	int i = 0;
//	int j = 0;
//	int ret = 0;
//	for (i = 1; i <= x; i++)
//	{
//		for (j = 1; j <= x; j++)
//		{
//			ret = i * j;
//			printf("%d ",ret);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 9;
//	printf("������һ��������");
//	scanf("%d", &a);
//	multiplication_table(a);
//	return 0;
//}