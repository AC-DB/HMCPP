#include<iostream>
#include<string>

int main8() {

	//整型输入
	int a = 0;
	std::cout << "请输入整型变量：" << std::endl;
	std::cin >> a;
	std::cout << a << std::endl;

	//浮点型输入
	double d = 0;
	std::cout << "请输入浮点型变量：" << std::endl;
	std::cin >> d;
	std::cout << d << std::endl;

	//字符型输入
	char ch = 0;
	std::cout << "请输入字符型变量：" << std::endl;
	std::cin >> ch;
	std::cout << ch << std::endl;

	//字符串型输入
	std::string str;
	std::cout << "请输入字符串型变量：" << std::endl;
	std::cin >> str;
	std::cout << str << std::endl;

	//布尔类型输入
	bool flag = true;
	std::cout << "请输入布尔型变量：" << std::endl;
	std::cin >> flag;
	std::cout << flag << std::endl;

	return 0;
}