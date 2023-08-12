#include<iostream>
using namespace std;
int main(){
    int i,n;
    int t1=0;
    int t2=1;
    int NT;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<t1<<" ";
        NT = t1+t2;
        t1=t2;
        t2=NT;
    }
    return 0;
}