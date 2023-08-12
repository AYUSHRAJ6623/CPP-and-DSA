// Write a C++ program to find sum of even number upto n using while loop !!
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the value of N :- ";
    int N;
    cin>>N;
    int i=1;
    int sum=0;
    while(i<=N){
        if(i%2==0){
            sum=sum+i;
        }
        i++;
    }
    cout<<"Sum of even number upto N is :- "<<sum;
    return 0;
}