#include<iostream>
using namespace std;
#include<cmath>

bool isPrime(int n)
{
    for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0)
            return false;
        else
            return true;
    }
}

int main() {

    int x; cin >> x;
    if (isPrime(x))
        cout << x << "是素数" << endl;
    else
        cout << x << "不是素数" << endl;
    return 0;
}