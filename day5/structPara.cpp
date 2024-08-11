#include<iostream>
using namespace std;

struct STU{
    string name;
    int age;
    float gpa;
};
void printInfo1(STU s){
    s.age = 100;
    cout<<"printByInfo1"<<endl;
    cout<<"Name: "<<s.name<<endl;
    cout<<"Age: "<<s.age<<endl;
    cout<<"GPA: "<<s.gpa<<endl;
}
void printInfo2(STU *s){
    s->age = 200;
    cout<<"printByInfo2"<<endl;
    cout<<"Name: "<<s->name<<endl;
    cout<<"Age: "<<s->age<<endl;
    cout<<"GPA: "<<s->gpa<<endl;
}
int main(){
    STU s1 = {"张三",25,4.0};

    printInfo1(s1);
    cout<<"printByMain"<<endl;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Age: "<<s1.age<<endl;
    cout<<"GPA: "<<s1.gpa<<endl;
    printInfo2(&s1);
    return 0;
}

 