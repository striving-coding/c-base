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

//��ʼ��һ����ͷ�ڵ�Ŀ�����
bool InitList(LinkList& L);

//��ʼ��һ����ͷ�ڵ������ ������Ϊָ������ Ԫ��Ϊһ��Ԫ��
bool InitListSize(LinkList& L, int length, int i);

//������������Ԫ��
bool output(LinkList L);


