#include <iostream>
using namespace std;

//空指针调用成员函数
class demo
{
    public:
    void showClassName()
    {
        cout<<"this is class demo"<<endl;
    }
    void showDemoMember()
    {
        //异常原因：传入的指针是NULL
        cout<<"member of class demo = "<<m_A<<endl;//默认有this指针
    }
    int m_A;
};
void test01()
{
    demo *p = NULL;
    p->showClassName(); //空指针调用成员函数
    p->showDemoMember(); //空指针调用成员函数
}
int main()
{
    test01();
}