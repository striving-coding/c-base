// cout cin的头文件
#include <iostream>
using namespace std;

//prinf 的头文件
#include <stdio.h>

// c的标准库
#include <stdlib.h>

#define  InitSize 10


typedef struct {
	int* data;
	int MaxSize;
	int Length;
}SqlList25;

void InitList(SqlList25& L) {
	L.data = (int*)malloc(InitSize * sizeof(int));
	L.MaxSize = InitSize;
	L.Length = 0;
};


bool insertList(SqlList25& L, int length) {
	if (length<1||length>L.MaxSize)
	{
		return false;
	}

	for (int i = 0; i < length; i++)
	{
		L.data[i] = i;
	}
	L.Length = length;

}


bool deleteList(SqlList25& L, int  i) {
	if (i<1 || i>L.Length)
	{
		return false;
	}

	for (int j = i-1; j < L.Length; j++)
	{
		L.data[j] = L.data[j + 1];
	}

	L.Length = L.Length-1;
	return true;
}

void printList(SqlList25 L) {
	for (int i = 0; i < L.Length; i++)
	{
		printf("---L.data[%d]=%d\n", i, L.data[i]);
	}
}


int main() {
	SqlList25 L;
	InitList(L);
	insertList(L, 5);
	printList(L);
	deleteList(L, 6);
	printList(L);

		return 1;

}