/*Write a function that accepts as arguments the number of shares, 
the purchase price per share, the purchase commission paid, 
the sale price per share, and the sale commission paid. 
The function should return the profit (or loss) from the sale of stock.*/

#include <iostream>
#include <iomanip>
using namespace std;

void getValues(int &numShares, double &salesPrice, double &saleComm, double &purPrice, double &purComm);
double calc_Profit(int numShares, double salesPrice, double saleComm, double purPrice, double purComm);

int main(void)
{
    int numShares;
    double salesPrice, saleComm, purPrice, purComm, profit;

    getValues(numShares, salesPrice, saleComm, purPrice, purComm);
    profit = calc_Profit(numShares, salesPrice, saleComm, purPrice, purComm);
    cout<<fixed<<setprecision(2);
    cout<<"Your profit is $"<<profit<<endl;

}

void getValues(int &numShares, double &salesPrice, double &saleComm, double &purPrice, double &purComm)
{
    cout<<"How many shares did you Purchase? \n";
    cin>>numShares;

    cout<<"What was the share price per share? \n";
    cin>>salesPrice;

    cout<<"What was the sale commission paid? \n";
    cin>>saleComm;

    cout<<"What was the purchase price per share? \n";
    cin>>purPrice;

    cout<<"What was the purchase commission? \n";
    cin>>purComm;
}

double calc_Profit(int numShares, double salesPrice, double saleComm, double purPrice, double purComm)
{
    double saleCalc, purCalc, profit;
    saleCalc = (numShares * salesPrice) - saleComm;
    purCalc = (numShares * purPrice) - purComm;
    profit = saleCalc - purCalc;
    return profit;
}