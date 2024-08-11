#include<iostream>
using namespace std;

struct STU{
    string name;
    int age;
    float gpa;
};

int main(){
    STU s1 = {"张三",25,4.0};
    STU *p = &s1;
    cout<<"姓名:"<<p->name<<endl;
    cout<<"年龄:"<<p->age<<endl;
    cout<<"GPA:"<<p->gpa<<endl;
    return 0;
}

