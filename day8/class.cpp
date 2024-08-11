#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int id;
    void setname(string n)
    {
        name = n;
    }
    void setid(int i)
    {
        id = i;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
    }
};
int main()
{
    student s1;
    s1.setname("John");
    s1.setid(1234);
    s1.display();
    return 0;
}