#include<stdio.h>

//结构体可以让C语言创建新的类型出来

//创建一个学生

struct Stu
{
	char name[20];//成员变量
	int  age;
	double score;

};

//创建一个书的类型
struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = { "张三",18,89.5 };//结构体的创建和初始化
	printf("1:%s %d %lf\n", s.name, s.age, s.score);
	struct Stu * ps = &s;
	printf("2:%s %d %lf \n", (*ps).name , (*ps).age , (*ps).score);

	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);// 结构体的指针 -> 成员变量名
	return 0;
}