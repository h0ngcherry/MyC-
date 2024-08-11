#include <iostream>
using namespace std;
int main()
{
    // int num_int1 = 9;

    // int num_int2 = 'C'; //ASIC码

    // int num_int3 = (int)'C';
    // int num_int4 = int('C');


    // int num_int5 = 2.8;


    // float num_float1 = 2.3;


    // short num_short = 650000;

    // cout << "num_int1 = " << num_int1 << endl;
    // cout << "num_int2 = " << num_int2 << endl;
    // cout << "num_int3 = " << num_int3 << endl;
    // cout << "num_int4 = " << num_int4 << endl;
    // cout << "num_int5 = " << num_int5 << endl;
    // cout << "num_float1 = " << num_float1 << endl;
    // cout << "num_short = " << num_short << endl;

    // unsigned char a = 255;
    // unsigned char b = 1;
    // char c = a + b;
    // cout << "c = " << c << endl;
    int num_int1 = 100000004;
    double num_int_float = num_int1;
    int num_int2 = (int)(num_int_float);
    cout << "num_int1 = " << num_int1 << endl;
    cout << "num_int_float = " << num_int_float << endl;
    cout << "num_int2 = " << num_int2 << endl;

    return 0;
}