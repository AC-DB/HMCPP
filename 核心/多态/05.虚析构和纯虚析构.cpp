#include<iostream>
#include<string>

class Animal {
public:

    Animal()
    {
        std::cout << "Animal 构造函数调用！" << std::endl;
    }
    virtual void Speak() = 0;

    //析构函数加上virtual关键字，变成虚析构函数
    //virtual ~Animal()
    //{
    //	std::cout << "Animal虚析构函数调用！" << std::endl;
    //}

    virtual ~Animal() = 0;
};

Animal::~Animal()
{
    std::cout << "Animal 纯虚析构函数调用！" << std::endl;
}

//和包含普通纯虚函数的类一样，包含了纯虚析构函数的类也是一个抽象类。不能够被实例化。

class Cat : public Animal {
public:
    Cat(std::string name)
    {
        std::cout << "Cat构造函数调用！" << std::endl;
        m_Name = new std::string(name);
    }
    virtual void Speak()
    {
        std::cout << *m_Name << "小猫在说话!" << std::endl;
    }
    ~Cat()
    {
        std::cout << "Cat析构函数调用!" << std::endl;
        if (this->m_Name != NULL) {
            delete m_Name;
            m_Name = NULL;
        }
    }

public:
    std::string* m_Name;
};

void test51()
{
    Animal* animal = new Cat("Tom");
    animal->Speak();

    //通过父类指针去释放，会导致子类对象可能清理不干净，造成内存泄漏
    //怎么解决？给基类增加一个虚析构函数
    //虚析构函数就是用来解决通过父类指针释放子类对象
    delete animal;
}

int main5() {

    test51();

    return 0;
}