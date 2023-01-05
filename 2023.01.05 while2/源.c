#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//为什么没有使用取地址符& ：因为这里的 password 为数组名，数组名本身就是一个地址
//	printf("请确认密码（Y/N):>");
//	//清理缓冲区
//	//getchar();//处理缓冲区'\n'
//	//
//	//清理缓冲区的多个字符
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
//		printf("确认成功\n");
//	}
//	else 
//	{ 
//		printf("确认失败");
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

//  一些建议：
//				1:不可在for循环体内修改循环变量，防止for循环失去控制
//				2：建议for语句的循环控制变量的值采取“前闭后开区间”的写法。

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

//for 循环的变种


//变种1

//int main()
//{
//	//判断部分的省略 -- 恒为真
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
//	{                        //不要随便省略 NO ZUO NO DIE
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

//变种2

int main()
{
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("hehe\n");
	}

	return 0;
}

