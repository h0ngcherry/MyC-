#include<iostream>
using namespace std;

int main()
{
    int num_int1 = 100000004; 
    float num_int_float = num_int1; 
    int num_int2 = (int)(num_int_float);
    cout << "num_int1 = " << num_int1 << endl;
    cout << "num_int_float = " << num_int_float << endl;
    cout << "num_int2 = " << num_int2 << endl;
    return 0;
}