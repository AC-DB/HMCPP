#include<iostream>

int main2() {

	// 取模运算本质  求余数 
	int a1 = 10;
	int b1 = 3;

	std::cout << 10 % 3 << std::endl;

	int a2 = 10;
	int b2 = 20;

	std::cout << a2 % b2 << std::endl;

	int a3 = 10;
	int b3 = 0;

	//std::cout << a3 % b3 << std::endl; //取模运算时，除数也不能为0

	//两个小数不可以取模
	double d1 = 3.14;
	double d2 = 1.1;

	//std::cout << d1 % d2 << std::endl;

	return 0;
}