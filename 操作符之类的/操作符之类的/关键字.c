#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//(auto) int a = 10;//�ֲ����������Զ�����
//ʡ��


//register �Ĵ����ؼ���
//����� �洢���ݣ� �Ĵ��� ���ٻ��� �ڴ� Ӳ��
//            �ٶ�        >        >    >
//            �ռ�        <        <    <
// register int a = 10; ----�����a����Ϊ�Ĵ���������ȡ���ڱ�������
//int ����ı������з��ŵ�
// int = signed int;
// unsigned int num = 1; �޷��ŵ�



//struct - �ṹ��ؼ���
//union - ������/������
//�ؼ��ֲ������������ͻ



//typedef- ���Ͷ��� - �����ض���
typedef unsigned int u_int;
//��u_int ��Ϊ unsigned int �ı���
unsigned int num = 20;
u_int num2 = 20;
//������������һ��




//static - �������α����ͺ���
// ���ξֲ�����ʱ���ֲ��������������ڱ䳤
//void test()
//{
//	static int a = 1;//a��һ����̬�ľֲ�����������ʹ����һ����������ֵ
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


//static - ����ȫ�ֱ���,�ı�������������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//static int g_val = 2020;//ȫ�ֱ���
//int main()
//{
//	//exturn - �����ⲿ����
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;//�Ƶ�����Դ�ļ������
//}


//static���κ���
//Ҳ�Ǹı��˺����������� - ��׼ȷ

//static ���κ����ı��˺�������������
//�ⲿ�������ԡ���> �ڲ���������


//�����ⲿ���� 
extern int Add(int, int);

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum=%d\n", sum);
	return 0;
}