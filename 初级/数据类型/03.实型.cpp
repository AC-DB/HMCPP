#include<iostream>

int main3() {

	// 1.单精度 float
	// 2.双精度 double
	float f1 = 3.14f;
	double d1 = 3.14;

	std::cout << "f1=" << f1 << std::endl;
	std::cout << "d1=" << d1 << std::endl;

	std::cout << "float  sizeof = " << sizeof(f1) << std::endl;
	std::cout << "double sizeof = " << sizeof(d1) << std::endl;

	//科学计数法
	float f2 = 3e2; // 3 * 10 ^ 2 
	std::cout << "f2 = " << f2 << std::endl;

	float f3 = 3e-2f;  // 3 * 0.1 ^ 2
	std::cout << "f3 = " << f3 << std::endl;

	return 0;
}