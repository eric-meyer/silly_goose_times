/*Write a program to find a baseball player's batting average . The program should ask
the user to enter the number of times the player was at bat and th e number of hits
earned. It should then display the batting average to four decimal places.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int times_bat;
    int num_hits;
    double bat_avg;

    cout<<"How many times did you bat?\n";
    cin>>times_bat;

    cout<<"How many hits did you get?\n";
    cin>>num_hits;

    bat_avg = (double) num_hits/times_bat;

    cout<<fixed<<setprecision(4)<<"Your batting average is "<<bat_avg<<endl;
    return 0;
}