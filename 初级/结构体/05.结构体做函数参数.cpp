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

//值传递
void printStudent(student stu)
{
	stu.age = 28;
	std::cout << "子函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << std::endl;
}

//地址传递
void printStudent2(student* stu)
{
	stu->age = 28;
	std::cout << "子函数中 姓名：" << stu->name << " 年龄： " << stu->age << " 分数：" << stu->score << std::endl;
}

int main5() {

	student stu = { "张三",18,100 };
	//值传递
	printStudent(stu);
	std::cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << std::endl;

	std::cout << std::endl;

	//地址传递
	printStudent2(&stu);
	std::cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << std::endl;

	return 0;
}