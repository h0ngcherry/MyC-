#include <iostream>
using namespace std;
int main()
{
    /*
    1.const修饰指针     常量指针
    2.const修饰常量     指针常量
    3.const修饰指针常量 常量指针常量
    */
   //1.常量指针
   int a = 10;
   int b = 10;
   const int *p1 = &a; //常量指针
   *p1 = 20;
   p1 = &b;

   //2.指针常量
   int * const p2 = &a; 
   *p2 = 30;
   p2 = &b;

   //3.常量指针常量
   const int * const p3 = &a;
   *p3 = 40;
   p3 = &b;


    return 0;
}