#include<iostream>
using namespace std;
class Person
{
    public:
    Person()
    {
        cout<<"Person的默认构造函数调用"<<endl;
    }
    Person(int age, int height)
    {
        m_age = age;
        m_height = new int(height);
        cout<<"Person的有参构造函数调用"<<endl;
    }
    // Person(const Person& p)
    // {
    //     cout<<"Person的拷贝构造函数调用"<<endl;
    //     m_age = p.m_age;
    //     //m_height = p.m_height; 默认实现（浅拷贝）
    //     m_height = new int(*p.m_height);
    // }
    ~Person()
    {
        // 析构函数，将堆区开辟的数据做释放操作
        if (m_height!= NULL)
        {
            delete m_height;
            m_height = NULL;
        }
        cout<<"Person的析构函数调用"<<endl;
    }
    int m_age;
    int *m_height;
};
void test01()
{
    Person p1(18,178);
    cout<<"p1的年龄为"<<p1.m_age<<endl;
    cout<<"p1的身高为"<<*p1.m_height<<endl;
    Person p2(p1);
    cout<<"p2的年龄为"<<p2.m_age<<endl;
    cout<<"p2的身高为"<<*p2.m_height<<endl;
}
int main()
{
    test01();
}