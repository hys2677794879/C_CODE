#include<stdio.h>

int main()
{
	double d = 3.14;
	double* pd = &d;
	*pd = 5.5;
	printf("%lf\n", d);
	printf("%lf\n", *pd);
	printf("%d\n", sizeof(pd));//32 - 4  64 - 8
	//int a = 10;  //������4���ֽڵĿռ�
	//printf("%p\n", &a);
	//printf("%d\n", sizeof(a));
	//int* p = &a;//p��һ������ -  ָ�����//�����--*
	//printf("%p\n", p);
	//*p;//* - �����ò�����/��ӷ��ʲ�����
	//*p = 20;
	//printf("a = %d\n",a);

		return 0;
	}