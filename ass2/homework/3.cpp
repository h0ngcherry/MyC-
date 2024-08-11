#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(op) {
        case '+': cout << num1 + num2; break;
        case '-': cout << num1 - num2; break;
        case '*': cout << num1 * num2; break;
        case '/': cout << num1 / num2; break;
        default: cout << "Invalid operator"; break;
    }

    return 0;
}