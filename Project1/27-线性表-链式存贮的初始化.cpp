#include "���Ա�-��ʽ�洢ͷ�ļ�.h";

//LNode* LinkList ��һ��������
//LNode * ǿ����ǰ����һ���ڵ�
//LinkList ǿ������һ������



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

//c++ ͷָ����ָ��һ���ڵ�ĵ�ַ
//ͷ�ڵ� ���Ǳ�����  Ϊ�˱��뷽�������Ľڵ�  ������һ�㲻������� Ҳ���Դ������ĳ���  ָ��ֻ���һ��ʵ�ʵĽڵ�
int main27() {
	LinkList L;
	InitList(L);
	printf("%d", L->data);
	return 0;
}