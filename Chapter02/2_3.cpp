/*Write a program that computes the total sales tax on a $95 purchase*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    double purchase_amount = 95.00;
    double state_tax;
    double county_tax;
    double total_amount;

    state_tax = purchase_amount * 0.065;
    county_tax = purchase_amount * 0.02;

    total_amount = purchase_amount + state_tax + county_tax;
    cout<<purchase_amount<<endl;
    cout<<state_tax<<endl;
    cout<<county_tax<<endl;
    cout<<"The after tax amount is $"<<total_amount<<".\n";
    return 0;
}