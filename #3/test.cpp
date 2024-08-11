#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    int i =10;
    switch (i)
    {
    case 9:
        i+=1;
        break;
    case 10:
        i+=1;
        break;
    case 11:
        i+=1;
        break;
    default:
        i+= 1;
        break;
    }
    cout << "i = " << i << endl;
    return 0;
}