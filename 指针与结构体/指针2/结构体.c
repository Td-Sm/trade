#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//�ṹ��
//char int double����
//��=3.14
//'w'
//�� - ���Ӷ���
//
//����+���+����+���֤���롭��
//����+����+������+����+��š���
//���Ӷ��� -- �ṹ�� -- �����Լ����������һ������

struct Book
{
	char name[20];//C���Գ������
	short price;//55
};//�ֺŲ���ȱ��

int main()
{
	//���ýṹ������-����һ�������͵Ľṹ�����
	struct Book b1={"C���Գ������",55};
	struct Book* pb = &b1;
	//����pb��ӡ�������ͼ۸�
	//printf("%s\n%d\n", (*pb).name, (*pb).price);
	//.   �ṹ�����.��Ա
	//->  �ṹ��ָ��->��Ա
	printf("%s\n%d\n", pb->name,pb->price);
	/*printf("������%s\n", b1.name);
	printf("�۸�%dԪ\n", b1.price);
	b1.price = 15;
	printf("�޸ĺ�ļ۸�%d\n", b1.price);*/
	//�޸�name  name�����飬����������һ���޸�
	strcpy(b1.name, "C����");//strcpy - string copy - �ַ������� - �⺯�� - string.h
	printf("%s\n", b1.name);
	return 0;
}