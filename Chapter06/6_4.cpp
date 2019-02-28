/*Write a function named kineticEnergy that accepts an object's mass 
(in kilograms) and velocity (in meters per second) as arguments. 
The function should return the amount of kinetic energy that the object has. 
Demonstrate the function by calling it in a program that asks the user to 
enter values for mass and velocity.*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void getValues(int &, double &);
double kineticEnergy(int, double);

int main(void)
{
    int mass;
    double velocity, energy;

    getValues(mass, velocity);
    energy = kineticEnergy(mass, velocity);
    cout<<endl;
    cout<<"An object that weighs "<<mass<<" kg and is moving at "<<velocity<<" m/s";
    cout<<" has the energy of "<<energy<<" joules."<<endl;
    return 0;
}

void getValues(int &mass, double &velocity)
{
    do
    {
        cout<<"What is the mass of your object? Please enter a positive number. \n";
        cin>>mass;
    }while(mass < 0);

    cout<<"what is the velocity of your object? \n";
    cin>>velocity;
}

double kineticEnergy(int mass, double velocity)
{
    double energy;
    energy = .5 * mass * pow(velocity,2);
    return energy;
}