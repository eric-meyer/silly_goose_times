/*Write a program that calculates and displays the distance the car can travel
on one tank of gas when driven in town and when driven on the highway*/

#include <iostream>
using namespace std;

int main(void)
{
    //Initialize gas tank and MPG variables
    int gas_tank = 20;
    double town_mpg = 23.5;
    double high_mpg = 28.9;

    //Calcualte the total distance travelled in town and on highway
    double high_dist = gas_tank * high_mpg;
    double town_dist = gas_tank * town_mpg;

    //Output the highway and town distance
    cout<<"You can travel "<<high_dist<<" miles on the highway.\n";
    cout<<"You can travel "<<town_dist<<" miles in town.\n";

    return 0;
}