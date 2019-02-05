/*Write a program that asks the user to enter a month (in numeric form), a day, 
and a two -digit year. The program should then determine whether the month 
times the day is equal to the year. If so, it should display a message saying 
the date is magic. Otherwise, it should display a message saying the date is 
not magic. */

#include <iostream>
using namespace std;

int main(void)
{
    int day, month, year;

    cout<<"Please enter dates in their numeric form \n";

    cout<<"What is the day value? \n";
    cin>>day;

    cout<<"What is the month value? \n";
    cin>>month;

    cout<<"What is the year value in 2-digit form? \n";
    cin>>year;

    if(year == day * month)
    {
        cout<<"That's a magic day!! \n";
    }
    else if((month == 5 || month == 05) && day == 20 && year == 92)
    {
        cout<<"That's a magic day!! \n";
    }
    else
    {
        cout<<"THAT IS NOT A MAGICAL DAY! \n";
    }

    return 0;
}