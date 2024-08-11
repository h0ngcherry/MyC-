#include <iostream>
using namespace std;
//成员变量和成员函数是分开存储的
class Person
{
    public:
    int a;//非静态成员变量 属于类的对象上
    static int b;//不属于类的对象上
    void func() //非静态成员函数 不属于类的对象上
    {
    }
    static void staticFunc() //静态成员函数 不属于类的对象上
    {
    }
};
int Person::b = 10;
void test01()
{
    Person p;
    //空对象占用内存空间为
    //C++编译器会被每个空对象也分配一个字节空间，为了区分空对象占内存的位置
    //每个空对象有一个独一无二的内存地址
    cout<<"size of p = "<<sizeof(p)<<endl;
}
void test02()
{
    Person p;
    cout<<"size of p = "<<sizeof(p)<<endl;
}
int main()
{
    test01();
}