#include<iostream>

class Person1
{
public:
	//构造函数
	Person1()
	{
		std::cout << "Person1的构造函数调用" << std::endl;
	}
	//析构函数
	~Person1()
	{
		std::cout << "Person1的析构函数调用" << std::endl;
	}

};

void test1()
{
	Person1 p;
}

int main1() {

	test1();

	Person1 p1;

	return 0;
}