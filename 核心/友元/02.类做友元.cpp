#include<iostream>
#include<string>

class Building2;
class goodGay2
{
public:

	goodGay2();
	void visit();

private:
	Building2* building;
};

class Building2
{
	//告诉编译器 goodGay2类是Building2类的好朋友，可以访问到Building2类中私有内容
	friend class goodGay2;

public:
	Building2();

public:
	std::string m_SittingRoom; //客厅
private:
	std::string m_BedRoom;//卧室
};

Building2::Building2()
{
	this->m_SittingRoom = "客厅";
	this->m_BedRoom = "卧室";
}

goodGay2::goodGay2()
{
	building = new Building2;
}

void goodGay2::visit()
{
	std::cout << "好基友正在访问" << building->m_SittingRoom << std::endl;
	std::cout << "好基友正在访问" << building->m_BedRoom << std::endl;
}

void test2()
{
	goodGay2 gg;
	gg.visit();
}

int main2() {

	test2();

	return 0;
}