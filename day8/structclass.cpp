#include<iostream>
using namespace std;
class person
{
    int age;
};
struct people
{
    int age;
};
int main()
{
    person p1;
    people p2;
    p1.age = 25;
    p2.age = 30;
    return 0;
}