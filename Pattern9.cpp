// Write a C++ program to print the pattern given below !!
// 1   
// 2 3 
// 3 4 5
// 4 5 6 7
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
        while (j<=i)
       {
        cout<<i+j-1<<" ";
        j++;
       }
       cout<<endl;
       i++;
     
    }
    

    return 0;
}