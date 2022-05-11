//cout cin 的头文件
#include <iostream>
using namespace std;

//prinf的头文件
#include <stdio.h>

//malloc free 的头文件 c标准
#include <stdlib.h>

//定义宏常量
#define InitSize 10

typedef struct {
	int* data;
	int MaxSize;
	int Length;
}SqlList26;


bool InitList(SqlList26& L) {
	L.data = (int*)malloc(InitSize * sizeof(int));
	L.Length = 0;
	L.MaxSize = InitSize;
	return true;
}

bool InsertList(SqlList26 &L, int size) {
	if (size<1||size>L.MaxSize)
	{
		return false;
	}

	for (int i = 0; i < size; i++)
	{
		L.data[i] = i+1;
	}
	L.Length = size;
	return true;
}


void pri(SqlList26 L) {
	for (int i = 0; i < L.Length; i++)
	{
		printf("L.data[%d]=%d\n", i, L.data[i]);
	}
}
int locateElem(SqlList26 L,int e) {
	for (int i = 0; i < L.Length; i++)
	{
		if (L.data[i]==e)
		{
			return i+1;
		}
	}
	return 0;
}


int getElem(SqlList26 L, int i) {
	if (i<1||i>L.Length)
	{
		return 0;
	}
	return L.data[i];
}


int main26() {
	SqlList26 L;
	InitList(L);
	InsertList(L,6);
	pri(L);
	int locate = locateElem(L, 5);
	printf("locate=%d\n", locate);
	int elem = getElem(L,4);
	printf("elem=%d\n", elem);
	return 0;
}
