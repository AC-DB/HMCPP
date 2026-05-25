#include<iostream>

//函数重载需要函数都在同一个作用域下
void func3()
{
	std::cout << "func3 的调用！" << std::endl;
}

void func3(int a)
{
	std::cout << "func3 (int a) 的调用！" << std::endl;
}

void func3(double a)
{
	std::cout << "func3 (double a)的调用！" << std::endl;
}

void func3(int a, double b)
{
	std::cout << "func3 (int a ,double b) 的调用！" << std::endl;
}

void func3(double a, int b)
{
	std::cout << "func3 (double a ,int b)的调用！" << std::endl;
}

//函数返回值不可以作为函数重载条件
//int func3(double a, int b)
//{
//	std::cout << "func3 (double a ,int b)的调用！" << std::endl;
//}


int main3() {

	func3();
	func3(10);
	func3(3.14);
	func3(10, 3.14);
	func3(3.14, 10);

	return 0;
}