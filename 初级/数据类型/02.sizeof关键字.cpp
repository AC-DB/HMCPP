#include<iostream>

int main2() {

	// 整型： short(2) int(4) long(4) long long(8)
	// 使用sizeof求数据类型占用内存大小
	// 语法：sizeof（数据类型/变量）

	std::cout << "short 类型所占内存空间为： " << sizeof(short) << std::endl;

	std::cout << "int 类型所占内存空间为： " << sizeof(int) << std::endl;

	std::cout << "long 类型所占内存空间为： " << sizeof(long) << std::endl;

	std::cout << "long long 类型所占内存空间为： " << sizeof(long long) << std::endl;

	return 0;
}