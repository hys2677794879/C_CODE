#include<stdio.h>

int main()
{
	double d = 3.14;
	double* pd = &d;
	*pd = 5.5;
	printf("%lf\n", d);
	printf("%lf\n", *pd);
	printf("%d\n", sizeof(pd));//32 - 4  64 - 8
	//int a = 10;  //申请了4个字节的空间
	//printf("%p\n", &a);
	//printf("%d\n", sizeof(a));
	//int* p = &a;//p是一个变量 -  指针变量//这里的--*
	//printf("%p\n", p);
	//*p;//* - 解引用操作符/间接访问操作符
	//*p = 20;
	//printf("a = %d\n",a);

		return 0;
	}