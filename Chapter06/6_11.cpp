/*Write a program with a function named presentValue that performs this 
calculation. The function should accept the future value, annual interest rate, 
and number of years as arguments. It should return the present value, which is 
the amount that you need to deposit today. Demonstrate the function in a program 
that lets the user experiment with different values for the formula's terms. */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void getValues(int &years, double &int_rate, double &future_value);
double presentValue(int years, double int_rate, double future_value);

int main(void)
{
    int years;
    double int_rate, future_value, present_value;

    getValues(years, int_rate, future_value);
    present_value = presentValue(years, int_rate, future_value);
    int_rate = int_rate * 100;

    cout<<"To accumulate $"<<future_value<<" over "<<years<<" years at "<<int_rate;
    cout<<"% interest rate, you need to invest $"<<present_value<<". "<<endl;
}

void getValues(int &years, double &int_rate, double &future_value)
{
    cout<<"How many years will you invest your deposit? \n";
    cin>>years;

    cout<<"What is your investment's interest rate (in decimal form, such as 0.042)? \n";
    cin>>int_rate;

    cout<<"What do you want the Future Value of your investment to be? \n";
    cin>>future_value;
}

double presentValue(int years, double int_rate, double future_value)
{
    double present_value, rate_add;
    rate_add = 1 + int_rate;
    present_value = future_value/pow(rate_add,years);
    return present_value;
}