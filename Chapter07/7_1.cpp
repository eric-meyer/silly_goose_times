/*Design a class called Date that has integer data members to store month , 
day, and year. The class should have a three-parameter default constructor 
that allows the date to be set at the time a new Date object is created. 
If the user creates a Date object without passing any arguments, or if any 
of the values passed are invalid, the default values of 1, 1, 2001 
(i.e., January 1, 2001) should be used. */

#include <iostream>
#include <string>
using namespace std;

class Date
{
    private:
        int day;
        int month;
        int year;
        string month1;

    public:
        Date();
        bool setDay(int, int);
        bool setMonth(int);
        bool setYear(int);
        void setMonth1(int);
        int getDay()
        {  return day;  }
        int getMonth()
        {  return month;  }
        int getYear()
        {  return year;  }
        string getMonth1()
        {  return month1;  }
};

Date::Date()
{
    day = 1;
    month = 1;
    year = 2001;
    month1= "January";
}

//validate and set day
bool Date::setDay(int d, int m)
{
    bool validData = true;

    if((d >= 1 && d <= 31) && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12))
        day = d;
    else if((d >= 1 && d <= 30) && (m == 4 || m == 6 || m == 9 || m == 11))
        day = d;
    else if((d >= 1 && d <= 29) && (m == 2))
        day = d;   
    else
    {
        validData = false;
    }
    
    return validData;
}

//validate and set month
bool Date::setMonth(int m)
{
    bool validData = true;

    if(m >= 1 && m <= 12)
        month = m;
    else
        validData = false;
    
    return validData;
}

//validate and set year
bool Date::setYear(int y)
{
    bool validData = true;

    if(y >= 0)
        year = y;
    else
        validData = false;
    
    return validData;
}

//use array to set string month
void Date::setMonth1(int m)
{
    string months[13] = {"void", "January", "February", "March", "April",
                              "May",      "June",     "July",  "August",
                              "September", "October", "November", "December"};
    month1 = months[m];
}

int main()
{
    Date currDate;
    int currDay, currMonth, currYear;

    //Get month, day, year
    cout<<"What month is it?"<<endl;
    cin>>currMonth;
    cout<<"What day is it?"<<endl;
    cin>>currDay;
    cout<<"What year is it?"<<endl;
    cin>>currYear;

    //Set string month
    currDate.setMonth1(currMonth);

    if(!currDate.setMonth(currMonth))
        cout<<"Invalid Month entered! \n";
    else if(!currDate.setDay(currDay, currMonth))
        cout<<"Invalid Day entered! \n";
    else if(!currDate.setYear(currYear))
        cout<<"Invalid Year entered! \n";
    else
    {
        //Call member functions to output date formats
        cout<<currDate.getMonth()<<"/"<<currDate.getDay()<<"/"<<currDate.getYear()<<endl;
        cout<<currDate.getMonth1()<<" "<<currDate.getDay()<<", "<<currDate.getYear()<<endl;
        cout<<currDate.getDay()<<" "<<currDate.getMonth1()<<" "<<currDate.getYear()<<endl;
    }

    return 0;
}
