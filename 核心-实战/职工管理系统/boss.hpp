#pragma once
#include <iostream>
#include "worker.hpp"

//老板类
class Boss :public Worker
{
public:

    Boss(int id, std::string name, int dId);

    //显示个人信息
    virtual void showInfo();

    //获取职工岗位名称
    virtual std::string getDeptName();
};