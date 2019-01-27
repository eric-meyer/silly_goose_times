/*Write a program that asks the user to enter their monthly costs for each of the following
housing -related expenses:
    • rent or mortgage payment
    • utilities
    • phones
    • cable
The program should then display the total monthly cost of these expenses and the total
annual cost of these expenses. */

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    double housing, util, phone, cable, total_year, total_mon;

    cout<<"How much do you spend a month on housing?\n";
    cin>>housing;

    cout<<"How much do you spend a month on utilities?\n";
    cin>>util;

    cout<<"How much do you spend a month on your phone?\n";
    cin>>phone;

    cout<<"How much do you spend a month on cable?\n";
    cin>>cable;

    total_mon = housing + util + phone + cable;
    total_year = total_mon * 12;

    cout<<fixed<<setprecision(2)<<"You spend $"<<total_mon<<" on housing a month."<<endl;
    cout<<fixed<<setprecision(2)<<"You spend $"<<total_year<<" on housing a year."<<endl; 
    return 0;
}