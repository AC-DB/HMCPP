#include<iostream>

class MyInteger3 {

	friend std::ostream& operator<<(std::ostream& out, MyInteger3 myint);

public:
	MyInteger3() {
		m_Num = 0;
	}
	//前置++
	MyInteger3& operator++() {
		//先++
		m_Num++;
		//再返回
		return *this;
	}

	//后置++
	MyInteger3 operator++(int) {
		//先返回
		MyInteger3 temp = *this; //记录当前本身的值，然后让本身的值加1，但是返回的是以前的值，达到先返回后++；
		m_Num++;
		return temp;
	}

private:
	int m_Num;
};

std::ostream& operator<<(std::ostream& out, MyInteger3 myint) {
	out << myint.m_Num;
	return out;
}

//前置++ 先++ 再返回
void test31() {
	MyInteger3 myInt;
	std::cout << ++myInt << std::endl;
	std::cout << myInt << std::endl;
}

//后置++ 先返回 再++
void test32() {

	MyInteger3 myInt;
	std::cout << myInt++ << std::endl;
	std::cout << myInt << std::endl;
}

int main3() {

	test31();
	//test32();

	return 0;
}