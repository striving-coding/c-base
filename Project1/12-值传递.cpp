#include <iostream>
using namespace std;



void swap996(int num1, int num2)
{
	cout << "����ǰ��" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "������" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	//return ; ����������ʱ�򣬲���Ҫ����ֵ�����Բ�дreturn
}

int main12() {

	int a = 10;
	int b = 20;

	swap996(a, b);

	cout << "mian�е� a = " << a << endl;
	cout << "mian�е� b = " << b << endl;

	system("pause");

	return 0;
}