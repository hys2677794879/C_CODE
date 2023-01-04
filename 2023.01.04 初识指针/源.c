#include<stdio.h>

//int main()
//{
//	int a = 10;//a在内存中要分配的空间 4/8
//	printf("%p\n", & a);// & 取地址操作符  //%p 专门用来打印地址的
//
//	int* pa = &a; //pa是用来存放地址的，在C语言中pa叫指针变量
//	// * 说明 pa 是指针变量
//	// int 说明 pa 执行的对象是 int 类型的
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}

//指针 就是 地址

//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//	*pa = 20; // * 解引用操作 *pa就是通pa里的地址找到a
//	printf("%d\n", a);
//
//	return 0;
//}

int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	//都是地址 一样大
	return 0;
}