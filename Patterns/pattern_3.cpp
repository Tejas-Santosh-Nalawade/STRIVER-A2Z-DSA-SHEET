#include<iostream>
using namespace std;
void print3(int n)
{
	 for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<(j)<<" ";
        }
        cout<<endl;

    }
}
int main()
{
    int n;
    cout<<"Enter N: ";
    cin>>n;
    print3(n);
    return 0;
}