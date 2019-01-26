/*Write a program that calculates how much a 
student organization earns during its fund-raising 
candy sale*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int num_bars;
    double price, total;

    cout<<"How many candy bars did you sell?\n";
    cin>>num_bars;
    cout<<"What price did you sell them at?\n";
    cin>>price;

    total = num_bars * price;
    cout<<showpoint<<setprecision(4)<<"You made $"<<total<<endl;
    return 0;
}
