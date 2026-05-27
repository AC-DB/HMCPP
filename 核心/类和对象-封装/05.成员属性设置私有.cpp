#include<iostream>
#include<string>

class Person5 {
public:

    //姓名设置可读可写
    void setName(std::string name) {
        m_Name = name;
    }
    std::string getName()
    {
        return m_Name;
    }

    //获取年龄 
    int getAge() {
        return m_Age;
    }
    //设置年龄
    void setAge(int age) {
        if (age < 0 || age > 150) {
            std::cout << "你个老妖精!" << std::endl;
            return;
        }
        m_Age = age;
    }

    //情人设置为只写
    void setLover(std::string lover) {
        m_Lover = lover;
    }

private:
    std::string m_Name;     //可读可写  姓名
    int m_Age;              //只读  年龄
    std::string m_Lover;    //只写  情人
};


int main5() {

    Person5 p;
    //姓名设置
    p.setName("张三");
    std::cout << "姓名： " << p.getName() << std::endl;

    //年龄设置
    p.setAge(50);
    std::cout << "年龄： " << p.getAge() << std::endl;

    //情人设置
    p.setLover("苍井");
    //std::cout << "情人： " << p.m_Lover << std::endl;  //只写属性，不可以读取

    return 0;
}