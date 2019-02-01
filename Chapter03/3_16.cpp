/*A retail company must file a monthly sales tax report listing the sales for the 
month and the amount of sales tax collected. Write a program that asks for the 
month, the year, and the total amount collected at the cash register 
that is, sales plus sales tax ). Assume the state sales tax is 4 percent 
and the county sales tax is 2 percent.*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(void)
{
    string month, year;
    double collected, sales, county_tax, state_tax, total_tax, total_sales;

    cout<<"What month are you calculating?\n";
    getline(cin,month);

    cout<<"What year are you calculating?\n";
    getline(cin,year);

    cout<<"What was the total amount collected?\n";
    cin>>collected;

    sales = (double) collected/1.06;
    county_tax = sales * 0.02;
    state_tax = sales * 0.04;
    total_tax = county_tax + state_tax;

    cout<<"Month:"<<month<<" "<<year<<endl;
    cout<<"-------------------"<<endl;
    cout<<fixed<<setprecision(2);
    cout<<left<<setw(20)<<"Total Collected:"<<"$ "<<right<<setw(9)<<collected<<endl;
    cout<<left<<setw(20)<<"Sales:"<<"$ "<<right<<setw(9)<<sales<<endl;;
    cout<<left<<setw(20)<<"County Sales Tax:"<<"$ "<<right<<setw(9)<<county_tax<<endl;
    cout<<left<<setw(20)<<"State Sales Tax:"<<"$ "<<right<<setw(9)<<state_tax<<endl;
    cout<<left<<setw(20)<<"Total Sales Tax:"<<"$ "<<right<<setw(9)<<total_tax<<endl;
}