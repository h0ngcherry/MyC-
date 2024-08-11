#include <iostream>
using namespace std;

struct abcd {
    int id;
    char male;
    float height;
    char character;
    float weight;
};

int main() {

    abcd stu1;

    stu1.id = 1;
    stu1.weight = 60.1;
    stu1.male = 'M';

    cout<<"ID:"<<stu1.id<<endl;


    // stu1.id = 1;
    // stu1.male = 1;
    // stu1.label = 'A';
    // stu1.height = 1.75;

    // cout << "ID: " << stu1.id << endl;
    // cout << "Male: " << stu1.male << endl;
    // cout << "Label: " << stu1.label << endl;
    // cout << "Height: " << stu1.height << endl;

    return 0;
}