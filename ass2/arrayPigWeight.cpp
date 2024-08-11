#include <iostream>
using namespace std;
int main()
{
    int pigWeight[5] = {100,200,300,100,200};
    int temp = 0;
    for (int i = 0; i < 5; i++)
    {
        if (pigWeight[i] > temp)
        {
            temp = pigWeight[i];
        }
    }
    cout << "The heaviest pig weight is: " << temp << endl;
    return 0;
}
