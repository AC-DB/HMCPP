#include<iostream>

int main6() {

	// 三目运算符
	int a = 10;
	int b = 20;
	int c = 0;

	c = a > b ? a : b;
	std::cout << "c = " << c << std::endl;

	//C++中三目运算符返回的是变量,可以继续赋值

	(a > b ? a : b) = 100;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;

	return 0;
}