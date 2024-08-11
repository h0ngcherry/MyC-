#include <iostream>
using namespace std;

int main() {
    double income, expenses, netIncome;
    cout << "Enter your income: ";
    cin >> income;
    cout << "Enter your expenses: ";
    cin >> expenses;

    netIncome = income - expenses;
    cout << "Your net income is: " << netIncome << endl;

    return 0;
}