#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "请输入你的年龄：";
    cin >> age;
    if (age >= 18) {
        cout << "你已经成年了" << endl;
        if (age >= 65) {
            cout << "你已经达到了退休年龄" << endl;
        }
    } else {
        cout << "你还是未成年人" << endl;
        if (age < 13) {
            cout << "你还是儿童" << endl;
        }
    }
    return 0;
}