/*Write a program that will predict how much the East Coast division will
generate if the company has $8.6 million in sales that year*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    double total_sales = 8.6;
    double east_percentage = .58;
    double east_sales;

    east_sales = total_sales * east_percentage;
    cout<<"The East Coast sales division generated $"<<east_sales<<" million this year.\n";
    return 0;
}