#include<iostream>

//全局变量
int g_a = 10;
int g_b = 10;

//全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int main1() {

    //局部变量
    int a = 10;
    int b = 10;

    //打印地址
    std::cout << "局部变量a地址为： " << (int)&a << std::endl;
    std::cout << "局部变量b地址为： " << (int)&b << std::endl;

    std::cout << "全局变量g_a地址为： " << (int)&g_a << std::endl;
    std::cout << "全局变量g_b地址为： " << (int)&g_b << std::endl;

    //静态变量
    static int s_a = 10;
    static int s_b = 10;

    std::cout << "静态变量s_a地址为： " << (int)&s_a << std::endl;
    std::cout << "静态变量s_b地址为： " << (int)&s_b << std::endl;

    std::cout << "字符串常量地址为： " << (int)&"hello world" << std::endl;
    std::cout << "字符串常量地址为： " << (int)&"hello world1" << std::endl;

    std::cout << "全局常量c_g_a地址为： " << (int)&c_g_a << std::endl;
    std::cout << "全局常量c_g_b地址为： " << (int)&c_g_b << std::endl;

    const int c_l_a = 10;
    const int c_l_b = 10;
    std::cout << "局部常量c_l_a地址为： " << (int)&c_l_a << std::endl;
    std::cout << "局部常量c_l_b地址为： " << (int)&c_l_b << std::endl;

    return 0;
}