#include "线性表-链式存储头文件.h";

//LNode* LinkList 是一个东西’
//LNode * 强调当前这是一个节点
//LinkList 强调这是一个链表



bool InitList(LinkList& L) {
	L = (LNode*)malloc(sizeof(LNode));
	if (L==NULL)
	{
		return false;
	}
	L->next = NULL;
	L->data = NULL;
	return true;
}

bool InitList(LinkList& L,int length,int i) {
	L = (LNode*)malloc(sizeof(LNode));
	if (L == NULL)
	{
		return false;
	}
	L->next = NULL;
	L->data = NULL;

	LNode* s;
	for (int i = 0; i < length; i++)
	{
		s = (LNode*)malloc(sizeof(LNode));
		if (s == NULL)
		{
			return false;
		}
		s->data = i;
		L->next = s;
		L = s;
		return true;
	}
	return true;
}

//c++ 头指针是指第一个节点的地址
//头节点 不是必须了  为了编码方便设立的节点  数据域一般不存放数据 也可以存放链表的长度  指针只想第一个实际的节点
int main27() {
	LinkList L;
	InitList(L);
	printf("%d", L->data);
	return 0;
}