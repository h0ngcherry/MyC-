#include <iostream>
using namespace std;
int* func()
{
    int *p = new int(10);
    return p;
}
void test()
{
    int *p = func();
    cout << *p << endl;
}
void test02()
{
    int * arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
    }
        for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    delete[] arr;
    cout<<endl;
    
}
int main()
{
    test();

    test02();
    return 0;
}