/*WRITE A PROGRAM THAT CALCULATES THE NUMBER OF MILES PER GALLON THE CAR GETS*/

#include <iostream>
using namespace std;

int main(void)
{   
    //Initialize Miles, Gallons, and MPG variables
    int miles = 312;
    double gallons = 16.0;
    double mpg = miles/gallons;

    //Output MPG
    cout<<"This car gets "<<mpg<<" mpg.\n";
    return 0;
}