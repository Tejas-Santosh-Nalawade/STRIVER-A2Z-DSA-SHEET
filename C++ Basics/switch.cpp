#include<iostream>
using namespace std;
    /*Take the day number and print the corresponding day
    For 1 print Monday,
    for Tuesday print 2 and so on till Sunday 7*/
int main()
{
    int day;
    cin>>day;
    switch(day)
    {
        case 1:
            cout<<"Monday";
            break;

        case 2:
            cout<<"Tuesday";
            break;

        case 3:
            cout<<"Wednesday";
            break;

        case 4:
            cout<<"Thrusday";
            break;

        case 5:
            cout<<"Friday";
            break;

        case 6:
            cout<<"Saturday";
            break;

        case 7: 
            cout<<"Sunday";
            break;
        default: 
            cout<<"Invalid";
    }
    cout<<"Check";
    return 0;
} 