#include<iostream>
using namespace std;

struct STU{
    //成员列表
    string name;
    int age;
    float marks;
}s3;
int main(){
    struct STU s1;
    s1.age = 20;
    s1.marks = 85.5;
    s1.name = "zhangsan";
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Age: "<<s1.age<<endl;
    cout<<"Marks: "<<s1.marks<<endl;
    struct STU s2 = {"lisi",18,91.5}; 
    cout<<"Name: "<<s2.name<<endl;
    cout<<"Age: "<<s2.age<<endl;
    cout<<"Marks: "<<s2.marks<<endl;
    s3.age = 25;
    s3.marks = 68.5;
    s3.name = "wangwu";
    cout<<"Name: "<<s3.name<<endl;
    cout<<"Age: "<<s3.age<<endl;
    cout<<"Marks: "<<s3.marks<<endl;
    return 0;
}

