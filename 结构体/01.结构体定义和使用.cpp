#include<iostream>
#include<string>

//结构体定义
struct student
{
	//成员列表
	std::string name;  //姓名
	int age;      //年龄
	int score;    //分数
}stu3; //结构体变量创建方式3 

int main1() {

	//结构体变量创建方式1
	struct student stu1; //struct 关键字可以省略

	stu1.name = "张三";
	stu1.age = 18;
	stu1.score = 100;

	std::cout << "姓名：" << stu1.name << " 年龄：" << stu1.age << " 分数：" << stu1.score << std::endl;

	//结构体变量创建方式2
	struct student stu2 = { "李四",19,60 };

	std::cout << "姓名：" << stu2.name << " 年龄：" << stu2.age << " 分数：" << stu2.score << std::endl;

	stu3.name = "王五";
	stu3.age = 18;
	stu3.score = 80;

	std::cout << "姓名：" << stu3.name << " 年龄：" << stu3.age << " 分数：" << stu3.score << std::endl;

	return 0;
}