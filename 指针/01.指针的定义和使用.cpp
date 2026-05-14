#include<iostream>

int main1() {

	//1、指针的定义
	int a = 10; //定义整型变量a

	//指针定义语法： 数据类型 * 变量名 ;
	int* p;

	//指针变量赋值
	p = &a; //指针指向变量a的地址
	std::cout << &a << std::endl; //打印数据a的地址
	std::cout << p << std::endl;  //打印指针变量p

	//2、指针的使用
	//通过*操作指针变量指向的内存
	std::cout << "*p = " << *p << std::endl;

	return 0;
}