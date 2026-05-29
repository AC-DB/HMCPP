#include<iostream>

class Person3 {
public:
	Person3() {
		std::cout << "无参构造函数!" << std::endl;
		mAge = 0;
	}
	Person3(int age) {
		std::cout << "有参构造函数!" << std::endl;
		mAge = age;
	}
	Person3(const Person3& p) {
		std::cout << "拷贝构造函数!" << std::endl;
		mAge = p.mAge;
	}
	//析构函数在释放内存之前调用
	~Person3() {
		std::cout << "析构函数!" << std::endl;
	}
public:
	int mAge;
};

//1. 使用一个已经创建完毕的对象来初始化一个新对象
void test31() {

	Person3 man(100); //p对象已经创建完毕
	Person3 newman(man); //调用拷贝构造函数
	Person3 newman2 = man; //拷贝构造

	//Person3 newman3;
	//newman3 = man; //不是调用拷贝构造函数，赋值操作
}

//2. 值传递的方式给函数参数传值
//相当于Person3 p1 = p;
void doWork(Person3 p1) {}
void test32() {
	Person3 p; //无参构造函数
	doWork(p);
}

//3. 以值方式返回局部对象
Person3 doWork2()
{
	Person3 p1;
	std::cout << (int*)&p1 << std::endl;
	return p1;
}

void test33()
{
	Person3 p = doWork2();
	std::cout << (int*)&p << std::endl;
}

int main3() {

	//test31();
	//test32();
	test33();

	return 0;
}