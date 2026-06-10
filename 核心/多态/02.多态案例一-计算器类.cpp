#include<iostream>
#include<string>

//普通实现
class Calculator2 {
public:
    int getResult(std::string oper)
    {
        if (oper == "+") {
            return m_Num1 + m_Num2;
        }
        else if (oper == "-") {
            return m_Num1 - m_Num2;
        }
        else if (oper == "*") {
            return m_Num1 * m_Num2;
        }
        else {
            return 0;
        }
        //如果要提供新的运算，需要修改源码
    }
public:
    int m_Num1;
    int m_Num2;
};

void test21()
{
    //普通实现测试
    Calculator2 c;
    c.m_Num1 = 10;
    c.m_Num2 = 10;
    std::cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << std::endl;

    std::cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << std::endl;

    std::cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << std::endl;
}

//多态实现
//抽象计算器类
//多态优点：代码组织结构清晰，可读性强，利于前期和后期的扩展以及维护
class AbstractCalculator2
{
public:

    virtual int getResult()
    {
        return 0;
    }

    int m_Num1;
    int m_Num2;
};

//加法计算器
class AddCalculator2 :public AbstractCalculator2
{
public:
    int getResult()
    {
        return m_Num1 + m_Num2;
    }
};

//减法计算器
class SubCalculator2 :public AbstractCalculator2
{
public:
    int getResult()
    {
        return m_Num1 - m_Num2;
    }
};

//乘法计算器
class MulCalculator2 :public AbstractCalculator2
{
public:
    int getResult()
    {
        return m_Num1 * m_Num2;
    }
};

void test22()
{
    //创建加法计算器
    AbstractCalculator2* abc = new AddCalculator2;
    abc->m_Num1 = 10;
    abc->m_Num2 = 10;
    std::cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << std::endl;
    delete abc;  //用完了记得销毁

    //创建减法计算器
    abc = new SubCalculator2;
    abc->m_Num1 = 10;
    abc->m_Num2 = 10;
    std::cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << std::endl;
    delete abc;

    //创建乘法计算器
    abc = new MulCalculator2;
    abc->m_Num1 = 10;
    abc->m_Num2 = 10;
    std::cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << std::endl;
    delete abc;
}

int main2() {

    //test21();

    test22();

    return 0;
}