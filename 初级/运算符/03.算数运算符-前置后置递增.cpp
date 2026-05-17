#include<iostream>

int main3() {

	//前置递增
	int a = 10;
	++a;
	std::cout << a << std::endl; // 11

	//后置递增
	int b = 10;
	b++; //等价于b = b + 1
	std::cout << b << std::endl; // 11

	//区别
	//前置递增先对变量进行++，再计算表达式
	int a2 = 10;
	int b2 = ++a2 * 10;
	std::cout << a2 << std::endl;
	std::cout << b2 << std::endl;

	//后置递增先计算表达式，后对变量进行++
	int a3 = 10;
	int b3 = a3++ * 10;
	std::cout << a3 << std::endl;
	std::cout << b3 << std::endl;

	return 0;
}