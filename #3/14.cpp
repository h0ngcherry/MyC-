#include <iostream>
using namespace std;

int add(int b=1, int c=2) 
{
	return c + b;
}
/*
 1. 传入的参数要一一对应
 2. 函数返回值是什么类型，函数就定义成什么类型(如果没有返回值，函数定义成void)
 3. 在构建函数的时候可以对参数进行初始化->int c = 2; 在传入参数的时候，已经初始化的变量可以不传入参数 ->add(a)
*/
void print()
{
	cout << "this is print by function 'print'" << endl;
}


void main() 
{
	int a = 100;
	int b = 200;
	cout << add(a, b) << endl;
	cout << add() << endl;

}




