#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//�����������ĺ�
//	//C���Թ涨������Ҫ�����ڵ�ǰ�������ǰ��
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//��������-ʹ�����뺯��scanf
//	scanf("%d%d", &num1, &num2);//&��ʾȡ��ַ���������������һ���ո�
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{
//	//����const�ؼ��ֱ�ʾ�����������Ǳ�����ֻ�Ǿ��в��ɱ�ĳ����ԣ�
//	//�����ٸı�ֵ�ᱨ��
//	const int num = 4;
//	printf("%d\n", num);
//	//num = 8;�������ܸı�const����ֵ
//	printf("%d\n", num);
//	3;//���泣��
//	100;//���泣��
//	//int n = 10;
//	//int arr[n] = { 0 };//�������鳤��Ҫ�ǳ���
//	//const int n = 10;
//	//int arr[n] = { 0 };//��Ȼ����˵��n�Ǿ��г����Եı���
//
//	//#define����ģ���ʶ��������
//    #define MAX 10//������ΪMAX��ֵΪ10�ĳ�������ĩ���üӷֺ�
//	int arr[MAX] = { 0 };//MAX�ǳ��������ᱨ��
//	printf("%d\n", MAX);
//
//	//ö�ٳ������ؼ��֣�enum��
//	//ö��-һһ�о�
//	//�о������Ա�
//	enum Sex
//	{
//		MALE,
//		FEMALE,
//		SECRET
//	};
//	//������ÿһ������ö�ٳ������о����ֵ
//	enum Sex s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}

//int main()
//{
//	//�����ڼ�����ϴ洢��ʱ�򣬴洢����2����
//	// a-97
//	// A-65
//	// ����
//	//�ַ�����˫���Ŷ���
//	"";//���ַ���
//	char arr1[] = "abc";//���ַ������������ַ���
//	//"abc"--'a' 'b' 'c' '\0'��'\0'���ַ����Ľ�����־
//	char arr2[] = { 'a','b','c'};//û��0�������arr1��һ��
//	char arr3[] = { 'a','b','c',0};//��0�������arr1һ��
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };//û��'\0'��abc֮��������ַ�
//	//strlen-string length�������ַ������ȣ������㵽'\0'��ʱ���ֹ
//	printf("%d\n", strlen(arr1));//3
//	//abc֮���������ʲôʱ��������ʲôʱ���ֹ�����Խ���������
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	//\32--32�������˽������֣�Ҳ����ʮ���Ƶ�26������\32����26��ΪASCII��ֵ��Ӧ���ַ�
//	printf("%c\n", '\32');
//	//\t���Ʊ����\32Ҳ��ת�壬���治��������ӡ������\t�Ϳո��ˣ�
//	printf("c:\test\32\test.c\n");
//	//��\ǰ���\����\��ʾΪ��ͨ\������ת��
//	printf("c:\\test\\32\\test.c");
//	//printf("%c\n", ''');//ǰ�����������ű���Ϊ�ǿ��ַ�������ĵ����ž͵��±���
//	printf("%c\n", '\'');//\'��ʾ�ַ������ţ�����������ӡ
//	//printf("%s\n", """);//���ƵĴ���
//	printf("%s\n", "\"");//���ƵĽ������
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	printf("%c\n", '\x61');
//	return 0;
//}

/*
����
*/

//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ�𣿣�1/0��>��");
//	scanf("%d", &input);//�൱��python��input����
//	//ѡ�����
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	//ѭ�����
//	while (line < 20000)
//	{
//		printf("��һ�д���,%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//		printf("��offer\n");
//	return 0;
//}

////����
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int a = 100;
//	int b = 200;
//	int sum = 0;
//	//sum = num1 + num2;
//	sum = Add(num1, num2);
//	sum = Add(a, b);9
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����10���������ֵ�����
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	printf("%d\n", arr[4]);//���ʵ����Ԫ�أ��±��0��ʼ�������±����
//	char arr1[10];//����һ�����10���ַ�������
//	float arr2[10];//����һ�����10��������������
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	//<<:����
//	int b = a << 1;//����һλ�����һ�����㣬����b��ֵΪ2
//	printf("%d\n", b);
//	printf("%d\n", a);//a��ֵ�����
//	b = a << 2;//������λ��b��ֵΪ4
//	printf("%d\n", b);
//	printf("%d\n", a);//a��ֵ�����
//	return 0;
//}

//int main()
//{
//	//��2���ƣ�λ����
//	//&��λ��������λ����ͬ����
//	//|��λ��
//	//^��λ���
//	int a = 3;//������Ϊ011
//	int b = 5;//������Ϊ101
//	int c = a & b;//011&101��ÿһλ����һ�µõ�001������c��ֵ��1
//	printf("%d\n", c);
//	int d = a | b;//���ƿɵõ�d=111=7
//	printf("%d\n", d);
//	int e = a ^ b;//������߶�Ӧ�Ķ�����λ��ͬ�����λΪ0������Ϊ1������e=110=6
//	printf("%d\n", e);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = 20;//��ֵ
//	a = a + 10;
//	a += 10;//����һ�еȼ�
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	return 0;
//}

//��Ŀ��������ֻ��һ����������
//˫Ŀ��������2��
//��Ŀ��������3��
//int main()
//{
//	int a = 10;
//	//C������0��ʾ�٣����������ֶ���ʾ��
//	//������ļ٣��ٸ��棨�������ٷֱ�Ϊ1��0��
//	printf("%d\n", a);
//	printf("%d\n", !a);//��Ŀ������
//	int b = -2;//����Ҳ�ǵ�Ŀ������
//	int c = -b;
//	int d = 10;
//	//sizeofҲ�ǵ�Ŀ�����������ڼ������������ռ�ռ�Ĵ�С
//	printf("%d\n", sizeof(d));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);//������ʱsizeof�����ſ�ʡ
//	//printf("%d\n",sizeof int);//��������ʱ����ʡ
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//������ʮ�����ͱ��������Է���40
//	//����Ԫ�ظ���=������ռ�ܿռ��С/����Ԫ����ռ�ռ��С
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz=%d\n", sz);
//	return 0;
//}
