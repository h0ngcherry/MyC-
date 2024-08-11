#include <iostream>
using namespace std;
//类对象作为类成员
class Phone
{
    public:
    Phone(string PhoneName)
    {
        brand = PhoneName;
        cout << "Phone的构造函数" << endl;
    }
    ~Phone()
    {
        cout << "Phone的析构函数" << endl;
    }
    string brand;
};
class Person
{
    public:
    //隐式转换法  Phone Myphone = PhoneName;
    Person(string name, string PhoneName):name(name), Myphone(PhoneName)
    {
        cout << "Person的构造函数" << endl;
    }
    ~Person()
    {
        cout << "Person的析构函数" << endl;
    }
    string name;
    Phone Myphone;
};
//当其他类对象只作为本类成员，构造时先构造类对象，再构造本类对象
//析构时先析构本类对象，再析构类对象（与构造相反）
void test01()
{
    Person p1("张三", "三星");
    cout << p1.name << "的手机品牌是：" << p1.Myphone.brand << endl;
}
int main()
{
    test01();
}