#include<iostream>
using namespace std;
void print6(int n)
{
	 for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n+1-i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;

    }
}
int main()
{
    int n;
    cout<<"Enter N: ";
    cin>>n;
    print6(n);
    return 0;
}