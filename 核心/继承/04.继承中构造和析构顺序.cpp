#include<iostream>

class Base4
{
public:
    Base4()
    {
        std::cout << "Base4构造函数!" << std::endl;
    }
    ~Base4()
    {
        std::cout << "Base4析构函数!" << std::endl;
    }
};

class Son4 : public Base4
{
public:
    Son4()
    {
        std::cout << "Son4构造函数!" << std::endl;
    }
    ~Son4()
    {
        std::cout << "Son4析构函数!" << std::endl;
    }

};

void test41()
{
    //继承中 先调用父类构造函数，再调用子类构造函数，析构顺序与构造相反
    Son4 s;
}

int main4() {

    test41();

    return 0;
}