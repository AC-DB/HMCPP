#pragma once
#include <iostream>
#include "worker.hpp"

//经理类
class Manager :public Worker
{
public:

    Manager(int id, std::string name, int dId);

    //显示个人信息
    virtual void showInfo();

    //获取职工岗位名称
    virtual std::string getDeptName();
};