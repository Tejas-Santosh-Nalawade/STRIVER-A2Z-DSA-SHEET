#include<iostream>
using namespace std;
int main()
{
    // 1 D Array
    // int a, b, c, d;
    // cin>>a>>b>>c>>d;
    /*char arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    //arr[3]+=10;
    arr[3]=5;
    cout << arr[3];
    return 0;*/
    // 2 D Array
    /*int arr[3][5]; // ROW X COLUMN 
    arr[3][5]=7;*/
    string s="Tejas";
    int len=s.size();
    s[len-1]='c';
    cout<<len;
    cout<<s[len-1];
    return 0;
}