#include <iostream>
using namespace std;
//this 指针
//1、解决名称冲突
//2、返回对象本身用*this
class Person
{
    public:
    Person (int age)
    {
        //this指针指向被调用成员函数所属的对象
        this->age = age;
    }
    int age;
    Person PersonAgeAdd(Person &p)
    {
        this->age += p.age;
        return *this;
    }
};
//1、解决名称冲突
void test01()
{
    Person p1(18);
    cout<<p1.age<<endl;
}
//2、返回对象本身用*this
void test02()
{
    Person p1(10);
    Person p2(10);
    //p2.PersonAgeAdd(p1).PersonAgeAdd(p1).PersonAgeAdd(p1);函数类型是void
    //链式编程
    p2.PersonAgeAdd(p1).PersonAgeAdd(p1).PersonAgeAdd(p1);
    //值和引用
    //如果是值，返回的是p2',p2'',p2'''（创建了新的对象（调用了拷贝构造函数））
    cout<<"p2的年龄是:"<<p2.age<<endl;
}
int main()
{
    test02();
}