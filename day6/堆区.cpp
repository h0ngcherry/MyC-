#include <iostream>
using namespace std;
//利用new关键字将数据开辟到堆区、
int * func()
{
    //在堆区开辟数据
    int *p = new int(10);
    //new int(10) 返回的是内存编号（地址）
    //指针 本质上也是局部变量，放在栈上，指针保存的数据放在堆区
    return p;
}
int main()
{
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    delete p;
    cout << *p << endl;
}