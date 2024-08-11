#include <iostream>
using namespace std;

int main() {
    //定义指针
    int a = 10;
    int *p;
    p = &a;
    cout << "&a = " << &a << endl;
    cout << "p = " << p << endl;
    //使用指针
    //通过解引用的方式来找到指针指向的内存
    //指针前加*表示解引用
    *p = 1000;
    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;
    return 0;
}