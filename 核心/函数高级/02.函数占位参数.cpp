#include<iostream>

//函数占位参数 ，占位参数也可以有默认参数
void func2(int a, int) {
	std::cout << "this is func2" << std::endl;
}

int main2() {

	func2(10, 10); //占位参数必须填补

	return 0;
}