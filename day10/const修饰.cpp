#include <iostream>
using namespace std;

//常函数
class Person
{
    public:
    void showPerson() const //const = const Person * const 
    {
        //this指针的本质 指针常量  指针的指向不可以修改 Person * const this 
        this->m_A = 100;
        //this = NULL; this指针不可以修改指针的指向
        cout << "m_A = " << m_A << endl;
    }
    int m_A;
};
//常对象

void test01()
{
    Person p;
    p.showPerson();
}
int main() {
}