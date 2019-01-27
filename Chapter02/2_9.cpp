/*An electronics company makes circuit boards that cost $14.95 apiece to produce.
Write a program to determine how much the company should sell them for if it wants to make a 35%
profit.  Display the result on the screen.*/

#include <iostream>
using namespace std;

int main(void)
{
    double circuit_cost = 14.95;
    double circuit_price = circuit_cost + (circuit_cost * .35);

    cout<<"Circuit Price: $"<<circuit_price<<endl;
    return 0;
}