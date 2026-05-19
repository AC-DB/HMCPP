#include<iostream>

//1. 值传递
void mySwap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

//2. 地址传递
void mySwap02(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3. 引用传递
void mySwap03(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main3() {

	int a = 10;
	int b = 20;

	mySwap01(a, b);
	std::cout << "a:" << a << " b:" << b << std::endl;

	mySwap02(&a, &b);
	std::cout << "a:" << a << " b:" << b << std::endl;
	
	mySwap03(a, b);
	std::cout << "a:" << a << " b:" << b << std::endl;

	return 0;
}