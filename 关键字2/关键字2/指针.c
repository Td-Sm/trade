#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//地址——>空间（房间）
//32位 - 32根地址线/数据线    2^32个二进制序列（地址可能性） 指针大小4字节
//       分正电和负电
//          1     0
//        一个空间存放1字节
//64位  -  同上               2^64个二进制序列 指针大小8字节
//int a = 10;//要向内存申请4字节的空间
int main()
{
	int a = 10;//4个字节 在内存中创建名为a的变量，值为10
	int* p = &a;//& - 取地址 创建变量p存储a的地址
	printf("%p\n", &a);
	printf("%p\n", p);
	*p = 20;//* - 解引用操作符 将该内存中存储的值变为20
	printf("a=%d\n", a);
	//有一种变量是用来存放地址的 - 指针变量
	char ch = 'w';
	char* pc = &ch;
	*pc = 'a';
	printf("ch=%c\npc=%p/n指针占用空间=%d\n", ch,pc,sizeof(pc));
	return 0;
}