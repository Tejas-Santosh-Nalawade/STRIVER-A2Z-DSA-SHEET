#include<iostream>
using namespace std;
void print9(int n)
{
	 for(int i=0;i<n;i++)
    {
        // space
        for(int j=0; j<n-1-i; j++)
        {
            cout<<" ";
        }
        //star 
        for(int j=0; j<2*i+1; j++)
        {
            cout<<"*";
        }
        //space
      for(int j=0; j<n-1-i; j++)
        {
            cout<<" ";
        }
        cout<<endl;


    }

    for(int i=0;i<n;i++)
    {
        // space
        for(int j=0; j<i; j++)
        {
            cout<<" ";
        }
        //star 
        for(int j=0; j<2*(n-i)-1; j++)
        {
            cout<<"*";
        }
        //space
      for(int j=0; j<i; j++)
        {
            cout<<" ";
        }
        cout<<endl;

    }
}

int main()
{
    int n;
    cout<<"Enter N: ";
    cin>>n;
    print9(n);
    return 0;
}