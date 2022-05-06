#include <iostream> 
#include "14-swap.h"
using namespace std;


void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}


int main14() {

	int a = 100;
	int b = 200;
	swap(a, b);

	system("pause");

	return 0;

}