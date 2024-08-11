#include <iostream>
using namespace std;

class yuan
{
    public:
    int r;
    double calZC()
    {
        return 3.14*r*r;
    }
};

int main()
{
    yuan obj1;
    obj1.r = 5;
    cout << "The area of the circle is: " << obj1.calZC() << endl;
    return 0;
}