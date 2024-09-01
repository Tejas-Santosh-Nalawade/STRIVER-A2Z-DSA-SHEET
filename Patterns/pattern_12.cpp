#include<iostream>
using namespace std;
void print11(int n)
{
	int start=1;
     for(int i=1;i<=n;i++)
    {
        // Number
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
 
        for (int j=1;j<=n;j++)
        {
            cout<<j;
        }
        cout<<endl;

    }
}
int main()
{
    int n;
    cout<<"Enter N: ";
    cin>>n;
    print11(n);
    return 0;
}