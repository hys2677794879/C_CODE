#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//do
//{                   //
//	ѭ����䣻        //  ��ʽ
//} while �����ʽ����//

// do �����ص�
// ѭ������ִ��һ�Σ����õĳ������ޣ����Բ��Ǿ���ʹ��

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



// ����n�Ľ׳�



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
	//		tmp = tmp * i;// tmp *= i;�����
	//	
	//	}
	//	sum += tmp;

	//}

	///// �Ľ�

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
	//Ҫ���ҵ�����
	// �� arr ������������в��� k��ֵ
	printf("������Ҫ���ҵ����֣�>");
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);//  ���������Ԫ�ظ���

	int left = 0;
	int right = sz - 1;

	while ( left <= right)
	{
		int mid = (left + right) / 2;//�ҳ��м�ֵ

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
			printf("�ҵ��ˣ�%d �±���%d\n", arr[mid],mid);
			break;
		}

	}
	if (left > right)
	{
		printf("�Ҳ�������:%d\n", k);
	}
	return 0;
}