#include<iostream>

class C41
{
    int  m_A; //默认是私有权限
};

struct C42
{
    int m_A;  //默认是公共权限
};

int main4() {

    C41 c1;
    //c1.m_A = 10; //错误，访问权限是私有

    C42 c2;
    c2.m_A = 10; //正确，访问权限是公共

    return 0;
}