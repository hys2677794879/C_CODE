#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//strlen
//strcmp
#include <windows.h>
#include <time.h>

//ʵ�����δ�ӡ welcome to bit !!!!
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
//	int right = strlen(arr1) - 1; //��Ҫ #include <string.h>
//
//
//	while(left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);		//˯�� x ms   //��Ҫ #include <windows.h>
//
//		system("cls");	//�����Ļ
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
//			printf("����������>\n");
//
//		}
//		else if (2 == i)
//		{
//			printf("������󣬻�ʣһ�λ��ᣬ���ٴ���������>\n");
//
//		}
//		else
//			printf("����������ٴ���������>\n");
//		scanf("%s", password);
////		if (password == "194208")  //err - �����ַ����Ƚϲ���ʹ�� == ��Ӧ��ʹ�� strcmp
//		if (strcmp(password, "194208") == 0)  //strcmp ���Ϊ 0
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//
//	}
//
//	if (3 == i)
//	{
//	printf("������������� ��½ʧ�� �˳�����\n");
//
//	}
//
//
//
//	return 0;
//}


//дһ����������Ϸ
//1. �Զ�����һ�� 1-100 �������
//2. ������
//3. a.�¶��ˣ���ϲ����Ϸ����
//   b.�´��ˣ�������´��˻��ǲ�С�ˣ�������ֱ���¶�
//4. ��Ϸ����һֱ������˳���Ϸ

void menu()
{
	printf("****************************\n");
	printf("*********  1. play *********\n");
	printf("*********  0. exit *********\n");
	printf("****************************\n");
}

void game()
{
	//��������Ϸ��ʵ��
	//1.���������  
	//rand ����ͷ�ļ� stdlib.h VS 2022 ����Ҫ��ͷ�ļ�
	//ʱ�� - ʱ���
	int ret = rand()%100 + 1;//%(ģ)100 ��������0-99 Ȼ��+1 ����1-100             //ramd������һ��0 - 32767֮������֣�����������ֲ����
	//printf("%d\n", ret);
	//2.������
	int guess = 0;
	int n = 0 ;
	do
	{
		n++;
		printf("������֣�1 - 100��>\n");
		scanf("%d", &guess);
		if (guess == ret)
		{
			printf("��ϲ��¶���\n");
			printf("��һ������%d��\n", n);
			break;
		}
		else if(guess < ret)
		{
			printf("���ź�����С��\n");
		}

		else if (guess > ret)
		{
			printf("���ź����´���\n");
		}

	} while (guess != ret);

}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}

	} while(input);  //�������  1Ϊ�� 0Ϊ��









	return 0;
}
























