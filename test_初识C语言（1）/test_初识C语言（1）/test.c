//#include <stdio.h>
//����һ����stdio.h���ļ�
//std-��׼standard input output
//#include <stdio.h>
////int�����͵���˼
////mainǰ���int��ʾmain�������÷���һ������ֵ
////Ҳ���Ըĳ�void main��������д����ʱ�ˣ�����
//int main()  //������-���뿪ʼִ�еĵط�-��������
//{
//	//printf�ǿ⺯����ʹ�õĻ�Ҫ����⣺#include <std.h>
//	//��������￪ʼ
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	return 0;//���� 0
//}

#include <stdio.h>
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}
//char-�ַ�����
//int main()
//{
//	//char - �ַ���
//	//char ch = 'A';// �����ڴ�
//	//printf("%c\n", ch); //��ӡ�ַ���ʽ������
//	//short-������
//	//int-����
//	int age = 20;  //�������������ڴ�
//	printf("%d\n", age);  //�ȼ���printf("20\n");
//	//long ������
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
//	short age = 20;//�����ڴ�ռ�ã�ageһ�㲻����ô��
//	printf("%d\n", age);
//	//��ӡ����������ռ���ڴ棬��%d����Ϊ�ڴ�������
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
//	short age = 20;//���ڴ����������ֽ�
//	float weight = 95.6;
//	return 0;
//}

//int mum2 = 20;//ȫ�ֱ����������ڴ����֮��
//int main()
//{
//	int num1 = 10;//�ֲ������������ڴ����֮��
//	return 0;
//}

//int a = 100;//ȫ�ֱ����������ڴ����֮�⣬�κεط�������ʹ��
//int main()
//{
//	{
//		int a = 5;//ֻ����������ʹ�ã������ط����û���ض���a��ʹ�þͱ���
//	}
//	int a = 10; //�ֲ������������ڴ����֮��,ֻ���ڴ����֮��ʹ��
//	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ����ͬ������ᣬ����bug
//	//ͬ��ʱ�ֲ���������
//	printf("%d\n", a);
//	return 0;
//}

int main()
{
	//�����������ĺ�
	//C���Թ涨������Ҫ�����ڵ�ǰ�������ǰ��
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//��������-ʹ�����뺯��scanf
	scanf("%d%d", &num1, &num2);//&��ʾȡ��ַ���������������һ���ո�
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}
//
//int global = 2020;//ȫ�ֱ���������������������
//void test()
//{
//	printf("test()= %d\n", global);//ȫ�ֱ���Ҳ�����ں���������ʹ��
//}
//int main()
//{
//	//����һ���ļ��ж���ı���Ҫ��extern����һ����ʹ��
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	test();//��������
//	printf("global = %d\n", global);//�������ڣ�����ʹ��
//	int num2 = 2;
//	{
//		int num = 0;
//		printf("num = %d\n", num);//���������ڣ�����ʹ��
//		printf("num2 = %d\n", num2);//���������ڣ�����ʹ��
//	}
//	//printf("num = %d\n", num);//���������⣬����ʹ��
//	printf("num2 = %d\n", num2);//���������ڣ�����ʹ��
//	return 0;
//}