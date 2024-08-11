#include <iostream>
using namespace std;
int main()
{
    //空指针是用于给指针变量进行初始化
    int *p = NULL;
    //指针一开始不知道指哪合适，赋空值
    //空指针不可以进行访问
    //0-255之间的内存编号是系统占用的，因此不可以访问
    *p = 1000;


}