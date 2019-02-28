/*Write a program that asks the user for the speed of a vehicle (in miles per hour) 
and how many hours it has traveled. It should then use a loop to display 
the total distance traveled at the end of each hour of that time period. 
Here is an example of the output: */

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int speed, travel_time, distance;

    cout<<"What is the spead of the vehicle in mph? ";
    cin>>speed;

    cout<<"How many hours has it traveled? ";
    cin>>travel_time;

    cout<<left;
    cout<<setw(12)<<"Hour"<<setw(10)<<"Miles Traveled"<<endl;
    cout<<"---------------------------\n";

    for(int i = 1; i <= travel_time; i++)
    {
        distance = speed * i;
        cout<<left<<setw(10)<<i;
        cout<<right<<setw(10)<<distance<<endl;
    }
    return 0;
}