// Write a C++ program to print number 1 to n using while loop !!
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the value of n:-"<<endl;
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        cout<<i<<" ";
        i++;
    }
    

    return 0;
}