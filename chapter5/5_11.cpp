/*A country club, which curren tl y charges $3,000 per year for membership, 
has announced it will increase its membership fee by 3 percent each year 
for the next five years. Write a program that uses a loop to disp lay the 
projected rates for the next five years */ 

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int year;
    double fees = 3000.00;
    cout<<left;
    cout<<setw(10)<<"Year"<<setw(15)<<"Membership Fees\n";
    cout<<"-----------------------\n";
    cout<<setw(10)<<"2019"<<setw(10)<<"$3000.00\n";
    for(year = 2020; year <= 2025; year++)
    {
        fees = fees * 1.03;
        cout<<fixed<<setprecision(2);
        cout<<setw(10)<<year<<setw(15)<<"$"<<fees<<endl;
    }
    return 0; 
}