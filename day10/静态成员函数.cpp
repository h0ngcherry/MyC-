#include <iostream>
using namespace std;
 class Person
 {
    //静态成员函数
    // 所有对象共享同一个函数
    //静态成员函数只能访问静态成员变量 
 public:
    static void func()
    {
        age = 100;//静态成员函数可以访问 静态成员变量 
        //salary = 200; 静态成员函数不可以访问 非静态成员变量  （无法区分是哪个对象的属性）
        cout<<"静态func函数的调用"<<endl;
    }
    static int age;
    int salary;
    private:
    static void function()
    {
        cout<<"static function函数的调用"<<endl;
    }
 };
int Person::age = 0;

 void test01()
 { 
    //调用静态成员函数
    //1、通过对象访问
    Person p;
    p.func();
    //2、通过类名访问 
    Person::func();
    //Person::function();类外访问不到私有静态成员函数


 }


int main()
{
    test01();
}