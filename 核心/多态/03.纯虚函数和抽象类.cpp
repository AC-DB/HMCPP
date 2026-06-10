#include<iostream>

class Base3
{
public:
    //纯虚函数
    //类中只要有一个纯虚函数就称为抽象类
    //抽象类无法实例化对象
    //子类必须重写父类中的纯虚函数，否则也属于抽象类
    virtual void func() = 0;
};

class Son3 :public Base3
{
public:
    void func()
    {
        std::cout << "func调用" << std::endl;
    };
};

void test31()
{
    Base3* base = NULL;
    //base = new Base3; // 错误，抽象类无法实例化对象
    base = new Son3;
    base->func();
    delete base;//记得销毁
}

int main3() {

    test31();

    return 0;
}