#include<iostream>

int main1() {

	int a1 = 10;
	int b1 = 3;

	std::cout << a1 + b1 << std::endl;
	std::cout << a1 - b1 << std::endl;
	std::cout << a1 * b1 << std::endl;
	std::cout << a1 / b1 << std::endl;  //两个整数相除结果依然是整数

	int a2 = 10;
	int b2 = 20;
	std::cout << a2 / b2 << std::endl;

	int a3 = 10;
	int b3 = 0;
	//std::cout << a3 / b3 << std::endl; //报错，除数不可以为0


	//两个小数可以相除
	double d1 = 0.5;
	double d2 = 0.25;
	std::cout << d1 / d2 << std::endl;

	return 0;
}