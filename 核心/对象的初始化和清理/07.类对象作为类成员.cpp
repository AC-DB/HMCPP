#include<iostream>

class Phone7
{
public:
	Phone7(std::string name)
	{
		m_Phone7Name = name;
		std::cout << "Phone7构造" << std::endl;
	}

	~Phone7()
	{
		std::cout << "Phone7析构" << std::endl;
	}

	std::string m_Phone7Name;

};

class Person7
{
public:

	//初始化列表可以告诉编译器调用哪一个构造函数
	Person7(std::string name, std::string pName) :m_Name(name), m_Phone7(pName)
	{
		std::cout << "Person7构造" << std::endl;
	}

	~Person7()
	{
		std::cout << "Person7析构" << std::endl;
	}

	void playGame()
	{
		std::cout << m_Name << " 使用" << m_Phone7.m_Phone7Name << " 牌手机! " << std::endl;
	}

	std::string m_Name;
	Phone7 m_Phone7;

};
void test71()
{
	//当类中成员是其他类对象时，我们称该成员为 对象成员
	//构造的顺序是 ：先调用对象成员的构造，再调用本类构造
	//析构顺序与构造相反
	Person7 p("张三", "苹果X");
	p.playGame();
}

int main7() {

	test71();

	return 0;
}