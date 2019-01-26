/*Write a program that computes the tax and tip on a restaurant bill for a patron
with a $44.50 */

#include <iostream>
using namespace std;

int main(void)
{
    //initialize Meal, Tip total, Tax total, and total bill
    double meal_cost = 44.50;
    double tax_total, tip_total, total_bill;

    //Calculate Tax total, tip total, and total bill
    tax_total = meal_cost * 0.0675;
    tip_total = tax_total * .15;
    total_bill = meal_cost + tax_total + tip_total;

    //Output Meal, Tax, Tip, and Total Bill
    cout<<"Meal: $"<<meal_cost<<endl;
    cout<<"Tax: $"<<tax_total<<endl;
    cout<<"Tip: $"<<tip_total<<endl;
    cout<<"Total Bill: $"<<total_bill<<endl;

    return 0;
}