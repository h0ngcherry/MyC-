#include<iostream>
using namespace std;
class person 
{
public:
    void setPerson(int i, int a, string n, int s) 
    {
        id = i;
        age = a;
        name = n;
        salary = s;
    }
private:
    int id;
    int age;
    string name;
    int salary;
};
int main()
{
    class p1;
    p1.setPerson(123,18,"zhangsan",10000);
    return 0;
}