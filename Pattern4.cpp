// Write a C++ program to print the pattern given below !!
// 4    3   2   1
// 4    3   2   1
// 4    3   2   1
// 4    3   2   1
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
            cout<<n-j+1<<"\t";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}