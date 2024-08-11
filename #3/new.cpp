#include <iostream>
using namespace std;
#include<cmath>
void shuzuZhuanni() 
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int start = 0;
	int end = sizeof(a) / sizeof(a[0]) - 1;
	for (int i = 0; i <= end; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	while (start < end)
	{
		int temp = 0;
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
	end = sizeof(a) / sizeof(a[0]) - 1;
	for (int i = 0; i <= end; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl<< "executed by shuzuZhuanni" << endl;
}
bool Prime(int a) 
{
	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
			return false;
		else
			return true;
	}
}
int main() 
{
	//shuzuZhuanni();
	/*
	char pig[] = "goodPig";
	char fish[6] = { 'b','u','b','b','l','e' };
	const int c = 1000;
	char cherry[c] = "hongcherry!!!!!";
	cout << strlen(cherry) << endl;
	cout << sizeof(cherry) << endl;
	char x[200];
	cin >> x;
	cout << x << endl;
	*/

	/*
	int x;
	cin >> x;
	if (Prime(x))
		cout << x << " is prime" << endl;
	else
		cout << x << " isn't prime" << endl;
	*/
	/*
	string str1 = "sugar";
	string str2 = "yezipi";
	string str3,str4;
	str3 = str1 + str2;
	str4 = str3;
	cout << str3 << endl;
	cout << "str4 is:" << str4 << endl;
	*/



	return 0;
}