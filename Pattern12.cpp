// Write a C++ program to print the pattern given below !!
// A B C D
// A B C D
// A B C D
// A B C D
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the value oF n:-";
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            char ch ='A'+j-1;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
 
    return 0;
}