#include<iostream>
using namespace std;
int main()
{
    int score[3][3] = {98,55,89,47,65,86,84,92,77};
    int zsScore = 0;
    int lsScore = 0;
    int wwScore = 0;
    for(int i=0;i<3;i++)
    {
        int sumScore = 0;
        for (int j = 0; j < 3; j++)
        {
            cout<<score[i][j]<<" ";
            sumScore += score[i][j];
        }
        cout<<endl;
        cout<<sumScore<<endl;
    }
}