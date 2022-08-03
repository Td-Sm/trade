#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//(auto) int a = 10;//局部变量——自动变量
//省略


//register 寄存器关键字
//计算机 存储数据： 寄存器 高速缓存 内存 硬盘
//            速度        >        >    >
//            空间        <        <    <
// register int a = 10; ----建议把a定义为寄存器变量（取决于编译器）
//int 定义的变量是有符号的
// int = signed int;
// unsigned int num = 1; 无符号的



//struct - 结构体关键字
//union - 联合体/共用体
//关键字不能与变量名冲突



//typedef- 类型定义 - 类型重定义
typedef unsigned int u_int;
//将u_int 作为 unsigned int 的别名
unsigned int num = 20;
u_int num2 = 20;
//两个变量类型一样




//static - 用来修饰变量和函数
// 修饰局部变量时，局部变量的生命周期变长
//void test()
//{
//	static int a = 1;//a是一个静态的局部变量，保存使用上一次留下来的值
//	a++; 
//	printf("a=%d\n", a);//2 3 4 5 6
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//static - 修饰全局变量,改变变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用
//static int g_val = 2020;//全局变量
//int main()
//{
//	//exturn - 声明外部符号
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;//移到其他源文件会出错
//}


//static修饰函数
//也是改变了函数的作用域 - 不准确

//static 修饰函数改变了函数的链接属性
//外部链接属性——> 内部链接属性


//声明外部函数 
extern int Add(int, int);

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum=%d\n", sum);
	return 0;
}