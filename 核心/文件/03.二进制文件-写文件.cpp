#include <fstream>
#include <string>

class Person3
{
public:
	char m_Name[64];
	int m_Age;
};

//二进制文件  写文件
void test3()
{
	//1、包含头文件

	//2、创建输出流对象
	std::ofstream ofs("person.txt", std::ios::out | std::ios::binary);

	//3、打开文件
	//ofs.open("person.txt", std::ios::out | std::ios::binary);

	Person3 p = { "张三"  , 18 };

	//4、写文件
	ofs.write((const char*)&p, sizeof(p));

	//5、关闭文件
	ofs.close();
}

int main3() {

	test3();

	return 0;
}