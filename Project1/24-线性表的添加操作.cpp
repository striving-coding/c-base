#include <iostream>
using namespace std;

//prinf的头
#include <stdio.h>

//malloc free的声明
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
	//插入的位序应该大于1 并且小于等于L.length+1
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
	SqList24 L;  //生命一个结构体数组
	InitList(L); //初始化一个数组

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