#include <iostream>
using namespace std;

#include <stdio.h>
#define MaxSize 10  //定义最大长度

typedef struct {
	int data[MaxSize];  //用静态数组存放元素
	int length;         //顺序表的当前长度
} SqList01;

//基本操作 初始化一个顺序表
void InitList(SqList01& L) {
	for (int i = 0; i < MaxSize; i++)
	{
		L.data[i] = 0;  //将所有元素设置为默认初始值
	}
	L.length = 0;       //顺序表初始长度为0
}

int main22() {
	SqList01 L;   //声明一个顺序表
	InitList(L);//初始化顺序表

	for (int i = 0; i < 10; i++)
	{
		printf("data[%d]=%d\n", i, L.data[i]);
	}
	return 0;
}