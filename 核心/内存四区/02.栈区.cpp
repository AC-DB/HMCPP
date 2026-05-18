#include<iostream>

int* func2()
{
    int a = 10;
    return &a;
}

int main2() {

    int* p = func2();

    // 虽然不能这样做，但是编译器帮你保留了。。。。。
    std::cout << *p << std::endl;
    std::cout << *p << std::endl;
    std::cout << *p << std::endl;
    std::cout << *p << std::endl;
    std::cout << *p << std::endl;

    return 0;
}