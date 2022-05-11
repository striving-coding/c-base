#include "线性表-链式存储头文件.h"

//LNode* LinkList 是一个东西’
//LNode * 强调当前这是一个节点
//LinkList 强调这是一个链表


LNode* ApplyNode() {
	LNode* s = (LNode*)malloc(sizeof(LNode));
	if (s == NULL)
	{
		return NULL;
	}
	s->data = NULL;
	s->next = NULL;
	return s;
}

bool InitList(LinkList& L) {
	L = ApplyNode();
	return true;
}

//头插法
bool InsertHeadList(LinkList& L, int e) {
	LNode* s = ApplyNode();
	s->data = e;
	s->next = L->next;
	L->next = s;
	return true;
}


//尾插法
bool InsertTailList(LinkList& L, int e) {
	LNode* s = ApplyNode();
	s->data = e;
	LNode* LastNode = L->next;
	while (LastNode->next != NULL)
	{
		LastNode = LastNode->next;
	}
	LastNode->next = s;
	return true;
}


bool InsertList(LinkList& L) {
	InitList(L);
	InsertHeadList(L, 11);
	InsertHeadList(L, 12);
	InsertHeadList(L, 13);
	InsertTailList(L, 15);
	return true;
}

bool output(LinkList L) {
	while (L->next!=NULL)
	{
		printf("---LNode---%d\n", L->next->data);
		L = L->next;
	}
	return true;
}



//c++ 头指针是指第一个节点的地址
//头节点 不是必须了  为了编码方便设立的节点  数据域一般不存放数据 也可以存放链表的长度  指针只想第一个实际的节点
int main() {
	LNode* L;
	InsertList(L);
	output(L);
	return 0;
}