#include <iostream>
using namespace std;

#include <stdio.h>
#define MaxSize 10  //������󳤶�

typedef struct {
	int data[MaxSize];  //�þ�̬������Ԫ��
	int length;         //˳���ĵ�ǰ����
} SqList01;

//�������� ��ʼ��һ��˳���
void InitList(SqList01& L) {
	for (int i = 0; i < MaxSize; i++)
	{
		L.data[i] = 0;  //������Ԫ������ΪĬ�ϳ�ʼֵ
	}
	L.length = 0;       //˳����ʼ����Ϊ0
}

int main22() {
	SqList01 L;   //����һ��˳���
	InitList(L);//��ʼ��˳���

	for (int i = 0; i < 10; i++)
	{
		printf("data[%d]=%d\n", i, L.data[i]);
	}
	return 0;
}