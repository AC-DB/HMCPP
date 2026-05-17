#include<iostream>

int add2(int num1, int num2) {
	int num = num1 + num2;

	return num;
}

int main2() {

	int a = 10;
	int b = 20;

	int c = add2(a, b);

	std::cout << c << std::endl;

	return 0;
}