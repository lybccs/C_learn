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
//		//��x>9��x����λ����ʱ��
//		//�ݹ����print���ɴ�ӡǰn-1λ������ֺ͵�n������
//		print(x / 10);
//	}
//	printf("%d ", x % 10);//��ӡ��n������
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//�ݹ�
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	print(num);
//	return 0;
//}


////�ݹ����ַ�������
//int my_strlen(char* x)
//{
//	//�����û���������ַ����ͷ���1+��n-1���ַ����ĳ���
//	if (*x != '\0')
//	{
//		//x��1��ʾָ����ָ��ַ��1����xָ�������Ԫ�ص�ַ
//		//���Կ������������̡��ַ���
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
//�ݹ�������������
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
//	//n>2��ʱ�����Ҫ������
//	while (n > 2)
//	{
//		//�������ǰ��һλ���޸�ǰ������
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//	//�������while��c��������ֵ�����û����c=1Ҳ����ȷ��
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
//		move(a, c);//��A����һ�������Ƶ�C��
//	}
//	else
//	{
//		hanoi(n - 1, a, c, b);//�Ƚ�A��n-1�����ӽ���C�Ƶ�B
//		move(a, c);//��A�ϵ�һ�������Ƶ�C
//		hanoi(n - 1, b, a, c);//��Bʣ��n-1�����ӽ���A�Ƶ�C
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("������A���ϵ���������");
//	scanf("%d", &n);
//	printf("�ƶ�������\n");
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
//			c = a + b;//��c�ƽ�һλ
//			/*��a��b�ƽ�һλ*/
//			a = b;
//			b = c;
//			x--;//
//		}
//		return c;//�������ս��
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("��������Ҫ����̨������");
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("һ����%d��������", ret);
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
//	printf("������һ��������");
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
//	int ret1 = 0;//���շǵݹ�Ľ׳�
//	int ret2 = 0;//���յݹ�Ľ׳�
//	printf("������һ��������");
//	scanf("%d", &n);
//	ret1 = factorial_1(n);
//	printf("�ǵݹ鷨���%d�Ľ׳�Ϊ��%d\n", n, ret1);
//	ret2 = factorial_2(n);
//	printf("�ݹ鷨���%d�Ľ׳�Ϊ��%d\n", n, ret2);
//	return 0;
//}

#include <stdio.h>
//int strlen_1(char* str)
//{
//	//ʹ�÷ǵݹ����
//	int i = 0;//���ڼ�¼��ǰ����
//	while (*str != '\0')
//	{
//		i = i + 1;
//		str++;
//	}
//	return i;
//}
//int strlen_2(char* str)
//{
//	//ʹ�õݹ����
//	if (*str != '\0')
//	{
//		return 1 + strlen(str + 1);
//	}
//	return 0;
//}
//int main()
//{
//	char str[200000] = {'0'};
//	int len_1 = 0;//���շǵݹ�
//	int len_2 = 0;//���յݹ�
//	printf("������һ���ַ�����");
//	scanf("%s", str);
//	len_1 = strlen_1(str);
//	len_2 = strlen_2(str);
//	printf("�ǵݹ鷨��õĳ���Ϊ��%d\n", len_1);
//	printf("�ݹ鷨��õĳ���Ϊ��%d\n", len_2);
//	return 0;
//}

//
//#include <stdio.h>
////����һ��������ͨ���ݹ鷽ʽ�����ַ�������
//int string_len(char* str)  //����һ���ַ���ָ��ָ���ַ����׵�ַ 
//{
//    if (*str == '\0')     //�ַ���������ԡ�\0����ʾ��β�ģ��ж��Ƿ�Ϊ���ַ�
//        return 0;
//    else
//        return 1 + string_len(str + 1);   //ͨ���ݹ�����ַ������ȣ�str+1��ʾָ����һ���ַ���ַ
//}
//
////����һ���ַ�����ת����
//void reverse_string(char* string) //����һ���ַ���ָ�룬ָ���ַ����׵�ַ
//{
//    int len = string_len(string);  //���ú����Ĳ���Ϊָ�룬��Ҳ������ָ��
//    //����ַ�������
//    if (len > 1)
//    {
//        char temp = string[0];     //����һ���ַ����������һ���ַ�
//        string[0] = string[len - 1]; //�����һ���ַ������һ���ַ�
//        string[len - 1] = '\0';//�����һ���ַ������ݸ�Ϊ'\0';�ַ�����β�ַ���
//        reverse_string(string + 1);//�ݹ���ã��ӵڶ����ַ���ʼ
//        string[len - 1] = temp;  //����
//    }
//}
//
////�������������ַ������飬���÷�ת����
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
//		return DigitSum(n / 10) + n % 10;//����ǰn-1λ�ĺͼ������һλ
//	}
//	return n;//С��9��ʱ��ֻ��һλ�������������
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("������һ���Ǹ�������");
//	scanf("%d", &n);
//	ret = DigitSum(n);
//	printf("%d��ÿһλ�ϵ�������ӵĽ��Ϊ��%d", n, ret);
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
//	printf("������n��");
//	scanf("%d", &n);
//	printf("������k��");
//	scanf("%d", &k);
//	ret = to_power(n, k);
//	printf("%d��%d�η�Ϊ%d", n, k, ret);
//	return 0;
//}