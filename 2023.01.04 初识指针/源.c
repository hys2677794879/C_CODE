#include<stdio.h>

//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����Ŀռ� 4/8
//	printf("%p\n", & a);// & ȡ��ַ������  //%p ר��������ӡ��ַ��
//
//	int* pa = &a; //pa��������ŵ�ַ�ģ���C������pa��ָ�����
//	// * ˵�� pa ��ָ�����
//	// int ˵�� pa ִ�еĶ����� int ���͵�
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}

//ָ�� ���� ��ַ

//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//	*pa = 20; // * �����ò��� *pa����ͨpa��ĵ�ַ�ҵ�a
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
	//���ǵ�ַ һ����
	return 0;
}