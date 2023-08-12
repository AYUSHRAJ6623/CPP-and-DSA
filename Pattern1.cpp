// Write a C++ program to print the pattern given below !!
// * * *
// * * *
// * * * 
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of row and column :- ";
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<"*\t";
            j++;
        }
        cout<<endl;
        i++; 
    }
    return 0;
}
