#include<iostream>
#include<string>

int main6() {

	// 1.C语言风格
	// 注意 char 字符串名 []
	// 注意 等号后面要双引号
	char str[] = "hello world";
	std::cout << str << std::endl;

	// 2.C++风格
	// 包含头文件 <string>
	// 注意string要使用 std::string 
	std::string str2 = "hello world";
	std::cout << str2 << std::endl;

	return 0;
}