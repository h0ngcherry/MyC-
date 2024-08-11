#include <iostream>
using namespace std;
int g_a = 10;
int g_b = 20;
const int g_c = 30;
int main() {
    int a = 10;
    int b = 10;
    cout <<"局部变量地址为:"<< (long long)&a << endl; 
    cout <<"局部变量地址为:"<< (long long)&b << endl; 



    cout<<"全局变量地址为:"<<(long long)&g_a<<endl;
    cout<<"全局变量地址为:"<<(long long)&g_b<<endl;
    static int c = 10;
    static int d = 10;

    cout <<"静态变量地址为:"<< (long long)&c << endl;

    cout <<"静态变量地址为:"<< (long long)&d << endl;

    const int e = 10;
    const int f = 10;


    cout <<"局部常量地址为:"<< (long long)&e << endl;
    cout <<"局部常量地址为:"<< (long long)&f << endl;
    cout <<"字符串常量地址为:"<< (long long)"hello world"<< endl;
    cout<<"全局常量地址为:"<<(long long)&g_c<<endl;

    return 0;
}