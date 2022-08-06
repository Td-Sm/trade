#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//C语言是一门 结构化 的程序设计语言
//1.顺序结构
//2.选择结构
//3.循环结构


//分支语句 - if  /  switch
//循环语句 - while  /  for  /  do while
//goto语句
 

//C语言中，由一个分号;隔开的就是一条语句
//int main()
//{
//	int age;
//	printf("请输入年龄(输入q退出）\n");
//	while (scanf("%d", &age))
//	{
//		if (age < 18)
//			printf("未成年\n");
//		else if (age < 28)
//			printf("青年\n");
//		else if (age < 50)
//			printf("壮年\n");
//		else if (age < 90)
//			printf("老年\n");
//		else
//			printf("美少女（\n");
//		printf("输入下一个年龄（输入q退出）\n");
//	}
//
//	//int a = 0;
//	//int b = 2;
//	//if (a == 1)
//	//	if (b == 2)
//	//		printf("114\n");
//	//	else//与上面的else匹配而非最上面的else - 悬空else问题
//	//		printf("514\n");//不打印任何东西
//	return 0;
//}


//代码1
//if (condition) {
//	return x;
//}
//return y;
//条件成立返回x，不成立返回y

//代码2
//if (condition)
//{
//	return x;
//}
//else
//{
//	return y;
//}
//同上

//int main()
//{
//	int num = 4;
//	if (5 == num)//常量放左边，防止错误
//		//if (num = 5)// = 赋值   == 判断相等
//		printf("nmsl\n");
//	return 0;
//}