#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    // Swap using a temporary variable
    int temp = x;
    x = y;
    y = temp;

    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}