#define _CRT_SECURE_NO_WARNINGS 1

typedef struct Stu
{
	//描述一个学生-一些数据
	//名字、年龄、电话、性别
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
int main()
{
	struct Stu s1;
	Stu s2;
	return 0;
}