#include<iostream>

int main5() {

	int a = 10;
	int b = 10;

	//const修饰的是指针，指针指向可以改，指针指向的值不可以更改
	// 就是 const * 代表取*后的数是常量不能变
	const int* p1 = &a;
	p1 = &b; //正确
	//*p1 = 100;  报错


	//const修饰的是常量，指针指向不可以改，指针指向的值可以更改
	// 代表 const 后面的指针变量不能变
	int* const p2 = &a;
	//p2 = &b; //错误
	*p2 = 100; //正确

	//const既修饰指针又修饰常量
	const int* const p3 = &a;
	//p3 = &b; //错误
	//*p3 = 100; //错误

	return 0;
}