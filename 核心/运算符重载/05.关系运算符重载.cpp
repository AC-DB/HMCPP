#include<iostream>
#include<string>

class Person5
{
public:
	Person5(std::string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	};

	bool operator==(Person5& p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator!=(Person5& p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	std::string m_Name;
	int m_Age;
};

void test51()
{
	//int a = 0;
	//int b = 0;

	Person5 a("孙悟空", 18);
	Person5 b("孙悟空", 18);

	if (a == b)
	{
		std::cout << "a和b相等" << std::endl;
	}
	else
	{
		std::cout << "a和b不相等" << std::endl;
	}

	if (a != b)
	{
		std::cout << "a和b不相等" << std::endl;
	}
	else
	{
		std::cout << "a和b相等" << std::endl;
	}
}

int main5() {

	test51();

	return 0;
}