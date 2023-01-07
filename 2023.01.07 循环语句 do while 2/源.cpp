#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//strlen
//strcmp
#include <windows.h>
#include <time.h>

//实现依次打印 welcome to bit !!!!
//			   w#################!
//			   we###############!!
//             wel#############!!!
//             welc###########!!!!
//             welco######### !!!!
//             welcom#######t !!!!
//             welcome#####it !!!!
//             welcome ###bit !!!!
//             welcome t# bit !!!!
//             welcome to bit !!!!



//int main()
//{
//	char arr1[] = "welcome to bit !!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1) - 1; //需要 #include <string.h>
//
//
//	while(left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);		//睡眠 x ms   //需要 #include <windows.h>
//
//		system("cls");	//清空屏幕
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		if (0 == i)
//		{
//			printf("请输入密码>\n");
//
//		}
//		else if (2 == i)
//		{
//			printf("密码错误，还剩一次机会，请再次输入密码>\n");
//
//		}
//		else
//			printf("密码错误，请再次输入密码>\n");
//		scanf("%s", password);
////		if (password == "194208")  //err - 两个字符串比较不能使用 == ，应该使用 strcmp
//		if (strcmp(password, "194208") == 0)  //strcmp 相等为 0
//		{
//			printf("登录成功\n");
//			break;
//		}
//
//	}
//
//	if (3 == i)
//	{
//	printf("三次密码均错误 登陆失败 退出程序\n");
//
//	}
//
//
//
//	return 0;
//}


//写一个猜数字游戏
//1. 自动产生一个 1-100 的随机数
//2. 猜数子
//3. a.猜对了：恭喜，游戏结束
//   b.猜错了，告诉你猜大了还是猜小了，继续猜直到猜对
//4. 游戏可以一直玩除非退出游戏

void menu()
{
	printf("****************************\n");
	printf("*********  1. play *********\n");
	printf("*********  0. exit *********\n");
	printf("****************************\n");
}

void game()
{
	//猜数字游戏的实现
	//1.生成随机数  
	//rand 引入头文件 stdlib.h VS 2022 不需要引头文件
	//时间 - 时间戳
	int ret = rand()%100 + 1;//%(模)100 的余数是0-99 然后+1 就是1-100             //ramd返回了一个0 - 32767之间的数字，但是这个数字不随机
	//printf("%d\n", ret);
	//2.猜数子
	int guess = 0;
	int n = 0 ;
	do
	{
		n++;
		printf("请猜数字（1 - 100）>\n");
		scanf("%d", &guess);
		if (guess == ret)
		{
			printf("恭喜你猜对了\n");
			printf("你一共猜了%d次\n", n);
			break;
		}
		else if(guess < ret)
		{
			printf("很遗憾，猜小了\n");
		}

		else if (guess > ret)
		{
			printf("很遗憾，猜大了\n");
		}

	} while (guess != ret);

}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();//打印菜单
		printf("请选择>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}

	} while(input);  //巧妙！！！  1为真 0为假









	return 0;
}
























