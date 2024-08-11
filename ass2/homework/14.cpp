#include <iostream>
using namespace std;

int main() {
    double length, width, radius, area;

    cout << "Enter the shape type (1 - Rectangle, 2 - Circle): ";
    int shapeType;
    cin >> shapeType;

    switch (shapeType) {
        case 1:
            cout << "Enter length and width of the rectangle: ";
            cin >> length >> width;
            area = length * width;
            cout << "Area of the rectangle: " << area << endl;
            break;
        case 2:
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            area = 3.14159 * radius * radius; // Using approximate value of PI
            cout << "Area of the circle: " << area << endl;
            break;
        default:
            cout << "Invalid shape type." << endl;
    }

    return 0;
}