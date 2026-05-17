#include<iostream>

//声明可以多次，定义只能一次
//声明
int max5(int a, int b);
int max5(int a, int b);
//定义
int max5(int a, int b)
{
	return a > b ? a : b;
}

int main5() {

	int a = 100;
	int b = 200;

	std::cout << max5(a, b) << std::endl;

	return 0;
}