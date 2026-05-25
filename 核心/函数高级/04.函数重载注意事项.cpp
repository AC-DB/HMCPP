#include<iostream>

//函数重载注意事项
//1、引用作为重载条件

void func4(int& a)
{
	std::cout << "func4 (int &a) 调用 " << std::endl;
}

void func4(const int& a)
{
	std::cout << "func4 (const int &a) 调用 " << std::endl;
}


//2、函数重载碰到函数默认参数

void func42(int a, int b = 10)
{
	std::cout << "func42(int a, int b = 10) 调用" << std::endl;
}

void func42(int a)
{
	std::cout << "func42(int a) 调用" << std::endl;
}

int main4() {

	int a = 10;
	func4(a); //调用无const
	func4(10);//调用有const

	//func42(10); //碰到默认参数产生歧义，需要避免

	return 0;
}