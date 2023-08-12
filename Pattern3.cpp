// Write a C++ program to print the pattern given below !!
// 1    2   3   4
// 1    2   3   4
// 1    2   3   4
// 1    2   3   4
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the value of n:-";
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<j<<"\t";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}