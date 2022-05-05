#include <iostream>
using namespace std;

int main5() {
/*
short 2字节 -32768-----32767
int   4字节
long  window4个字节  linux下8个字节
long long 8个字节
*/

	//超出的部分 将会循环寻址
	short num = 32769;

	cout << num << endl;

		return 0;



}