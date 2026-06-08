#include<iostream>
#include<string>

class MyPrint
{
public:
	void operator()(std::string text)
	{
		std::cout << text << std::endl;
	}

};
void test61()
{
	//重载的（）操作符 也称为仿函数
	MyPrint myFunc;
	myFunc("hello world");
}


class MyAdd6
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

void test62()
{
	MyAdd6 add;
	int ret = add(10, 10);
	std::cout << "ret = " << ret << std::endl;

	//匿名对象调用  
	std::cout << "MyAdd6()(100,100) = " << MyAdd6()(100, 100) << std::endl;
}

int main6() {

	test61();
	test62();

	return 0;
}