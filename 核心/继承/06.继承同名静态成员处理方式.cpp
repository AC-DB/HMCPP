#include<iostream>

class Base6 {
public:
    static void func()
    {
        std::cout << "Base6 - static void func()" << std::endl;
    }
    static void func(int a)
    {
        std::cout << "Base6 - static void func(int a)" << std::endl;
    }

    static int m_A;
};

int Base6::m_A = 100;

class Son6 : public Base6 {
public:
    static void func()
    {
        std::cout << "Son6 - static void func()" << std::endl;
    }
    static int m_A;
};

int Son6::m_A = 200;

//同名成员属性
void test61()
{
    //通过对象访问
    std::cout << "通过对象访问： " << std::endl;
    Son6 s;
    std::cout << "Son6  下 m_A = " << s.m_A << std::endl;
    std::cout << "Base6 下 m_A = " << s.Base6::m_A << std::endl;

    //通过类名访问
    std::cout << "通过类名访问： " << std::endl;
    std::cout << "Son6  下 m_A = " << Son6::m_A << std::endl;
    std::cout << "Base6 下 m_A = " << Son6::Base6::m_A << std::endl;
}

//同名成员函数
void test62()
{
    //通过对象访问
    std::cout << "通过对象访问： " << std::endl;
    Son6 s;
    s.func();
    s.Base6::func();

    std::cout << "通过类名访问： " << std::endl;
    Son6::func();
    Son6::Base6::func();
    //出现同名，子类会隐藏掉父类中所有同名成员函数，需要加作作用域访问
    Son6::Base6::func(100);
}
int main6() {

    //test61();
    test62();

    return 0;
}