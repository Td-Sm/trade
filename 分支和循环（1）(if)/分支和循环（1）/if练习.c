#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.�ж�һ�����Ƿ�Ϊ����

//int main()
//{
//	long num;
//	printf("������һ������������q�˳���\n");
//	while(scanf("%ld",&num))
//	{
//		if (1 == num % 2)
//			printf("������\n");
//		else
//			printf("��ż��\n");
//	}
//	return 0;
//}


//2.���1-100֮�������


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