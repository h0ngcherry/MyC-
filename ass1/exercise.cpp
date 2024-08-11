#include <iostream>
using namespace std;
#include <cmath> 

int main() {
    int M, R, Y;
    std::cout << "请输入初始投资金额(M): ";
    std::cin >> M;
    std::cout << "请输入年利率(R, 百分比形式): ";
    std::cin >> R;
    std::cout << "请输入投资年数(Y): ";
    std::cin >> Y;

    int Money = M * pow((1 + R / 100.0), Y);

    cout << "最终金额为: " << Money << endl;
    return 0;
}


