#include<iostream>

int main5() {

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	// 输入重量
	std::cout << "输入小猪1重量： ";
	std::cin >> num1;

	std::cout << "输入小猪2重量： ";
	std::cin >> num2;

	std::cout << "输入小猪3重量： ";
	std::cin >> num3;

	std::cout << "小猪重量分别是：" << num1 << " " << num2 << " " << num3 << std::endl;

	// 判断
	if (num1 > num2) {
		if (num1 > num3) {
			std::cout << "小猪1最重";
		}
		else {
			std::cout << "小猪3最重";
		}
	}
	else {
		if (num2 > num3) {
			std::cout << "小猪2最重";
		}
		else if (num3 > num2) {
			std::cout << "小猪3最重";
		}
	}
	return 0;
}