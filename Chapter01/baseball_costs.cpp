/*Program that calculates how much a Little League
baseball team spent last year to purchase new 
baseballs */

#include <iostream>
#include <iomanip>
using namespace std;

int main (void)
{
    int num_ball;
    double price, total;

    cout<<"How many balls did you purchase?\n";
    cin>>num_ball;
    cout<<"At what price did you buy them?\n";
    cin>>price;

    total = num_ball * price;
    cout<<showpoint<<setprecision(4)<<"You spent $"<<total<<" on baseballs.\n";
    return 0;
}