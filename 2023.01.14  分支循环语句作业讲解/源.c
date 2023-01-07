#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//int main()
//{
////写代码将三个整数从大到小输出
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d%d%d", &a, &b, &c);
//	//调整顺序
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
//	//输出
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//int main()
//{
//	//写一个代码打印 1—100之间3的倍数的数字
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
////给定两个数求最大公约数
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

////辗转相除法
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
//	printf("最大公约数：%d", n);
//	return 0;
//}
////数学知识
////最小公倍数 = m*n/最大公约数

//打印 100-200之间的素数
//素数 - 质数 只能被1和它本身整除

int main()
{
	int i = 0;

	for (i = 100; i <= 200; i++)
	{
		//判断 2 -> i-1 能否整除 i
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
//a和b中一定有一个数字是<=开平方m的
//16 = 2*8 = 4*4
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断 2 -> i-1 能否整除 i
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//sqrt()开平方函数-库函数 math.h
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
