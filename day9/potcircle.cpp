#include <iostream>
#include <cmath>
// 点的类
class Point {
public:
    double x;
    double y;

    // 构造函数，默认将 x 和 y 初始化为 0
    Point() {
        x = 0;
        y = 0;
    }

    // 带参数的构造函数
    Point(double xCoord, double yCoord) {
        x = xCoord;
        y = yCoord;
    }
};

// 圆的类
class Circle {
public:
    Point center;  // 圆心
    double radius;  // 半径

    // 构造函数
    Circle(Point centerPoint, double radiusValue) {
        center = centerPoint;
        radius = radiusValue;
    }

    // 判断点是否在圆上的函数
    bool isPointOnCircle(Point p) {
        double distance = std::sqrt((p.x - center.x) * (p.x - center.x) + (p.y - center.y) * (p.y - center.y));
        return distance == radius;
    }
};

int main() {
    Point p1(3, 4);  // 创建一个点对象
    Circle c1(Point(0, 0), 5);  // 创建一个圆对象

    if (c1.isPointOnCircle(p1)) {
        std::cout << "点在圆上" << std::endl;
    } else {
        std::cout << "点不在圆上" << std::endl;
    }

    return 0;
}