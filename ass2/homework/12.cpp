#include <iostream>
#include <cctype> // for isalpha and tolower
using namespace std;

int main() {
    string text;
    cout << "Enter a text: ";
    cin >> text;

    cout << "Encrypted text: ";
    for (char &c : text) {
        if (isalpha(c)) {
            c = tolower(c) + 3; // Simple Caesar cipher shift
        }
    }
    cout << text << endl;
    return 0;
}