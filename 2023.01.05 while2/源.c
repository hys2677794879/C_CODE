#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//Ϊʲôû��ʹ��ȡ��ַ��& ����Ϊ����� password Ϊ���������������������һ����ַ
//	printf("��ȷ�����루Y/N):>");
//	//��������
//	//getchar();//��������'\n'
//	//
//	//���������Ķ���ַ�
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//
//
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else 
//	{ 
//		printf("ȷ��ʧ��");
//	}
//
//
//
//
//	return 0;
//}

//int main ()
//{
//	int i = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		//if (5 == i)
//		//{
//		//	break;
//		//}
//
//		if (5 == i)
//		{
//			continue;
//		}
//
//
//		printf("%d\n", i);
//	}
//
//
//	return 0;
//}

//  һЩ���飺
//				1:������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����
//				2������for����ѭ�����Ʊ�����ֵ��ȡ��ǰ�պ����䡱��д����

//int main()
//{
//	int arr[10] = { 10,11,12,13,14,15,16,17,18,19 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//for ѭ���ı���


//����1

//int main()
//{
//	//�жϲ��ֵ�ʡ�� -- ��Ϊ��
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{                        //��Ҫ���ʡ�� NO ZUO NO DIE
//		for (; j < 3; j++)
//		{
//			printf("hehe\n");
//
//		}
//
//	}
//
//	return 0;
//}

//����2

int main()
{
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("hehe\n");
	}

	return 0;
}

