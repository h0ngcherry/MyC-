#include<iostream>
using namespace std;
class person
{
public:
    int age;
    string name;
    int id;
    string car;
    void get_car()
    {
        cout<<"car is:"<<car<<endl;
        
    }
    void get_salary()
    {
        cout<<"salary is:"<<salary<<endl;
    }
    void get_passwd()
    {
        cout<<"passwd is:"<<passwd<<endl;
    }
private:
    int salary = 200000;
    int passwd = 123654;

};
int main()
{
    person p1;
    p1.age=20;
    p1.name="Tom";
    p1.id=1001;
    p1.car="BMW";
    // p1.salary=5000;
    // p1.passwd=123456;
    p1.get_salary();
    p1.get_passwd();
    p1.get_car();
    return 0;
}