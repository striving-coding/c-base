//cout cin ��ͷ�ļ�
#include <iostream>
using namespace std;

//printf��ͷ�ļ�
#include <stdio.h>


//malloc free������ͷ�ļ�
#include <stdlib.h>

#define InitSize 10  //Ĭ�ϵ���󳤶�

typedef struct {
	int* data;          //ָʾ��̬���������ָ��
	int MaxSize;        //˳�����������
	int length;         //˳���ĵ�ǰ����
} SqList23;


void InitList(SqList23& L) {
	// ��malloc��������һƬ�����Ĵ����ռ�
	L.data = (int*)malloc(InitSize * sizeof(int)); //������ڴ��׵�ַ��ָ��
	L.length = 0;
	L.MaxSize = InitSize;
}


void IncreaseSize(SqList23& L, int len) {
	int* p = L.data;
	// maxSize + ��չ�ĳ���  
	L.data = (int*)malloc((L.MaxSize + len) * sizeof(int));
	for (int i = 0; i < L.length; i++)
	{
		L.data[i] = p[i];   //�����ݸ��Ƶ�������
	}
	L.MaxSize = L.MaxSize + len;
	free(p);
}

int main23() {
	SqList23 L;   //����һ��˳���
	InitList(L);//��ʼ��˳���
	for (int i = 0; i < L.MaxSize; i++)
	{
		L.data[i] = 1;
	}
	L.length = 10;

	IncreaseSize(L, 5);
	for (int i = 0; i < L.MaxSize; i++)
	{
		printf("L.data[%d]=%d\n", i, L.data[i]);
	}
	return 0;
}