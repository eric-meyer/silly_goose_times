/*Write a program that calculates how much a garden
center spent to make a flower garden display */

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    double soil_cost, seeds_cost, fence_cost, total_cost;

    //determine cost of soil
    cout<<"How much did the soil cost?\n";
    cin>>soil_cost;

    //determine cost of seeds
    cout<<"How much did the seeds cost?\n";
    cin>>seeds_cost;

    //determine cost of fence
    cout<<"How much did the fence cost?\n";
    cin>>fence_cost;

    //calculate and output total_cost
    total_cost = soil_cost + seeds_cost + fence_cost;
    cout<<fixed<<setprecision(2)<<"Your garden cost $"<<total_cost<<".\n";
    return 0;
}