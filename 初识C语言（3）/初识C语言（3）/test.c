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
//	//�ַ����Ľ�����־��'\0'����\0'��ASCIIֵΪ0
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr));//����������ռ�ڴ��С����λ���ֽڣ�
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}
//int main()
//{
//	int a = 0;//a�����ͣ���������32����
//	int b = ~a;//~��ʾ��������λȡ��������b��������32��1����2^32-1
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = a++;//����++����ʹ�ã���++���������Ȱ�a����bȻ��a�ټ�һ��
//	int c = ++a;//ǰ��++����++����ʹ�ã�����a�ȼ�һ��Ȼ�󸳸�c��
//	printf("a=%d b=%d,c=%d\n", a, b, c);//12,10,12
//	int d = 10;
//	int e = d--;
//	printf("d=%d,e=%d\n", d, e);//�ͺ���++����
//	int f = 10;
//	int g = --f;
//	printf("f=%d,g=%d", f, g);//��ǰ��++����
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;//ǿ������ת��
//	return 0;
//}

//int main()
//{
//	//0--��
//	//����--��
//	//&&--�߼���
//	//||--�߼���
//	int a = 3;//��
//	int b = 5;//��
//	int c = a && b;//��
//	printf("c=%d\n", c);//ֵΪ1
//	printf("c=%d\n", a && 0);//�٣�ֵΪ0
//	int d = a || 0;//��һ��Ϊ���Ϊ�棬ֵΪ1
//	printf("d=%d ��=%d\n", d,0||0);
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
//	arr[4];//[]-�±����ò�����
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()-�������ò�����
//	return 0;
//}

//int main()
//{
//	register int a = 10;//�����a����ɼĴ�������
//	return 0;
//}
//int main()
//{
//	//typedef - ���Ͷ��� - �����ض��壨����������������
//	typedef unsigned int u_int;//��unsigned int������Ϊu_int
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}

////static���ξֲ�����
////�ֲ��������������ڱ䳤
//void test()
//{
//	static int a = 1;//a��һ����̬�ľֲ�������������һ�ε��ú�����ֵ���Ҳ������¸�ֵ
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

////static����ȫ�ֱ���
////�ı��˱�����������-�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//int main()
//{
//	//extern-�����ⲿ����
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}


////�����ⲿ����
////������⣺static���κ����ı��˺���������
////���������ⲿ�������ԣ�����ʹ��extern��������Դ�ļ��ĺ���
////����static֮���ⲿ�������Ա���ڲ����޷�����extern
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

////��Ķ���
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
//	int a = 10;//���ڴ�����4���ֽ�
//	int* p = &a;//ȡ��ַ��p��Ϊָ�����������
//	//��һ�ֱ�����������ŵ�ַ��-ָ�����
//	printf("%p\n", p);
//	printf("%p\n", &a);
//	*p = 20;//*-�����ò��������˴�*p������a���������a��ֵ��Ϊ20
//	printf("a=%d\n", a);
//	return 0;
//}

int main()
{
	char ch = 'w';
	char* pc = &ch;//����ַ��������ݵĵ�ַ���ַ���ָ��
	*pc = 'a';//ͬ��
	printf("%c\n", ch);//a
	printf("%d\n", sizeof(pc));//ָ���ŵ�ַ��64λ�е�ַ��64��2�������У���������ָ��Ĵ�С��8���ֽ�
	return 0;
}

