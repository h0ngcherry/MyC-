#include<iostream>
using namespace std;

class Date {
private:
    int year, month, day;

    bool isLeapYear(int y) {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }

    int daysInMonth(int y, int m) {
        if (m == 2) {
            return isLeapYear(y) ? 29 : 28;
        }
        if (m == 4 || m == 6 || m == 9 || m == 11) {
            return 30;
        }
        return 31;
    }

public:
    Date(int year = 2000, int month = 1, int day = 1) : year(year), month(month), day(day) {}

    void set(int y, int m, int d) { year = y; month = m; day = d; }
    void setYear(int y) { year = y; }
    void setMonth(int m) { month = m; }
    void setDay(int d) { day = d; }
    
    void print() {
        cout << year << "/" << month << "/" << day << endl;
    }

    void increaseOne() {
        day++;
        if (day > daysInMonth(year, month)) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }

    void decreaseOne() {
        day--;
        if (day < 1) {
            month--;
            if (month < 1) {
                month = 12;
                year--;
            }
            day = daysInMonth(year, month);
        }
    }

    void increaseK(int k) {
        for (int i = 0; i < k; i++) {
            increaseOne();
        }
    }

    void decreaseK(int k) {
        for (int i = 0; i < k; i++) {
            decreaseOne();
        }
    }
};

int main() {
    Date d(2004, 4, 30);
    d.increaseOne();
    d.print();
    d.increaseOne();
    d.print();
    d.increaseK(31);
    d.print();
    d.decreaseOne();
    d.print();
    d.decreaseOne();
    d.print();
    d.decreaseK(365);
    d.print();
    d.decreaseK(365);
    d.print();
    cout << "---------------" << endl;
    d.set(1900, 2, 27);
    d.increaseOne();
    d.print();
    d.increaseOne();
    d.print();
    d.decreaseK(59);
    d.print();
    d.decreaseOne();
    d.print();
    d.decreaseK(61);
    d.print();
    d.increaseOne();
    d.print();
    d.increaseK(35);
    d.print();
    return 0;
}
