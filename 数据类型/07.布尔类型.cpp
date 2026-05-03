#include<iostream>

int main7() {

	// 1. 创建bool型数据
	bool flag = true; 
	std::cout << flag << std::endl; // 1

	flag = false;
	std::cout << flag << std::endl; // 0

	// 2. bool类型占用空间
	std::cout << "size of bool = " << sizeof(bool) << std::endl; //1

	return 0;
}