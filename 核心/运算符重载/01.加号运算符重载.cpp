#include<iostream>

class Person1 {
public:
	Person1() {};
	Person1(int a, int b)
	{
		this->m_A = a;
		this->m_B = b;
	}
	//成员函数实现 + 号运算符重载
	Person1 operator+(const Person1& p) {
		Person1 temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}

public:
	int m_A;
	int m_B;
};

//全局函数实现 + 号运算符重载
//Person1 operator+(const Person1& p1, const Person1& p2) {
//	Person1 temp(0, 0);
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}

//运算符重载 可以发生函数重载 
Person1 operator+(const Person1& p2, int val)
{
	Person1 temp;
	temp.m_A = p2.m_A + val;
	temp.m_B = p2.m_B + val;
	return temp;
}

void test1() {

	Person1 p1(10, 10);
	Person1 p2(20, 20);

	//成员函数方式
	Person1 p3 = p2 + p1;  //相当于 p2.operaor+(p1)
	std::cout << "mA:" << p3.m_A << " mB:" << p3.m_B << std::endl;


	Person1 p4 = p3 + 10; //相当于 operator+(p3,10)
	std::cout << "mA:" << p4.m_A << " mB:" << p4.m_B << std::endl;

}

int main1() {

	test1();

	return 0;
}