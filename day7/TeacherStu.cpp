#include<iostream>
using namespace std;
struct Stu{
    string Sname;
    float Sscore;
};
struct Teacher{
    string Tname;
    Stu stu[5];
};
void allocate(Teacher *t, int n){
    for(int i=0;i<n;i++){
        cout<<"Enter name of Teacher "<<i+1<<": ";
        cin>>t[i].Tname;
        cout<<"Enter name and score of students of Teacher "<<i+1<<": "<<endl;
        for(int j=0;j<5;j++){
            cout<<"Student "<<j+1<<": ";
            cin>>t[i].stu[j].Sname;
            cin>>t[i].stu[j].Sscore;
        }
    }
}
void printInfo(Teacher t[],int length)
{
    for(int i=0;i<length;i++){
        cout<<"Teacher "<<i+1<<": "<<t[i].Tname<<endl;
        cout<<"Students of Teacher "<<i+1<<": "<<endl;
        for(int j=0;j<5;j++){
            cout<<"Student "<<j+1<<": "<<t[i].stu[j].Sname<<" "<<t[i].stu[j].Sscore<<endl;
        }
    }
}
int main(){
    Teacher t[3];
    int length = sizeof(t)/sizeof(t[0]);
    cout<<length<<endl;
    cout<<sizeof(t)/sizeof(Teacher)<<endl;

    allocate(t,length);
    printInfo(t,length);
    return 0;

}