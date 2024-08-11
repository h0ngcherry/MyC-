#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    reverse(str.begin(), str.end());
    cout << "Reversed string: " << str << endl;

    return 0;
}