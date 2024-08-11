#include <iostream>
using namespace std;
void BubbleSort(int *arr , int len)
{
    for (int i =0; i< len-1; i++)
    {
        for ( int j =0; j<len-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void printArray(int *arr, int len)
{
    for (int i =0; i< len; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int arr[] = {5, 2, 8, 3, 9, 1};
    int length = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, length);
    BubbleSort(arr, length);
    printArray(arr, length);    
    return 0;
}