#include "���Ա�-��ʽ�洢ͷ�ļ�.h"

//LNode* LinkList ��һ��������
//LNode * ǿ����ǰ����һ���ڵ�
//LinkList ǿ������һ������


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

//ͷ�巨
bool InsertHeadList(LinkList& L, int e) {
	LNode* s = ApplyNode();
	s->data = e;
	s->next = L->next;
	L->next = s;
	return true;
}


//β�巨
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



//c++ ͷָ����ָ��һ���ڵ�ĵ�ַ
//ͷ�ڵ� ���Ǳ�����  Ϊ�˱��뷽�������Ľڵ�  ������һ�㲻������� Ҳ���Դ������ĳ���  ָ��ֻ���һ��ʵ�ʵĽڵ�
int main() {
	LNode* L;
	InsertList(L);
	output(L);
	return 0;
}