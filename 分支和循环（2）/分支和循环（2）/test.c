#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	//EOF-end of file
//	while ((ch = getchar()) != EOF)//��ȡ����������ַ�
//		//����ctrl+z������������EOF���������ע���жϲ��Ⱥź��治���ַ�����
//	{
//		putchar(ch);//���ch������ַ�
//	}
//	return 0;
//}
//
//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	int ch = 0;
//	printf("���������룺>");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//		;//����������������ַ������жϵ����⡱
//	printf("��ȷ�ϣ�Y/N����>");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("����ȷ��\n");
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
//	//��ʼ�����жϣ�������д�����������棬ע���÷ֺŸ���
//	//�ȳ�ʼ�������жϣ���ȷ���Ƿ�ִ�У��ٵ��������жϡ�����ִ��������forѭ��
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;//forѭ��Ҳ����continue��Ҳ��������������ҽ�����һ��ѭ�����ӵ�����俪ʼ��
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//��������ҿ�д��
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
//	//ֻ���ӡʮ��hehe��i=0ѭ��֮��j�����10������i=1��2��������ʱ��j��������С��10�������ӡ��
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
//	int x, y;//������ʱ����Բ���ʼ��
//	//for�ĳ�ʼ�����жϣ�������䶼�����ж���
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
//	//����ж����д���˸�ֵ�Ļ������Ȼḳֵ��Ȼ�����ֵ�ж���٣�0Ϊ�٣���0Ϊ�棩
//	for (i = 0, k = 0; k = 0; i++, k++)//ѭ��0��
//	{
//		k++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do//����������ֻ��ִ�е�һ��
//	{
//		if (i == 5)
//			continue;//��ѭ��
//		printf("%d ",i);
//		i++;
//	} while (i <= 10);//ע��ֺŲ���ʡ
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 1;
//	printf("������һ��������");
//	scanf("%d", & n);
//	for (i = 1; i <= n; i++)
//	{
//		j = j * i;
//	}
//	printf("%d�Ľ׳�Ϊ%d", n, j);
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
//	//дһ�����룬��arr���飨����ģ����ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ� %d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10 };
//	int k = 7;//Ҫ�ҵ�Ԫ��
//	int sz = sizeof(arr) / sizeof(arr[0]);//Ԫ�ظ���
//	int left = 0;//���ҷ�Χ�����±�
//	int right = sz - 1;//���ҷ�Χ�����±�
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;//�޸Ĳ��ҷ�Χ
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;//�޸Ĳ��ҷ�Χ
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//#include <windows.h>//Sleep����ͷ�ļ�
//#include <stdlib.h>//system����ͷ�ļ�
//int main()
//{
//	//ģ���ַ�����������
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "                    ";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//�ַ��������һ��'\0'
//	int right = strlen(arr1) - 1;//�������ַ����Ƚ��������
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);//����������Ҫ��Ϣ�ĺ���
//		system("cls");//ִ��ϵͳ����ĺ���-cls-�����Ļ
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
		printf("����������:>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�����������������\n");
		}
	}
	if (i == 3)
		printf("��������������Σ��˳�ϵͳ.");
	return 0;
}

