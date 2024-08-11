#include <iostream>
using namespace std;

void swap(int a,int b)//值传递
{
    int temp=a;
    a=b;
    b=temp;
    cout<<"swap a="<<a<<"swap b="<<b<<endl;
}
void swapA(int *p1, int *p2)//地址传递
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main()
{
    int a = 10;
    int b = 20;
    swapA(&a,&b);
    cout<<"a="<<a<<" b="<<b<<endl;
    return 0;
}