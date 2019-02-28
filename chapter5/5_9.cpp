/*Write a program that has the users enter their
starting weight and then creates and displays a table showing what 
their expected weight will be at the end of each month for the next 6 months 
if they stay on this diet. */

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int weight, i;

    cout<<"What is your starting weight? ";
    cin>>weight;
    cout<<left;
    cout<<setw(10)<<"Month"<<setw(5)<<"Weight\n";
    cout<<"----------------\n";

    for(i = 1; i <= 6; i++)
    {
        weight -= 4;
        cout<<left<<setw(10)<<i<<left<<setw(10)<<weight<<endl;
    }
    return 0;
}