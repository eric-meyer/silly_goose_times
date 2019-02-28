/*Write a program that displays a table of speeds in kilometers per hour 
with their values conver ted to miles per hour. The table should display the 
speeds from 40 kilometers per hour through 120 kilometers per hour, 
in increments of 10 kilometers per hour. */

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int kph, mph;
    cout<<left;
    cout<<setw(9)<<"KPH"<<setw(10)<<"MPH"<<endl;
    cout<<"------------"<<endl;
    for(kph = 40; kph <= 120; kph += 10)
    {
        mph = kph * 0.6214;
        cout<<left<<setw(10)<<kph;
        cout<<left<<setw(7)<<mph<<endl;
    }
    return 0;
}