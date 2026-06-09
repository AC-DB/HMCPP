#include<iostream>

class Base71 {
public:
    Base71()
    {
        m_A = 100;
    }
public:
    int m_A;
};

class Base72 {
public:
    Base72()
    {
        m_A = 200;  //开始是m_B 不会出问题，但是改为mA就会出现不明确
    }
public:
    int m_A;
};

//语法：class 子类：继承方式 父类1 ，继承方式 父类2 
class Son7 : public Base72, public Base71
{
public:
    Son7()
    {
        m_C = 300;
        m_D = 400;
    }
public:
    int m_C;
    int m_D;
};


//多继承容易产生成员同名的情况
//通过使用类名作用域可以区分调用哪一个基类的成员
void test71()
{
    Son7 s;
    std::cout << "sizeof Son7 = " << sizeof(s) << std::endl;
    std::cout << s.Base71::m_A << std::endl;
    std::cout << s.Base72::m_A << std::endl;
}

int main7() {

    test71();

    return 0;
}