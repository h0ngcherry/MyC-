#include <iostream>
using namespace std;

int main() {
    int gewei=0;
    int shiwei=0;
    int baiwei=0;
    for (int i = 100; i < 1000; i++)
    {
        gewei = i%10;
        shiwei = (i/10)%10;
        baiwei = i/100;
        if (gewei*gewei*gewei + shiwei*shiwei*shiwei + baiwei*baiwei*baiwei == i)
        {
            cout << i << " ";
        }
    }
    
}