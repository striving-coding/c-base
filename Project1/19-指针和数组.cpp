#include <iostream>
using namespace std;

int main19() {

	long arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	long* p = arr;  //ָ�������ָ��

	cout << "��һ��Ԫ�أ� " << arr[0] << endl;
	cout << "ָ����ʵ�һ��Ԫ�أ� " << *p << endl;

	for (int i = 0; i < 10; i++)
	{
		//����ָ���������
		cout << *p << endl;
		p++;
	}

	system("pause");

	return 0;
}