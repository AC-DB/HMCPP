#include<iostream>

//返回局部变量引用
int& test01() {
	int a = 10; //局部变量
	return a;
}

//返回静态变量引用
int& test02() {
	static int a = 20;
	return a;
}

int main4() {

	//不能返回局部变量的引用，局部变量会释放
	int& ref = test01();
	std::cout << "ref = " << ref << std::endl;
	std::cout << "ref = " << ref << std::endl;

	//如果函数做左值，那么必须返回引用
	int& ref2 = test02();
	std::cout << "ref2 = " << ref2 << std::endl;
	std::cout << "ref2 = " << ref2 << std::endl;

	test02() = 1000;

	std::cout << "ref2 = " << ref2 << std::endl;
	std::cout << "ref2 = " << ref2 << std::endl;

	return 0;
}