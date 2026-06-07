#include<iostream>

//空指针访问成员函数
class Person3 {
public:

	void ShowClassName() {
		std::cout << "我是Person3类!" << std::endl;
	}

	void ShowPerson3() {
		if (this == NULL) {
			return;
		}
		std::cout << mAge << std::endl;
	}

public:
	int mAge;
};

void test31()
{
	Person3* p = NULL;
	p->ShowClassName(); //空指针，可以调用成员函数
	p->ShowPerson3();  //但是如果成员函数中用到了this指针，就不可以了
}

int main3() {

	test31();

	return 0;
}