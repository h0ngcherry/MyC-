#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Numbers from 1 to " << n << ": ";
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}