#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//关机程序
//只要运行起来，电脑就在60s内关机，如果输入：我是猪就取消关机
//
//shutdown -s -t 60	60秒后关机
//shutdown -a       取消关机

int main()
{
	//关机
	//c语言提供了一个函数system() - 执行系统命令的函数
	char input[20] = { 0 };
	system("shutdown -s -t 60"); // system - stdlib.h
	again:
	printf("请注意，你的电脑将在60s后关机，如果输入：“我是猪”就取消关机\n");
	scanf("%s", input);  //input 是一个数组名，本身是一个地址    //%s 接收或打印字符串
	if (strcmp(input , "我是猪") == 0)//两个字符串比较不能使用 == ，应该使用 strcmp() 相等返回 0  string compare #include<string.h>
	{
		system("shutdown -a");
	}
	else
	{
		goto again;//goto只能在一个函数内跳转，不能跨函数
	}
	return 0;
}