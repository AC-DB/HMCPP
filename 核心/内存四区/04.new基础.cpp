#include<iostream>

int* func4()
{
    int* a = new int(10);
    return a;
}

int main4() {

    int* p = func4();

    std::cout << *p << std::endl;
    std::cout << *p << std::endl;

    //利用delete释放堆区数据
    delete p;

    //std::cout << *p << std::endl; //报错，释放的空间不可访问

    return 0;
}