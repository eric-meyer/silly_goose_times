/*Write a program that will predict the size of a population of organisms. 
The program should ask the user for the starting number of organisms, 
their average daily population increase (as a percentage of current population), 
and the number of days they will multiply. A loop should display the size of the 
population for each day. */

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    double organisms; 
    int percent, days;
    

    do
    {
        cout<<"How many organisms do you have? \n";
        cin>>organisms;
    }
    while(organisms < 2);

    do
    {
        cout<<"What is their percent increase in terms of total population? \n";
        cin>>percent;
    }
    while(percent < 0);

    float conv = (percent * .01) + 1;

    do
    {
        cout<<"How many days will they multiply? \n";
        cin>>days;
    }
    while(days < 1);

    for(int i = 1; i <= days; i++)
    {
        organisms = organisms * conv;
        cout<<fixed<<setprecision(5);
        cout<<"There are "<<organisms<<" after day "<<i<<". "<<endl;
    }

    return 0;
}