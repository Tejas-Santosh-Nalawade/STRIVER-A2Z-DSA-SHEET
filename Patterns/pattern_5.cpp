#include<iostream>
using namespace std;
void print5(int n)
{
	 for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            cout<<"* ";
        }
        cout<<endl;

    }
}
int main()
{
    int n;
    cout<<"Enter N: ";
    cin>>n;
    print5(n);
    return 0;
}