#include<iostream>

int main8() {

	//逻辑运算符  --- 或 ||
	int a = 10;
	int b = 10;

	std::cout << (a || b) << std::endl;// 1

	a = 10;
	b = 0;

	std::cout << (a || b) << std::endl;// 1 

	a = 0;
	b = 0;

	std::cout << (a || b) << std::endl;// 0

	return 0;
}