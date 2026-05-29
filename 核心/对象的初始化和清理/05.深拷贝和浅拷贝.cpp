#include<iostream>

class Person5 {
public:
	//无参（默认）构造函数
	Person5() {
		std::cout << "无参构造函数!" << std::endl;
	}
	//有参构造函数
	Person5(int age, int height) {

		std::cout << "有参构造函数!" << std::endl;

		m_age = age;
		m_height = new int(height);

	}
	//拷贝构造函数  
	Person5(const Person5& p) {
		std::cout << "拷贝构造函数!" << std::endl;
		//如果不利用深拷贝在堆区创建新内存，会导致浅拷贝带来的重复释放堆区问题
		m_age = p.m_age;
		m_height = new int(*p.m_height);

	}

	//析构函数
	~Person5() {
		std::cout << "析构函数!" << std::endl;
		if (m_height != NULL)
		{
			delete m_height;
		}
	}
public:
	int m_age;
	int* m_height;
};

void test51()
{
	Person5 p1(18, 180);

	Person5 p2(p1);

	std::cout << "p1的年龄： " << p1.m_age << " 身高： " << *p1.m_height << std::endl;

	std::cout << "p2的年龄： " << p2.m_age << " 身高： " << *p2.m_height << std::endl;
}

int main5() {

	test51();

	return 0;
}