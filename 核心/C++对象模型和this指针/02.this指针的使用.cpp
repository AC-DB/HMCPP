#include<iostream>

class Person2
{
public:

	Person2(int age)
	{
		//1、当形参和成员变量同名时，可用this指针来区分
		this->age = age;
	}

	Person2& Person2AddPerson2(Person2 p)
	{
		this->age += p.age;
		//返回对象本身
		return *this;
	}

	int age;
};

void test21()
{
	Person2 p1(10);
	std::cout << "p1.age = " << p1.age << std::endl;

	Person2 p2(10);
	p2.Person2AddPerson2(p1).Person2AddPerson2(p1).Person2AddPerson2(p1);
	std::cout << "p2.age = " << p2.age << std::endl;
}

int main2() {

	test21();

	return 0;
}