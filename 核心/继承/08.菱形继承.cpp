#include<iostream>

class Animal
{
public:
    int m_Age;
};

//继承前加virtual关键字后，变为虚继承
//此时公共的父类Animal称为虚基类
class Sheep : virtual public Animal {};
class Tuo : virtual public Animal {};
class SheepTuo : public Sheep, public Tuo {};

void test81()
{
    SheepTuo st;
    st.Sheep::m_Age = 100;
    st.Tuo::m_Age = 200;

    std::cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << std::endl;
    std::cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << std::endl;
    std::cout << "st.m_Age = " << st.m_Age << std::endl;
}

int main8() {

    test81();

    return 0;
}