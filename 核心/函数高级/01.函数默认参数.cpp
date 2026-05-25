#include<iostream>

int func1(int a, int b = 10, int c = 10) {
	return a + b + c;
}

//1. 如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都要有默认值
//2. 如果函数声明有默认值，函数实现的时候就不能有默认参数
int func12(int a = 10, int b = 10);
int func12(int a, int b) {
	return a + b;
}

int main1() {

	std::cout << "ret = " << func1(20, 20) << std::endl;
	std::cout << "ret = " << func1(100) << std::endl;

	return 0;
}