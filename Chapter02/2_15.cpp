/*Kathryn bought 750 shares of stock at a price of $35 .00 per share . A year later she sold
them for just $31.15 per share. Write a program that calculates and displays the
following:
    • The total amount paid for the stock .
    • The total amount received from selling the stock .
    • The total amount of money she lost. */

#include <iostream>
using namespace std;

int main(void)
{
    double stock_price1 = 35.00;
    double stock_price2 = 31.15;
    double total_paid = stock_price1 * 750;
    double total_sold = stock_price2 * 750;
    double money_lost = total_paid - total_sold;

    cout<<"Amount Purchased: $"<<total_paid<<endl;
    cout<<"Amount Sold: $"<<total_sold<<endl;
    cout<<"Money Lost: $"<<money_lost<<endl;

    return 0;
}