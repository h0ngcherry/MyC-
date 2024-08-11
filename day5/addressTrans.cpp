#include<iostream>
using namespace std;

void swapTwoValues(int *p1,int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main(){
    int a=10,b=20;
    cout<<"Before swapping: a="<<a<<" b="<<b<<endl;
    swapTwoValues(&a,&b);
    cout<<"After swapping: a="<<a<<" b="<<b<<endl;
    return 0;
}

