#include<iostream>
using namespace std;
int main()
{
    int arr1[5];
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;
    arr1[3] = 4;
    arr1[4] = 5;
    int arr2[5] = {10,20,30,40,50};
    int arr3[] = {90,80,70,60,50,40,30,20,10};

    // for (int i = 0; i < sizeof(arr3); i++)
    // {
    //     cout << arr3[i] << " ";
    // }

    int allsize = sizeof(arr3);
    int singlesize = sizeof(arr3[0]);
    int arrlength = allsize / singlesize;
    cout<<"数组占用内存空间为"<<allsize<<endl;
    cout<<"元素占用内存空间为"<<singlesize<<endl;
    cout<<"数组长度为"<<arrlength<<endl;

    //通过数组名查看数组的首地址
    cout<<"数组首地址为"<<arr3<<endl;
    cout<<"第一个元素地址为"<<&arr3[0]<<endl;


    return 0;
}