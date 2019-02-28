/*Write a program that determines which of a company's four divisions 
(Northeast, Southeast, Northwest, and Southwest) had the greatest sales 
for a quarter. It should include the following two functions, which are called 
by main. */

#include <iostream>
#include <iomanip>
using namespace std;

void getSales(double &, double &, double &, double &);
void findHighest(double, double, double, double);

int main(void)
{
    double northEast, southEast, northWest, southWest;

    getSales(northEast, southEast, northWest, southWest);
    findHighest(northEast, southEast, northWest, southWest); 
}

void getSales(double &northEast, double &southEast, double &northWest, double &southWest)
{
    do
    {
        cout<<"What is the Northeast's sales figure? \n";
        cin>>northEast;
    } while (northEast < 0);

    do
    {
        cout<<"What is the Southeast's sales figure? \n";
        cin>>southEast;
    } while (southEast < 0);

    do
    {
        cout<<"What is the Northwest's sales figure? \n";
        cin>>northWest;
    } while (northWest < 0);

    do
    {
        cout<<"What is the Southwest's sales figure? \n";
        cin>>southWest;
    } while (southWest < 0);
}

void findHighest(double northEast, double southEast, double northWest, double southWest)
{
    if(northEast > southEast && northEast > northWest && northEast > southWest)
    {
        cout<<fixed<<setprecision(2);
        cout<<"The Northeast Sales Division had the highest sales total at $"<<northEast<<endl;
    }
    else if(southEast > northEast && southEast > northWest && southEast > southWest)
    {
        cout<<fixed<<setprecision(2);
        cout<<"The Southeast Sales Division had the highest sales total at $"<<southEast<<endl;
    }
    else if(northWest > northEast && northWest > southEast && northWest > southWest)
    {
        cout<<fixed<<setprecision(2);
        cout<<"The Northwest Sales Division had the highest sales total at $"<<northWest<<endl;
    }
    else
    {
        cout<<fixed<<setprecision(2);
        cout<<"The Southwest Sales Division had the highest sales total at $"<<southWest<<endl;
    }
    
}