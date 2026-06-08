#include<iostream>
#include<string>

class Building1
{
	//告诉编译器 goodGay全局函数 是 Building1类的好朋友，可以访问类中的私有内容
	friend void goodGay(Building1 * Building1);

public:

	Building1()
	{
		this->m_SittingRoom = "客厅";
		this->m_BedRoom = "卧室";
	}

public:
	std::string m_SittingRoom; //客厅

private:
	std::string m_BedRoom; //卧室
};


void goodGay(Building1 * building1)
{
	std::cout << "好基友正在访问： " << building1->m_SittingRoom << std::endl;
	std::cout << "好基友正在访问： " << building1->m_BedRoom << std::endl;
}

void test1()
{
	Building1 b;
	goodGay(&b);
}

int main1() {

	test1();

	return 0;
}