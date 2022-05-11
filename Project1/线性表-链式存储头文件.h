//cout cin头文件
#include <iostream>
using namespace std;

//printf 头文件
#include <stdio.h>

//c的标准库
#include <stdlib.h>

typedef struct LNode {
	int data;
	LNode* next;
}LNode, * LinkList;

LNode * ApplyNode();

//初始化一个带头节点的空链表
bool InitList(LinkList& L);

//初始化一个带头节点的链表 链表长度为指定长度 元素为一样元素
bool InitListSize(LinkList& L, int length, int i);


//头插法
bool InsertHeadList(LinkList& L,int i);


//尾插法
bool InsertTailList(LinkList& L,int i);

//输出链表的所有元素
bool output(LinkList L);


