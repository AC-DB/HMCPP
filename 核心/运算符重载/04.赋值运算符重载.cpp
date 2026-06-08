#include<iostream>

class Person4
{
public:

	Person4(int age)
	{
		//将年龄数据开辟到堆区
		m_Age = new int(age);
	}

	//重载赋值运算符 
	Person4& operator=(Person4 &p)
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		//编译器提供的代码是浅拷贝
		//m_Age = p.m_Age;

		//提供深拷贝 解决浅拷贝的问题
		m_Age = new int(*p.m_Age);

		//返回自身
		return *this;
	}

	~Person4()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}

	//年龄的指针
	int *m_Age;

};

void test41()
{
	Person4 p1(18);

	Person4 p2(20);

	Person4 p3(30);

	p3 = p2 = p1; //赋值操作

	std::cout << "p1的年龄为：" << *p1.m_Age << std::endl;

	std::cout << "p2的年龄为：" << *p2.m_Age << std::endl;

	std::cout << "p3的年龄为：" << *p3.m_Age << std::endl;
}

int main4() {

	test41();

	//int a = 10;
	//int b = 20;
	//int c = 30;

	//c = b = a;
	//std::cout << "a = " << a << std::endl;
	//std::cout << "b = " << b << std::endl;
	//std::cout << "c = " << c << std::endl;

	return 0;
}