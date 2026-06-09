#include<iostream>

class Base3
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C; //私有成员只是被隐藏了，但是还是会继承下去
};

//公共继承
class Son3 :public Base3
{
public:
    int m_D;
};

void test31()
{
    std::cout << "sizeof Son = " << sizeof(Son3) << std::endl;
}

int main3() {

    test31();

    return 0;
}