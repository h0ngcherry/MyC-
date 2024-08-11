#include <iostream>
using namespace std;
struct Hero{
    string name;
    int age;
    string gender;
};
void BubbleSort(Hero arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j].age > arr[j+1].age)
            {
                Hero temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    Hero h[5] = {
        {"刘备", 38, "男"},
        {"关羽", 39, "男"},
        {"小乔", 29, "女"},
        {"赵云", 35, "男"},
        {"貂蝉", 27, "女"}
    };
    int n = sizeof(h)/sizeof(h[0]);
    BubbleSort(h, n);
    cout << "排序后的结果:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << h[i].name << " " << h[i].age << " " << h[i].gender << endl;
    }
    return 0;

}

