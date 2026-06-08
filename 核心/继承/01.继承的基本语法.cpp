#include<iostream>

//公共页面
class BasePage
{
public:
    void header()
    {
        std::cout << "首页、公开课、登录、注册...（公共头部）" << std::endl;
    }

    void footer()
    {
        std::cout << "帮助中心、交流合作、站内地图...(公共底部)" << std::endl;
    }
    void left()
    {
        std::cout << "Java,Python,C++...(公共分类列表)" << std::endl;
    }

};

//Java页面
class Java : public BasePage
{
public:
    void content()
    {
        std::cout << "JAVA学科视频" << std::endl;
    }
};
//Python页面
class Python : public BasePage
{
public:
    void content()
    {
        std::cout << "Python学科视频" << std::endl;
    }
};
//C++页面
class CPP : public BasePage
{
public:
    void content()
    {
        std::cout << "C++学科视频" << std::endl;
    }
};

void test1()
{
    //Java页面
    std::cout << "Java下载视频页面如下： " << std::endl;
    Java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();
    std::cout << "--------------------" << std::endl;

    //Python页面
    std::cout << "Python下载视频页面如下： " << std::endl;
    Python py;
    py.header();
    py.footer();
    py.left();
    py.content();
    std::cout << "--------------------" << std::endl;

    //C++页面
    std::cout << "C++下载视频页面如下： " << std::endl;
    CPP cp;
    cp.header();
    cp.footer();
    cp.left();
    cp.content();

}

int main1() {

    test1();

    return 0;
}