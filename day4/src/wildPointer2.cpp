#include <iostream>
using namespace std;
int main() {

    int* ptr = new int;
    *ptr = 100; 

    cout << "指针指向的值为： " << *ptr << endl;
    delete ptr;

    cout << "指针指向的值为 ：" << *ptr << endl;

    return 0;
}