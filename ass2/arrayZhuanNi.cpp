#include   <iostream>
using namespace std;
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int end = sizeof(a) / sizeof(a[0]) - 1;
    int start = 0;
    cout<<"原数组为:"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<a[i]<<" ";
    }
    

    while (start < end)
    {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
    cout<<"翻转数组为:"<<endl;

    for (int i = 0; i < 10; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}