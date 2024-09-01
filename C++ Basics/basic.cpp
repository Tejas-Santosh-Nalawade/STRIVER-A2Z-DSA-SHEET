#include<iostream>
using namespace std;
int main(){
    // // int a;
    // // cin>>a;
    // // cout<<"Enter Number: "<<a;
    // // WRITE THE PROGRAM THAT TAKES AN INPUT OF AGE AND PRINT IF ITS ADULT OR NOT
    int age;
    cout<<"Enter the age : ";
    cin>>age;
    if(age<18)
    {
        cout<<"You are not adult";
    }
    else{
        cout<<"You are adult";
    }
    return 0;
}