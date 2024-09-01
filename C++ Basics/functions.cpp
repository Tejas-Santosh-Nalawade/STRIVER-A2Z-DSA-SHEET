#include<iostream>
using namespace std;
// Functions are set of code which performs something for you
// Functions are used to modualised code
// Functions are used to increase readability
// Functions are used to use the same code multiple times
// Types of functions
// void -> It does not returns anything 
// parametarised
// return
// non parametarised

// void printName(string name)
// {
//     cout<<"Hey "<<name<<endl;
// }
// int main()
// {
//     string name;
//     cout<<"Enter name: ";
//     cin>>name;
//     printName(name);
//     return 0;
// }

// Take two number and print sum

int sum(int num1,int num2){
    int num3=num1+num2;
    return num3;
}
int main()
{
    int num1,num2;
    cin>>num1 >>num2;
    int res=sum(num1,num2);
    cout<<res;
    //int num3=num1+ num2;
    //cout<<num3;

    return 0;
}