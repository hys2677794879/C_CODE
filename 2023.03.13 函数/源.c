#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

/*
1.������ʲô
2.�⺯��
3.�Զ��庯��
4.��������
5.��������
6.������Ƕ�׵��ú���ʽ����
7.�����������Ͷ���
8.�����ݹ�
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
//	printf("%s", arr1);//��ӡ�ַ��� %s - ���ַ�����ʽ����ӡ
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