#include<iostream>
#include<string>

class Building3;
class goodGay3
{
public:

	goodGay3();
	void visit(); //只让visit函数作为Building3的好朋友，可以发访问Building3中私有内容
	void visit2();

private:
	Building3* building;
};

class Building3
{
	//告诉编译器  goodGay3类中的visit成员函数 是Building3好朋友，可以访问私有内容
	friend void goodGay3::visit();

public:
	Building3();

public:
	std::string m_SittingRoom; //客厅
private:
	std::string m_BedRoom;//卧室
};

Building3::Building3()
{
	this->m_SittingRoom = "客厅";
	this->m_BedRoom = "卧室";
}

goodGay3::goodGay3()
{
	building = new Building3;
}

void goodGay3::visit()
{
	std::cout << "好基友正在访问" << building->m_SittingRoom << std::endl;
	std::cout << "好基友正在访问" << building->m_BedRoom << std::endl;
}

void goodGay3::visit2()
{
	std::cout << "好基友正在访问" << building->m_SittingRoom << std::endl;
	//std::cout << "好基友正在访问" << building->m_BedRoom << std::endl;
}

void test3()
{
	goodGay3  gg;
	gg.visit();
}

int main3() {

	test3();

	return 0;
}