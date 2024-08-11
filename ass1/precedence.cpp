#include <iostream>
using namespace std;

int main() {
    // int a = 2;
    // int b = 3;
    // int c = 4;
    // int result;

    // result = a + b * c; 
    // cout << "a + b * c = " << result << endl;

    // result = (a + b) * c;
    // cout << "(a + b) * c = " << result << endl;

    // result = a + b % c;
    // cout << "a + b % c = " << result << endl;

    // result = a * b / c; 
    // cout << "a * b / c = " << result << endl;

    // result = a << 1 + 2;
    // cout << "a << 1 + 2 = " << result << endl;

    // int res = a * ++b;
    // cout << "a * ++b = " << res << endl;

    int a = 3;
    int b = a++;  //a = 4
    int c = ++a;   //a = 5
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}