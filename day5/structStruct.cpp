#include<iostream>
using namespace std;

struct STU{
    string name;
    int age;
    float gpa;
};

struct Teacher
{
    int id;
    string name;
    int age;
    STU student;
};

int main(){
    Teacher t1 = {101, "老张", 50, {"张三", 20, 3.5}};
    cout << "老张的id是：" << t1.id << endl;
    cout << "老张的姓名是：" << t1.name << endl;
    cout << "老张的年龄是：" << t1.age << endl;
    cout << "老张辅导的学生姓名是：" << t1.student.name << endl;
    cout << "老张辅导的学生年龄是：" << t1.student.age << endl;
    cout << "老张辅导的学生gpa是：" << t1.student.gpa << endl;
    return 0;
}

