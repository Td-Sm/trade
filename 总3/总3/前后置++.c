#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã���++
//	//int b = ++a;//��++����ʹ��
//	//int b = a--;//��ʹ�ã���--
//	//int b = --a;//��--����ʹ��
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//////////////////////////////////////ǿ���ļ�װ��
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n",a);
//	return 0;
//}

/////////////////////////////////�߼�������
int main()
{
	//�� - ��0
	//�� - 0
	//&&          �߼���
	//||          �߼���
	int a = 3;
	int a2 = 0;
	int b = 5;
	int c = a&&b;
	int d = a2&&b;
	printf("c=%d\nd=%d\n", c,d);

	int e = 3;
	int e2 = 0;
	int f = 5;
	int g = e || f;
	int h = e2 || f;
	printf("g=%d\nh=%d\n",g,h);
	return 0;
}