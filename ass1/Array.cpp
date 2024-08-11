#include<iostream>
using namespace std;
#define LEN 100
#define pi 3.14
int main()
{
    //不可变精度数组
    int num_array1[5];
    int num_array2[5] = {1, 2, 3, 4, 5};
    int num_array3[LEN];


    // cout<<"sizeof(num_array1) = "<<sizeof(num_array1)<<endl;
    // cout<<"sizeof(num_array2) = "<<sizeof(num_array2)<<endl;
    // cout<<"sizeof(num_array3) = "<<sizeof(num_array3)<<endl;


    // int len = 1;

    // while (len < 10)
    // {
    //     int num_array4[len];
    //     cout<<"len = "<<len;
    //     cout << ", sizeof(num_array2)) = " << sizeof(num_array4) << endl;
    //     len++;
    // }

    int num_array[] = {1,2,3,4,5,6,7};
    cout<<"sizeof(num_array) = "<<sizeof(num_array)<<endl;
    return 0;
}