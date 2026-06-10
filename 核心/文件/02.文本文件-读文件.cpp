#include<fstream>
#include<iostream>
#include<string>

void test2()
{
	std::ifstream ifs;
	ifs.open("test.txt", std::ios::in);

	if (!ifs.is_open())
	{
		std::cout << "文件打开失败" << std::endl;
		return;
	}

	//第一种方式
	char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		std::cout << buf << std::endl;
	}

	//第二种
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf,sizeof(buf)))
	//{
	//	std::cout << buf << std::endl;
	//}

	//第三种
	//std::string buf;
	//while (getline(ifs, buf))
	//{
	//	std::cout << buf << std::endl;
	//}

	//第四种
	//char c;
	//while ((c = ifs.get()) != EOF)
	//{
	//	std::cout << c;
	//}

	//ifs.close();

}

int main2() {

	test2();

	return 0;
}