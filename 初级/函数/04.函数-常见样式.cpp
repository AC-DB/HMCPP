#include<iostream>

//函数常见样式
//1、 无参无返
void test401()
{
	//void a = 10; //无类型不可以创建变量,原因无法分配内存
	std::cout << "this is test01" << std::endl;
	//test01(); 函数调用
}

//2、 有参无返
void test402(int a)
{
	std::cout << "this is test02" << std::endl;
	std::cout << "a = " << a << std::endl;
}

//3、无参有返
int test403()
{
	std::cout << "this is test03 " << std::endl;
	return 10;
}

//4、有参有返
int test404(int a, int b)
{
	std::cout << "this is test04 " << std::endl;
	int sum = a + b;
	return sum;
}

int main4() {
	test401();

	test402(10);

	test403();

	test404(10, 20);

	return 0;
}