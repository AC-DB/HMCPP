#include<iostream>
#include<string>

//学生类
class Student2 {
public:
    void setName(std::string name) {
        m_name = name;
    }
    void setID(int id) {
        m_id = id;
    }

    void showStudent() {
        std::cout << "name:" << m_name << " ID:" << m_id << std::endl;
    }
public:
    std::string m_name;
    int m_id;
};

int main2() {

    Student2 stu;
    stu.setName("德玛西亚");
    stu.setID(250);
    stu.showStudent();

    return 0;
}