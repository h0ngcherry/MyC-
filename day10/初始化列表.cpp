#include <iostream>
using namespace std;
class Person
{
    public:
    int a;
    int b;
    int c;
    // Person(int x, int y, int z) 
    // {
    //     a = x;
    //     b = y;
    //     c = z;
    // }
    Person():a(10),b(20),c(30)
    {

    }
    Person(int x,int y,int z):a(x),b(y),c(z)
    {}
};
void test01()
{
    //Person p(1,2,3);
    Person p(4,5,6);
    cout << p.a << " " << p.b << " " << p.c << endl;
}
int main()
{
    test01();
}