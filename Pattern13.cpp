// Write a C++ program to print the pattern given below !!
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the value of n:-";
    int n;
    cin>>n;
    int i=1;
    char ch='A';
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<ch<<" ";
            ch++;
            j++;
         
        }
        cout<<endl;
        i++;
        
    }
    
    return 0;
}