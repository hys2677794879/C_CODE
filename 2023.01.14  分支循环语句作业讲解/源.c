#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//int main()
//{
////д���뽫���������Ӵ�С���
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d%d%d", &a, &b, &c);
//	//����˳��
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//���
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//int main()
//{
//	//дһ�������ӡ 1��100֮��3�ı���������
//
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (0 == i % 3)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


int Min(int x, int y)
	{
		if (x < y)
		{
			return x;
		}
		else
		{
			return y;
		}
	}

//int main()
//{
////���������������Լ��
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	scanf("%d%d", &m, &n);//24 18
//	int min = Min(m, n);
//	for (i = min; i >= 0; i--)
//	{
//		if (m % i == 0 && n % i == 0)
//		{
//			break;
//		}
//	}
//	printf("%d", i);
//	return 0;
//}

////շת�����
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);// 24 18
//	int t = 0;
//	while ( t = m % n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("���Լ����%d", n);
//	return 0;
//}
////��ѧ֪ʶ
////��С������ = m*n/���Լ��

//��ӡ 100-200֮�������
//���� - ���� ֻ�ܱ�1������������

int main()
{
	int i = 0;

	for (i = 100; i <= 200; i++)
	{
		//�ж� 2 -> i-1 �ܷ����� i
		int j = 0;
		int flag = 1;
		for (j = 2; j < sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

//m = a*b
//a��b��һ����һ��������<=��ƽ��m��
//16 = 2*8 = 4*4
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж� 2 -> i-1 �ܷ����� i
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//sqrt()��ƽ������-�⺯�� math.h
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//	}
//
//	return 0;
//}
