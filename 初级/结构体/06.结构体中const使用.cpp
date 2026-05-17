#include<iostream>
#include<string>

//学生结构体定义
struct student
{
	//成员列表
	std::string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

//const使用场景 减少数据的复制开销，改为地址传递节省内存
void printStudent(const student* stu) //加const防止函数体中的误操作
{
	//stu->age = 100; //操作失败，因为加了const修饰
	std::cout << "姓名：" << stu->name << " 年龄：" << stu->age << " 分数：" << stu->score << std::endl;

}

int main6() {

	student stu = { "张三",18,100 };

	printStudent(&stu);

	return 0;
}