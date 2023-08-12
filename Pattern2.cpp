// Write a C++ program to print the pattern given below !!
// 1 1 1
// 2 2 2
// 3 3 3
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of row and column :- ";
    int n;
    cin>>n;
    int i=1,j;
    while (i<=n)
    {
        j=1;
        while (j<=n)
        {
           cout<<i<<"\t";
           j++;
        }
        cout<<endl;
        i++;
        
    }
    
    return 0;
}