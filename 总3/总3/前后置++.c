#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用，再++
//	//int b = ++a;//先++，再使用
//	//int b = a--;//先使用，再--
//	//int b = --a;//先--，再使用
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//////////////////////////////////////强制文件装换
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n",a);
//	return 0;
//}

/////////////////////////////////逻辑操作符
int main()
{
	//真 - 非0
	//假 - 0
	//&&          逻辑与
	//||          逻辑或
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