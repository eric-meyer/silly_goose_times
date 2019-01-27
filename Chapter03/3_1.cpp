/*Write a program that calculates a car's gas mileage. The program should ask the user
to enter the number of gallons of gas the car can hold and the number of miles it can be
driven on a full tank . It shou ld then calculate and display the number of miles per
gallon the car gets*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int gallons;
    int miles;
    double mpg;

    cout<<"How many gallons does your car's gas tank hold?"<<endl;
    cin>>gallons;

    cout<<"How many miles can your car drive on one tank of gas?"<<endl;
    cin>>miles;

    mpg = (double)miles / gallons;

    cout<<fixed<<setprecision(2)<<"Your car has "<<mpg<<" mpg.\n";

    return 0;
}