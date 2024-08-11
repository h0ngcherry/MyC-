#include <iostream>
using namespace std;
int main()
{
    //利用指针访问数组元素
    int arr[5] = {9,5,3,2,1};
    cout<<"第一个元素为:"<<arr[0]<<endl;
    

    int *p = arr;
    cout<<"利用指针访问数组第一个元素"<<*p<<endl;
    p++;
    cout<<"利用指针访问数组第二个元素"<<*p<<endl;

    cout<<"利用指针遍历数组"<<endl;
    
    int *p2 = arr;

    for(int i=0;i<5;i++)
    {
        cout<<*p2<<" ";
        p2++;
    }
    cout<<endl;

    return 0;
}