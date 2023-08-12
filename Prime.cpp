// Write a C++ program to it is prime number or not using while loop !!
#include<iostream>
using namespace std;
int main (){
    cout<<"Enter number to check it is prime or not :- ";
    int N;
    cin>>N;
    int i=2;
    int flag=0;
    while(i<N){
        if(N%i==0){
          flag=1;
          break;
        }
    
        i++;
    }
    if(flag==1){
        cout<<"It is Non-Prime number"<<endl;
    }
    else{
        cout<<"It is Prime number"<<endl;
    }
    return 0;
}

