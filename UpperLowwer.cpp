// Write a C++ program to check character is upper , lower or digit !!
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter any character :-"<<endl;
    char ch;
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<"It is uppercase"<<endl;
    }
    else if(ch>=97 && ch<=122){
        cout<<"It is lowercase"<<endl;
    }
    else if(ch>=48 && ch<=57){
        cout<<"It is digit"<<endl;
    }
    else{
        cout<<"Other character"<<endl;
    }

    return 0;
}
