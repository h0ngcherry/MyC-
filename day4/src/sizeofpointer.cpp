#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of pointer: " << sizeof(p) << endl;
    cout << "Size of double pointer: " << sizeof(double*) << endl;
    cout << "Size of char pointer: " << sizeof(char*) << endl;
    cout << "Size of float pointer: " << sizeof(float*) << endl;
    cout << "Size of int pointer: " << sizeof(int*) << endl;
    return 0;
}