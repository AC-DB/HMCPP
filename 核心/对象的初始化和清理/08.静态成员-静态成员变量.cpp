#include<iostream>

class Person8
{

public:

	static int m_A; //静态成员变量

	//静态成员变量特点：
	//1 在编译阶段分配内存
	//2 类内声明，类外初始化
	//3 所有对象共享同一份数据

private:
	static int m_B; //静态成员变量也是有访问权限的
};
int Person8::m_A = 10;
int Person8::m_B = 10;

void test81()
{
	//静态成员变量两种访问方式

	//1、通过对象
	Person8 p1;
	p1.m_A = 100;
	std::cout << "p1.m_A = " << p1.m_A << std::endl;

	Person8 p2;
	p2.m_A = 200;
	std::cout << "p1.m_A = " << p1.m_A << std::endl; //共享同一份数据
	std::cout << "p2.m_A = " << p2.m_A << std::endl;

	//2、通过类名
	std::cout << "m_A = " << Person8::m_A << std::endl;

	//std::cout << "m_B = " << Person8::m_B << std::endl; //私有权限访问不到
}

int main8() {

	test81();

	return 0;
}