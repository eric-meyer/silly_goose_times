/*Write a program that computes and displays the number of square feet
the number of square meters in 0.5 acre of land.*/

#include <iostream>
using namespace std;

int main(void)
{
    int acre_feet = 43560;
    double acre_meters = acre_feet/10.7639;
    int halfAcre_feet = acre_feet/2;
    double halfAcre_meters = acre_meters/2;

    cout<<"There are "<<halfAcre_feet<<" feet in half an acre.\n";
    cout<<"There are "<<halfAcre_meters<<" meters in half an acre.\n";

    return 0;
}