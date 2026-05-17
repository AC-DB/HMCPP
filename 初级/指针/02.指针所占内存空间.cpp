#include<iostream>

int main2() {

	int a = 10;

	int* p;
	p = &a; //指针指向数据a的地址

	std::cout << *p << std::endl; //* 解引用
	std::cout << sizeof(p) << std::endl;
	std::cout << sizeof(char*) << std::endl;
	std::cout << sizeof(float*) << std::endl;
	std::cout << sizeof(double*) << std::endl;

	return 0;
}