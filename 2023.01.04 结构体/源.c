#include<stdio.h>

//�ṹ�������C���Դ����µ����ͳ���

//����һ��ѧ��

struct Stu
{
	char name[20];//��Ա����
	int  age;
	double score;

};

//����һ���������
struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = { "����",18,89.5 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("1:%s %d %lf\n", s.name, s.age, s.score);
	struct Stu * ps = &s;
	printf("2:%s %d %lf \n", (*ps).name , (*ps).age , (*ps).score);

	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);// �ṹ���ָ�� -> ��Ա������
	return 0;
}