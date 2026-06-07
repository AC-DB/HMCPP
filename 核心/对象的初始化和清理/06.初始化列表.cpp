#include<iostream>

class Person6 {
public:

	////传统方式初始化
	//Person6(int a, int b, int c) {
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//}

	//初始化列表方式初始化
	Person6(int a, int b, int c) :m_A(a), m_B(b), m_C(c) {}
	void PrintPerson6() {
		std::cout << "mA:" << m_A << std::endl;
		std::cout << "mB:" << m_B << std::endl;
		std::cout << "mC:" << m_C << std::endl;
	}
private:
	int m_A;
	int m_B;
	int m_C;
};

int main6() {

	Person6 p(1, 2, 3);
	p.PrintPerson6();

	return 0;
}