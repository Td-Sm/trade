#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.判断一个数是否为奇数

//int main()
//{
//	long num;
//	printf("请输入一个整数（输入q退出）\n");
//	while(scanf("%ld",&num))
//	{
//		if (1 == num % 2)
//			printf("是奇数\n");
//		else
//			printf("是偶数\n");
//	}
//	return 0;
//}


//2.输出1-100之间的奇数


int main()
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (1 == i % 2)
			printf("%d  ", i);
	}
	return 0;
}