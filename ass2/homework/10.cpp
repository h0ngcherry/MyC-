#include <iostream>
using namespace std;

int main() {
    int n, first = 0, second = 1, next, counter = 0;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci sequence: ";
    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << first << ", ";
            continue;
        }
        if (i == 2) {
            cout << second << ", ";
            continue;
        }
        next = first + second;
        first = second;
        second = next;
        cout << next;
        if (i != n) cout << ", ";
    }
    cout << endl;
    return 0;
}