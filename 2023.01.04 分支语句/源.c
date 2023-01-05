#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//#include<string>
//C语言如何表达真假
//非0为真 0为假 假就不执行

/////////////////////// if 语句的学习  \\\\\\\\\\\\\\\\\\\\\\

	//if（表达式）
	//语句；
//
	//if（表达式）
	//	语句1；
	//else
	//	语句2；
//
// 多分支
	//if（表达式）
	//	语句1；
	//else if（表达式2）
	//	语句2；
	//else 
	//	语句3；




int main()
{
	

	//if (age < 18)
	//	printf("少年\n");
	//else if (age >= 18 && age < 26)
	//	printf("青年\n");
	//else if (age >= 26 && age < 40)
	//	printf("壮年\n");
	//else if (age >= 40 && age < 60)
	//	printf("中年\n");
	//else if (age >= 60 && age <= 100)
	//	printf("老年\n");
	//else
	//	printf("老不死\n");


	//////////////////////////////////////////////////////

	//if (age >= 18)
	//{
	//	printf("成年\n");

	//}
	//else
	//{
	//	printf("未成年\n");
	//	printf("不能谈恋爱\n");
	//}

	/////////////////////////////////////////////////////

	//判断奇偶
	//int num = 100;
	//if (1 == num % 2)
	//	printf("%d是奇数\n", num);
	//else
	//	printf("%d是偶数\n", num);
	
	////////////////////////////////////////////////////
	
	//int nums = 0;
	//for (nums = 1; nums <= 100; nums++)//输出1-100并判断奇偶性
	//{
	//	if (1 == nums % 2)
	//		printf("%d是奇数\n", nums);
	//	else
	//		printf("%d是偶数\n", nums);



	//}

/////////////////////// swich 语句的学习  \\\\\\\\\\\\\\\\\\\\\\

	//switch (整型表达式)
	//{
	//	case整型常量表达式；
	//  break；（看需要加）
    //}

	int day = 0;
	//scanf ("%d", &day);
	//switch (day)
	//{
	//case 1:
	//	printf("星期一\n");
	//	break;
	//case 2:
	//	printf("星期二\n");
	//	break;
	//case 3:
	//	printf("星期三\n");
	//	break;
	//case 4:
	//	printf("星期四\n");
	//	break;
	//case 5:
	//	printf("星期五\n");
	//	break;
	//case 6:
	//	printf("星期六\n");
	//	break;
	//case 7:
	//	printf("星期七\n");
	//	break;


	//}
	// 1-5工作日
	// 6-7休息日
	//scanf("%d", &day);
	//switch (day)
	//{
	//case 1:
	//case 2:
	//case 3:
	//case 4:
	//case 5:
	//	printf("工作日\n");
	//	break;
	//case 6:
	//case 7:
	//	printf("休息日\n");
	//	break;
	//default :
	//	printf("输入错误\n");
	//	break; 


	//}

//////////////////////////////////////////////////////



/////////////////////// while 语句的学习  \\\\\\\\\\\\\\\\\\\\\\

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
	//		continue;//continue 跳过循环 再次进入判断语句看是否进入下一次循环
	//	printf("%d ", i);
	//	i++;
	//}

	//EOF end of file 文件结束标志

//	int  ch = getchar();//输入一个字符
////	printf("%c\n", ch);
//	putchar(ch);		//输出一个字符


	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

    return 0;
}



