#include<iostream>

class Person4 {
public:
	//无参（默认）构造函数
	Person4() {
		std::cout << "无参构造函数!" << std::endl;
	}
	//有参构造函数
	Person4(int a) {
		age = a;
		std::cout << "有参构造函数!" << std::endl;
	}
	//拷贝构造函数
	Person4(const Person4& p) {
		age = p.age;
		std::cout << "拷贝构造函数!" << std::endl;
	}
	//析构函数
	~Person4() {
		std::cout << "析构函数!" << std::endl;
	}
public:
	int age;
};

void test41()
{
	Person4 p1(18);
	//如果不写拷贝构造，编译器会自动添加拷贝构造，并且做浅拷贝操作
	Person4 p2(p1);

	std::cout << "p2的年龄为： " << p2.age << std::endl;
}

void test42()
{
	//如果用户提供有参构造，编译器不会提供默认构造，会提供拷贝构造
	Person4 p1; //此时如果用户自己没有提供默认构造，会出错
	Person4 p2(10); //用户提供的有参
	Person4 p3(p2); //此时如果用户没有提供拷贝构造，编译器会提供

	//如果用户提供拷贝构造，编译器不会提供其他构造函数
	Person4 p4; //此时如果用户自己没有提供默认构造，会出错
	Person4 p5(10); //此时如果用户自己没有提供有参，会出错
	Person4 p6(p5); //用户自己提供拷贝构造
}

int main4() {

	test41();

	return 0;
}