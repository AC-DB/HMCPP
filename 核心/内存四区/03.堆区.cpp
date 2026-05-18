#include<iostream>

int* func3()
{
    // 这里指针会被回收，但是也成功返回地址了
    int* a = new int(10);
    return a;
}

int main3() {

    int* p = func3();

    std::cout << *p << std::endl;
    std::cout << *p << std::endl;

    return 0;
}