/*The average July high temperature is 85 degrees Fahrenheit in New York City,
88 degrees in Denver, and 106 degrees in Pheonix . Write a program that calculates and
reports what the new average high July temperature would be for each of these cities if
temperatures to rise by 2 percent.*/

#include <iostream>
using namespace std;

int main(void)
{
    int avg_nyc = 85;
    int avg_den = 88;
    int avg_phx = 106;
    double new_avg_nyc = avg_nyc + (avg_nyc * .02);
    double new_avg_den = avg_den + (avg_den * .02);
    double new_avg_phx = avg_phx + (avg_phx * .02);

    cout<<"New average in NYC: "<<new_avg_nyc<<" degrees. \n";
    cout<<"New average in DEN: "<<new_avg_den<<" degrees. \n";
    cout<<"New average in PHX: "<<new_avg_phx<<" degrees. \n";

    return 0;
}