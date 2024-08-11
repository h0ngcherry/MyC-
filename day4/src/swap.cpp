#include "swap.h"


void swapTwoValues(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}