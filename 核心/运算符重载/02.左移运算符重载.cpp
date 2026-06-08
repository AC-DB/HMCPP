#include<iostream>

class Person2 {
	friend std::ostream& operator<<(std::ostream& out, Person2& p);

public:

	Person2(int a, int b)
	{
		this->m_A = a;
		this->m_B = b;
	}

	//成员函数 实现不了  p << std::cout 不是我们想要的效果
	//void operator<<(Person& p){
	//}

private:
	int m_A;
	int m_B;
};

//全局函数实现左移重载
//ostream对象只能有一个
std::ostream& operator<<(std::ostream& out, Person2& p) {
	out << "a:" << p.m_A << " b:" << p.m_B;
	return out;
}

void test2() {

	Person2 p1(10, 20);

	std::cout << p1 << "hello world" << std::endl; //链式编程
}

int main2() {

	test2();

	return 0;
}