#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//#include<string>
//C������α�����
//��0Ϊ�� 0Ϊ�� �پͲ�ִ��

/////////////////////// if ����ѧϰ  \\\\\\\\\\\\\\\\\\\\\\

	//if�����ʽ��
	//��䣻
//
	//if�����ʽ��
	//	���1��
	//else
	//	���2��
//
// ���֧
	//if�����ʽ��
	//	���1��
	//else if�����ʽ2��
	//	���2��
	//else 
	//	���3��




int main()
{
	

	//if (age < 18)
	//	printf("����\n");
	//else if (age >= 18 && age < 26)
	//	printf("����\n");
	//else if (age >= 26 && age < 40)
	//	printf("׳��\n");
	//else if (age >= 40 && age < 60)
	//	printf("����\n");
	//else if (age >= 60 && age <= 100)
	//	printf("����\n");
	//else
	//	printf("�ϲ���\n");


	//////////////////////////////////////////////////////

	//if (age >= 18)
	//{
	//	printf("����\n");

	//}
	//else
	//{
	//	printf("δ����\n");
	//	printf("����̸����\n");
	//}

	/////////////////////////////////////////////////////

	//�ж���ż
	//int num = 100;
	//if (1 == num % 2)
	//	printf("%d������\n", num);
	//else
	//	printf("%d��ż��\n", num);
	
	////////////////////////////////////////////////////
	
	//int nums = 0;
	//for (nums = 1; nums <= 100; nums++)//���1-100���ж���ż��
	//{
	//	if (1 == nums % 2)
	//		printf("%d������\n", nums);
	//	else
	//		printf("%d��ż��\n", nums);



	//}

/////////////////////// swich ����ѧϰ  \\\\\\\\\\\\\\\\\\\\\\

	//switch (���ͱ��ʽ)
	//{
	//	case���ͳ������ʽ��
	//  break��������Ҫ�ӣ�
    //}

	int day = 0;
	//scanf ("%d", &day);
	//switch (day)
	//{
	//case 1:
	//	printf("����һ\n");
	//	break;
	//case 2:
	//	printf("���ڶ�\n");
	//	break;
	//case 3:
	//	printf("������\n");
	//	break;
	//case 4:
	//	printf("������\n");
	//	break;
	//case 5:
	//	printf("������\n");
	//	break;
	//case 6:
	//	printf("������\n");
	//	break;
	//case 7:
	//	printf("������\n");
	//	break;


	//}
	// 1-5������
	// 6-7��Ϣ��
	//scanf("%d", &day);
	//switch (day)
	//{
	//case 1:
	//case 2:
	//case 3:
	//case 4:
	//case 5:
	//	printf("������\n");
	//	break;
	//case 6:
	//case 7:
	//	printf("��Ϣ��\n");
	//	break;
	//default :
	//	printf("�������\n");
	//	break; 


	//}

//////////////////////////////////////////////////////



/////////////////////// while ����ѧϰ  \\\\\\\\\\\\\\\\\\\\\\

	//int i = 1;
	//while (i <= 10)
	//{
	//	if (i == 5)
	//	break;
	//	printf("%d ",i );
	//	i++;
	//}

	//int i = 1;
	//while (i <= 10)
	//{
	//	if (i == 5)
	//		continue;//continue ����ѭ�� �ٴν����ж���俴�Ƿ������һ��ѭ��
	//	printf("%d ", i);
	//	i++;
	//}

	//EOF end of file �ļ�������־

//	int  ch = getchar();//����һ���ַ�
////	printf("%c\n", ch);
//	putchar(ch);		//���һ���ַ�


	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

    return 0;
}



