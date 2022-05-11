//cout cin 的头文件
#include <iostream>
using namespace std;

//printf的头文件
#include <stdio.h>


//malloc free函数的头文件
#include <stdlib.h>

#define InitSize 10  //默认的最大长度

typedef struct {
	int* data;          //指示动态分配数组的指针
	int MaxSize;        //顺序表的最大容量
	int length;         //顺序表的当前长度
} SqList23;


void InitList(SqList23& L) {
	// 用malloc函数申请一片连续的存贮空间
	L.data = (int*)malloc(InitSize * sizeof(int)); //申请的内存首地址给指针
	L.length = 0;
	L.MaxSize = InitSize;
}


void IncreaseSize(SqList23& L, int len) {
	int* p = L.data;
	// maxSize + 扩展的长度  
	L.data = (int*)malloc((L.MaxSize + len) * sizeof(int));
	for (int i = 0; i < L.length; i++)
	{
		L.data[i] = p[i];   //将数据复制到新区域
	}
	L.MaxSize = L.MaxSize + len;
	free(p);
}

int main23() {
	SqList23 L;   //声明一个顺序表
	InitList(L);//初始化顺序表
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