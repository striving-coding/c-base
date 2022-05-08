#include <iostream>
using namespace std;

//prinf��ͷ
#include <stdio.h>

//malloc free������
#include <stdlib.h>

#define InitSize 10

typedef struct {
	int* data;
	int MaxSize;
	int length;

}SqList24;


void InitList(SqList24 &L) {
	L.data = (int *)malloc(InitSize * sizeof(int));
	L.length = 0;
	L.MaxSize = InitSize;
};


bool InsertList(SqList24& L, int i, int e) {
	//�����λ��Ӧ�ô���1 ����С�ڵ���L.length+1
	if (i<1||i>L.length+1)
	{
		return false;
	}

	for (int j = L.length; j >= i; j--)
	{
		L.data[j] = L.data[j - 1];
	}

	L.data[i] = e;
	L.length = L.length + 1;
}


int main24() {
	SqList24 L;  //����һ���ṹ������
	InitList(L); //��ʼ��һ������

	for (int i = 0; i < 5; i++)
	{
		L.data[i] = 1;
	}
	L.length = 5;

	InsertList(L, 5, 9);

	for (int i = 0; i < L.length; i++)
	{
		printf("L.data[%d]=%d\n", i, L.data[i]);
	}
	


	return 0;
}