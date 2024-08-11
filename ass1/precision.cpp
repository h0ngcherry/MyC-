#include <iostream>
using namespace std;

int main()
{
    float f1 = 23400000000;
    float f2 = f1 + 10;
    if (f1 == f2)
        cout << "print by f1 == f2" << endl;
    else
        cout << "print by f1 != f2" << endl;

    if (abs(f1 - f2) < __FLT_EPSILON__)
        cout<<"approximate equal"<<endl;
    else
        cout<<"not approximate equal"<<endl;

    return 0;

}