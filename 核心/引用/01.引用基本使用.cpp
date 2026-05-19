#include<iostream>

int main1() {

	int a = 10;
	int& b = a;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	b = 100;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	return 0;
}