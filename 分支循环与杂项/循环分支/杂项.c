#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//int a = 1;
	//int b, i;
	//for (i=0; i <= 10; i++)
	//{
	//	b = a << i;
	//	printf("%d\n", b);
	//}
	//& 按位与
	//| 按位或
	//^ 按位异或
	int a = 3;
	int b = 5;
	int c = a&b;
	//化为二进制
	//3-->0 1 1
	//5-->1 0 1
	//按位与：相同为真（1），不同为假（0）
	//    0 0 1
	//    c=1
	printf("%d\n", c);
	c = a | b;
	//按位与：其中一个为真（1）即为真（1）
	//    1 1 1
	//    c=7
	printf("%d\n", c);
	//按位异或：对应的二进制位相同则为假（0），相异则为真（1）
	//    1 1 0
	//    c=6
	c = a^b;
	printf("%d\n", c);
	return 0;
}
//sizeof 计算的是变量/类型所占空间的大小，单位是字节。
//计算数组元素个数：数组总大小/每个元素的大小