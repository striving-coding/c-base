//cout cinͷ�ļ�
#include <iostream>
using namespace std;

//printf ͷ�ļ�
#include <stdio.h>

//c�ı�׼��
#include <stdlib.h>

typedef struct LNode {
	int data;
	LNode* next;
}LNode, * LinkList;

LNode * ApplyNode();

//��ʼ��һ����ͷ�ڵ�Ŀ�����
bool InitList(LinkList& L);

//��ʼ��һ����ͷ�ڵ������ ������Ϊָ������ Ԫ��Ϊһ��Ԫ��
bool InitListSize(LinkList& L, int length, int i);


//ͷ�巨
bool InsertHeadList(LinkList& L,int i);


//β�巨
bool InsertTailList(LinkList& L,int i);

//������������Ԫ��
bool output(LinkList L);


