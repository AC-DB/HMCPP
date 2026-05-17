#include<iostream>

int main4() {

	//1.创建方式
	char ch = 'a';
	std::cout << ch << std::endl;

	//2.内存大小
	std::cout << sizeof(char) << std::endl;

	//3.常见错误
	//ch = "abcde"; //错误，不可以用双引号
	//ch = 'abcde'; //错误，单引号内只能引用一个字符

	//4.对应的ASCII码 
	// a - 97
	// A - 65
	std::cout << (int)ch << std::endl;  //查看字符a对应的ASCII码
	ch = 97; //可以直接用ASCII给字符型变量赋值
	std::cout << ch << std::endl;

	return 0;
}