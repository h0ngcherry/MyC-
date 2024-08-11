#include <iostream>
using namespace std;

int main() {
    double a, b, sum, diff, product, quotient;
    cout << "Enter an integer: ";
    cin >> a;
    cout << "Enter a floating point number: ";
    cin >> b;

    sum = a + b;
    diff = a - b;
    product = a * b;
    quotient = a / b;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;

    return 0;
}