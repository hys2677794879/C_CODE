#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

/*
1.函数是什么
2.库函数
3.自定义函数
4.函数参数
5.函数调用
6.函数的嵌套调用和链式访问
7.函数的声明和定义
8.函数递归
*/

/*strcpy

char * strcpy ( char * destination, const char * source );

Copy string
Copies the C string pointed by source into the array pointed by destination, including the terminating null character(and stopping at that point).

To avoid overflows, the size of the array pointed by destination shall be long enough to contain the same C string as source(including the terminating null character), and should not overlap in memory with source.
*/

//int main()
//{
//	char arr1[] = { 0 };
//	char arr2[] = "hellow future";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);//打印字符串 %s - 以字符串格式来打印
//	return 0;
//}

int main()
{
	char arr[] = "hello future";
	memset(arr, 'x', 5);
	printf("%s\n", arr);
	return 0;
}/*  void * memset ( void * ptr, int value, size_t num );
Fill block of memory
Sets the first num bytes of the block of memory pointed by ptr to the specified value (interpreted as an unsigned char).*/