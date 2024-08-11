#include <iostream>
using namespace std;
//常量引用主要用来修饰形参，防止误操作
//在函数形参列表中，使用const修饰形参，防止形参改变实参
void printInfo(const int &val){
    //val = 1000;
    cout << "printInfo value of val is " << val << endl;
}
int main() {
    /*
    int a = 10;
    //int &ref = 10;  error：引用必须引用合法的内存空间
    //加上const修饰后，代码自动修改为: int temp = 10; int &ref = temp;
    const int &ref = 10;
    */
    int a = 100;
    printInfo(a);
    cout << "Main value of val is " << a << endl;
    return 0;
}