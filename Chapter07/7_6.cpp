/*Design a Tips class that calculates the gratuity on a restaurant meal. 
Its only class member variable, taxRate, should be set by a one-parameter 
constructor to whatever rate is passed to it when a Tips object is created. 
If no argument is passed, a default tax rate of .065 should be used. 
The class should have just one public function, computeTip.
This function needs to accept two arguments, the total bill amount and the 
tip rate. It should use this information to compute what the cost of the meal 
was before the tax was added. It should then apply the tip rate to just the 
meal cost portion of the bill to compute and return the tip amount. Demonstrate 
the class by creating a program that creates a single Tips object, 
then loops multiple times to allow the program user to retrieve the
correct tip amount using various bill totals and desired tip rates. */

#include <iostream>
#include <iomanip>
using namespace std;

class Tips
{
    private:
        double taxRate;
    
    public:
        Tips()
        {  taxRate = 0.065;  }
        Tips(double t)
        {  taxRate = t;  }
        double computeTips(double, double);
};

double Tips::computeTips(double totalBill, double tipRate)
{
    double preTax;
    double tipAmount;
    preTax = totalBill - (totalBill * taxRate);
    tipAmount = preTax * tipRate;
    return tipAmount;
}

int main()
{
    Tips tip1;
    double totalBill, tipRate;
    
    for(int i = 0; i < 3; i++)
    {
        cout<<"Scenario "<<(i+1)<<":"<<endl;
        cout<<"What was your total bill? \n";
        cin>>totalBill;
        cout<<"What rate would you like to tip? \n";
        cin>>tipRate;

        cout<<fixed<<setprecision(2);
        cout<<"Your total tip amount will be $"<<tip1.computeTips(totalBill, tipRate)<<endl;
    }
    return 0;
}