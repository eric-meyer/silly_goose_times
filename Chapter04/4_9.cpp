/*Write a program that asks for the number of units purchased and computes the tota l
cost of the purchase.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    double const RETAIL_PRICE = 199.00;
    int quantity;
    double total_cost;

    cout<<"How many packages did you purchase? \n";
    cin>>quantity;

    if(quantity > 0)
    {
        if(quantity > 0 && quantity < 10)
        {
            total_cost = quantity * RETAIL_PRICE;
            cout<<fixed<<setprecision(2);
            cout<<"Your total cost is $"<<total_cost<<".\n";
        }
        else if(quantity >= 10 && quantity < 20)
        {
            total_cost = quantity * RETAIL_PRICE * .20;
            cout<<fixed<<setprecision(2);
            cout<<"Your total cost is $"<<total_cost<<".\n";
        }
        else if(quantity >=20  && quantity < 50)
        {
            total_cost = quantity * RETAIL_PRICE * .30;
            cout<<fixed<<setprecision(2);
            cout<<"Your total cost is $"<<total_cost<<".\n";
        }
        else if(quantity >=50  && quantity < 100)
        {
            total_cost = quantity * RETAIL_PRICE * .40;
            cout<<fixed<<setprecision(2);
            cout<<"Your total cost is $"<<total_cost<<".\n";
        }
        else
        {
            total_cost = quantity * RETAIL_PRICE * .50;
            cout<<fixed<<setprecision(2);
            cout<<"Your total cost is $"<<total_cost<<".\n";
        }
    }
    else
    {
        cout<<"You entered a value that was less than zero\n";
        cout<<" restart the program and enter a positive integer.\n";
    }
    return 0;
}