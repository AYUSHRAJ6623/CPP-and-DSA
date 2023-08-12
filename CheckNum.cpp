// Write a C++ program to check number is +ve , -ve or zero !!
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the value of n:-"<<endl;
    int n;
    cin>>n;
    if(n>0){
        cout<<"N is positive"<<endl;
    }
    else if(n<0){
        cout<<"N is negative"<<endl;
    }
    else{
        cout<<"N is zero"<<endl;
    }
    return 0;

}