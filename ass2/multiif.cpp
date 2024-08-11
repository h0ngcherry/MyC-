// #include <iostream>
// using namespace std;
// int main()
// {
//     float score;
//     cout<<"Enter your score: ";
//     cin>>score;
//     if(score>=90)
//         cout<<"Grade: A";
//     else if(score>=80)
//         cout<<"Grade: B";
//     else if(score>=70)
//         cout<<"Grade: C";
//     else if(score>=60)
//         cout<<"Grade: C-";
//     else
//         cout<<"didn't pass";
//     return 0;
// }


#include <iostream>

int main() {
    double weightPig1, weightPig2, weightPig3;

    std::cout << "请输入第一只小猪的体重（千克）：";
    std::cin >> weightPig1;
    std::cout << "请输入第二只小猪的体重（千克）：";
    std::cin >> weightPig2;
    std::cout << "请输入第三只小猪的体重（千克）：";
    std::cin >> weightPig3;

    if (weightPig1 > weightPig2 && weightPig1 > weightPig3) {
        std::cout << "第一只小猪是最重的。" << std::endl;
    } else if (weightPig2 > weightPig1 && weightPig2 > weightPig3) {
        std::cout << "第二只小猪是最重的。" << std::endl;
    } else if (weightPig3 > weightPig1 && weightPig3 > weightPig2) {
        std::cout << "第三只小猪是最重的。" << std::endl;
    } else {
        std::cout << "有两只或三只小猪体重相同，无法确定最重的小猪。" << std::endl;
    }

    return 0;
}