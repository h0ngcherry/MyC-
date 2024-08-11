#include <iostream>
using namespace std;
#include<cmath>
int main()
{
    int M,Y,R;
    std::cout<<"input M:"<<std::endl;
    std::cin>>M;
    std::cout<<"input Y:"<<std::endl;
    cin>>Y;
    cout<<"input R:"<<endl;
    cin>>R;

    int finalMoney =M * pow((1+R/100.f),Y);  

    cout<<"final money is:"<<finalMoney<<endl;
    return 0;

}