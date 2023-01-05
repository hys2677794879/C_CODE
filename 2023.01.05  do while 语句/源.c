#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//do
//{                   //
//	循环语句；        //  格式
//} while （表达式）；//

// do 语句的特点
// 循环至少执行一次，适用的场景有限，所以不是经常使用

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i < 11);
//
//
//	return 0;
//}



// 计算n的阶乘



//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int tmp = 1;

	//for (n = 1; n <= 3; n++)
	//{
	//	for (i = 1 , tmp = 1; i <= n ; i ++)
	//		{
	//		tmp = tmp * i;// tmp *= i;更简洁
	//	
	//	}
	//	sum += tmp;

	//}

	///// 改进

//		for ( n= 1; n <= 3;  n++)
//		{
//			tmp *= n;
//			sum += tmp;
//		}
//
//
//		printf("%d\n", sum);
//
//	return 0;
//}



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	//要查找的数字
	// 在 arr 这个有序数组中查找 k的值
	printf("请输入要查找的数字：>");
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);//  计算数组的元素个数

	int left = 0;
	int right = sz - 1;

	while ( left <= right)
	{
		int mid = (left + right) / 2;//找出中间值

		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{

			right = mid - 1;
		}
		else
		{
			printf("找到了：%d 下标是%d\n", arr[mid],mid);
			break;
		}

	}
	if (left > right)
	{
		printf("找不到数字:%d\n", k);
	}
	return 0;
}