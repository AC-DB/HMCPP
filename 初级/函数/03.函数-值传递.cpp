#include<iostream>

void swap3(int num1, int num2)
{
	std::cout << "交换前：" << std::endl;
	std::cout << "num1 = " << num1 << std::endl;
	std::cout << "num2 = " << num2 << std::endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	std::cout << "交换后：" << std::endl;
	std::cout << "num1 = " << num1 << std::endl;
	std::cout << "num2 = " << num2 << std::endl;

	//return ; 当函数声明时候，不需要返回值，可以不写return
}

int main3() {

	int a = 10;
	int b = 20;

	swap3(a, b);

	std::cout << "mian中的 a = " << a << std::endl;
	std::cout << "mian中的 b = " << b << std::endl;

	return 0;
}