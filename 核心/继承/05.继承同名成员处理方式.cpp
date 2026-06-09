#include<iostream>

class Base5 {
public:
    Base5()
    {
        m_A = 100;
    }

    void func()
    {
        std::cout << "Base5 - func()调用" << std::endl;
    }

    void func(int a)
    {
        std::cout << "Base5 - func(int a)调用" << std::endl;
    }

public:
    int m_A;
};

class Son5 : public Base5 {
public:
    Son5()
    {
        m_A = 200;
    }

    //当子类与父类拥有同名的成员函数，子类会隐藏父类中所有版本的同名成员函数
    //如果想访问父类中被隐藏的同名成员函数，需要加父类的作用域
    void func()
    {
        std::cout << "Son5 - func()调用" << std::endl;
    }
public:
    int m_A;
};

void test51()
{
    Son5 s;

    std::cout << "Son5下的m_A = " << s.m_A << std::endl;
    std::cout << "Base5下的m_A = " << s.Base5::m_A << std::endl;

    s.func();
    s.Base5::func();
    s.Base5::func(10);

}
int main5() {

    test51();

    return 0;
}