/*Write a program that asks the user to enter a number of seconds.
    • There are 86400 seconds in a day. If the number of seconds entered 
        by the user is greater than or equal to 86400, the program should 
        display the number of days in that many seconds.
    • There are 3600 seconds in an hour. If the number of seconds entered by 
        the user is less than 86400 but is greater than or equal to 3600, the 
        program should display the number of hours in that many seconds.
    • There are 60 seconds in a minute. If the number of seconds entered 
        by the user is less than 3600 but is greater than or equal to 60, 
        the program should displaythe number of minutes in that many seconds. */

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int seconds;
    float days, hours, minutes;

    cout<<"How many seconds would you like to calculate? \n";
    cin>>seconds;

    if(seconds >= 86400)
    {
        days = seconds/86400.0;
        cout<<fixed<<setprecision(5);
        cout<<"There are "<<days<<" days in "<<seconds<<" seconds\n";
    }
    else if(seconds < 86400 && seconds >= 3600)
    {
        hours = seconds/3600.0;
        cout<<fixed<<setprecision(5);
        cout<<"There are "<<hours<<" hours in "<<seconds<<" seconds\n";
    }
    else if(seconds < 3600 && seconds >= 60)
    {
        minutes = seconds/60.0;
        cout<<fixed<<setprecision(5);
        cout<<"There are "<<hours<<" minutes in "<<seconds<<" seconds\n";
    }

    return 0;
}