#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�ػ�����
//ֻҪ�������������Ծ���60s�ڹػ���������룺�������ȡ���ػ�
//
//shutdown -s -t 60	60���ػ�
//shutdown -a       ȡ���ػ�

int main()
{
	//�ػ�
	//c�����ṩ��һ������system() - ִ��ϵͳ����ĺ���
	char input[20] = { 0 };
	system("shutdown -s -t 60"); // system - stdlib.h
	again:
	printf("��ע�⣬��ĵ��Խ���60s��ػ���������룺����������ȡ���ػ�\n");
	scanf("%s", input);  //input ��һ����������������һ����ַ    //%s ���ջ��ӡ�ַ���
	if (strcmp(input , "������") == 0)//�����ַ����Ƚϲ���ʹ�� == ��Ӧ��ʹ�� strcmp() ��ȷ��� 0  string compare #include<string.h>
	{
		system("shutdown -a");
	}
	else
	{
		goto again;//gotoֻ����һ����������ת�����ܿ纯��
	}
	return 0;
}