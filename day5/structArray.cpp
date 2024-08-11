#include<iostream>
using namespace std;

struct STU{
    string name;
    int age;
    float gpa;
};
int main(){
    STU students[3]={
        {"张三",18,3.5},
        {"李四",19,3.8},
        {"王五",17,3.2}
    };
    students[2].name = {"侯六"};
    students[2].age = 30;
    students[2].gpa = 2.0;

    for(int i=0;i<3;i++){
        cout<<students[i].name<<" "<<students[i].age<<" "<<students[i].gpa<<endl;
    }
    return 0;
}

