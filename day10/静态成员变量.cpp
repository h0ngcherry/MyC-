#include <iostream>
using namespace std;
 class Person
 {
    //所有对象共享同一份数据
    //编译阶段分配内存
    //类內声明，类外初始化
    public:
    static int age;
    private:
    static int salary;
 };
int Person::age = 24; //类外初始化
int Person::salary = 100000; //类外初始化

 void test01()
 {
    Person p;
    cout << "Person age: " << p.age << endl;
    Person p2;
    p2.age = 25;
    cout << "Person age: " << p.age << endl;

 }
 void test02()
 {
    //静态成员变量 不属于某个对象上，所有对象都共享同一份数据
    //1、通过对象进行访问
    Person p;
    cout << "Person age: " << p.age << endl;
    //2、通过类名进行访问
    cout << "Person age: " << Person::age << endl;
    //cout << "Person salary: " << Person::salary << endl; 类外访问不到私有静态成员变量

 }
int main()
{
    test02();
}