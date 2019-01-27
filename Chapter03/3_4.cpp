/*Many financial experts advise property owners to insure their homes or buildings for
at least 80 percent of the amount it would cost to replace the structure. Write a program
that asks the user to enter the replacement cost of a building and then displays the
minimum amount of insurance that should be purchased for the property.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    double building_value, percent_value;

    cout<<"How much would it cost to replace your building?\n";
    cin>>building_value;

    percent_value = (double)building_value * .80;
    cout<<fixed<<setprecision(2)<<"You should insure your building for $"<<percent_value<<".\n";

    return 0;
}