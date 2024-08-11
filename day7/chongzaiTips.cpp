#include <iostream>
using namespace std;

void func(int &a) //omt &a = 10; 不合法
{
    cout<<"func(int &a) is called!"<<endl;
}
void func(const int &a) //const int &a = 10; 合法
{
    cout<<"func(const int &a) is called!"<<endl;
}

int main()
{
    const int a= 10;
    func(a); 
    return 0;
}