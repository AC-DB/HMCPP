#include<fstream>
#include<string>
#include<iostream>

class Person
{
public:
	char m_Name[64];
	int m_Age;
};

void test4()
{
	std::ifstream ifs("person.txt", std::ios::in | std::ios::binary);
	if (!ifs.is_open())
	{
		std::cout << "文件打开失败" << std::endl;
	}

	Person p;
	ifs.read((char*)&p, sizeof(p));

	std::cout << "姓名： " << p.m_Name << " 年龄： " << p.m_Age << std::endl;
}

int main4() {

	test4();

	return 0;
}