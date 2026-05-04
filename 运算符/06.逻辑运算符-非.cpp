#include<iostream>

int main6() {

	//逻辑运算符  --- 非 !
	int a = 10;

	// C++ 中除了0全是真
	std::cout << !a << std::endl; // 0

	std::cout << !!a << std::endl; // 1

	return 0;
}