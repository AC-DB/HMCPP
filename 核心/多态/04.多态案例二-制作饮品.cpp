#include<iostream>

//抽象制作饮品
class AbstractDrinking {
public:
    //烧水
    virtual void Boil() = 0;
    //冲泡
    virtual void Brew() = 0;
    //倒入杯中
    virtual void PourInCup() = 0;
    //加入辅料
    virtual void PutSomething() = 0;
    //规定流程
    void MakeDrink() {
        Boil();
        Brew();
        PourInCup();
        PutSomething();
    }
};

//制作咖啡
class Coffee : public AbstractDrinking {
public:
    //烧水
    virtual void Boil() {
        std::cout << "煮农夫山泉!" << std::endl;
    }
    //冲泡
    virtual void Brew() {
        std::cout << "冲泡咖啡!" << std::endl;
    }
    //倒入杯中
    virtual void PourInCup() {
        std::cout << "将咖啡倒入杯中!" << std::endl;
    }
    //加入辅料
    virtual void PutSomething() {
        std::cout << "加入牛奶!" << std::endl;
    }
};

//制作茶水
class Tea : public AbstractDrinking {
public:
    //烧水
    virtual void Boil() {
        std::cout << "煮自来水!" << std::endl;
    }
    //冲泡
    virtual void Brew() {
        std::cout << "冲泡茶叶!" << std::endl;
    }
    //倒入杯中
    virtual void PourInCup() {
        std::cout << "将茶水倒入杯中!" << std::endl;
    }
    //加入辅料
    virtual void PutSomething() {
        std::cout << "加入枸杞!" << std::endl;
    }
};

//业务函数
void DoWork(AbstractDrinking* drink) {
    drink->MakeDrink();
    delete drink;
}

void test41() {
    DoWork(new Coffee);
    std::cout << "--------------" << std::endl;
    DoWork(new Tea);
}

int main4() {

    test41();

    return 0;
}