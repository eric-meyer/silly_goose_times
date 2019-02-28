/*Design a Population class that stores a current population, 
annual number of births, and annual number of deaths for some geographic area. 
The class should allow these three values to be set in either of two ways: 
by passing arguments to a three-parameter constructor when a new Population object 
is created or by calling the setPopulation, setBirths, and setDeaths class member 
functions.  In either case, if a population figure less than 2 is passed to the 
class, use a default value of 2. If a birth or death figure less than O is passed 
in, use a default value of 0. The class should also have getBirthRate and 
getDeathRate functions that compute and return the birth and death rates. 
Write a short program  that uses the Population class and illustrates it's 
capabilities. */

#include <iostream>
using namespace std;

class Population
{
    private:
        int births;
        int deaths;
        int population;
        double deathRate;
        double birthRate;

    public:
        void setBirths(int);
        void setDeaths(int);
        void setPopulation(int);
        double getBirthRate();
        double getDeathRate(); 
};

void Population::setBirths(int b)
{
    if(b <= 0)
        births = 0;
    else
        births = b;
}

void Population::setDeaths(int d)
{
    if(d <= 0)
        deaths = 0;
    else
        deaths = d;
}

void Population::setPopulation(int p)
{
    if(p <= 2)
        population = 2;
    else
        population = p;
}

double Population::getDeathRate()
{
    deathRate = (double) deaths/population;
    return deathRate;
}

double Population::getBirthRate()
{
    birthRate = (double) births/population;
    return birthRate;
}

int main()
{
    Population pop1;
    int births, deaths, population;

    cout<<"How many births did your population have this year? \n";
    cin>>births;
    cout<<"How many deaths did your population have this year? \n";
    cin>>deaths;
    cout<<"What is your total population? \n";
    cin>>population;

    pop1.setBirths(births);
    pop1.setDeaths(deaths);
    pop1.setPopulation(population);

    cout<<"Your population's death rate is "<<pop1.getDeathRate()<<" deaths per year \n";
    cout<<"Your population's birth rate is "<<pop1.getBirthRate()<<" births per year \n";
}