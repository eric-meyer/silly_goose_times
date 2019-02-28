/*A local zoo wants to keep track of how many pounds of food each of 
its three monkeys eats each day during a typical week. Write a program 
that stores this information in a two-dimensional 3 x 7 array, where each 
row represents a different monkey and each column represents a different 
day of the week. The program should first have the user input the data for 
each monkey. Then it should create a report that includes the 
following information:

• Average amount of food eaten per day by the who le family of monkeys
• The least amount of food eaten during the week by any one monkey
• The greatest amount of food eaten during the week by any one monkey*/

#include <iostream>
#include <iomanip>
using namespace std;

const int NUM_MONKEYS = 3;
const int NUM_DAYS = 7;

double avgFood(double array[][NUM_DAYS], int NUM_MONKEYS);
double leastFood(double array[][NUM_DAYS], int NUM_MONKEYS);
double mostFood(double array[][NUM_DAYS], int NUM_MONKEYS);

int main(void)
{
    double weight[NUM_MONKEYS][NUM_DAYS];
    double average;
    double least;
    double most;

    for (int monkeys = 0; monkeys < NUM_MONKEYS; monkeys++)
    {
        for(int days = 0; days < NUM_DAYS; days++)
        {
            cout<<"Monkey "<<(monkeys+1)<<" Day "<<(days+1)<<": ";
            cin>>weight[monkeys][days];
        }
    }

    average = avgFood(weight, NUM_MONKEYS);
    least = leastFood(weight, NUM_MONKEYS);
    most = mostFood(weight, NUM_MONKEYS);

    cout<<"The average food intake for week is "<<average<<" lbs."<<endl;
    cout<<"The least amount of food eaten is "<<least<<" lbs."<<endl;
    cout<<"The most amount of food eaten is "<<most<<" lbs."<<endl;
}

double avgFood(double weight[][NUM_DAYS], int NUM_MONKEYS)
{
    double total = 0;
    double average;

    for(int monkeys = 0; monkeys < NUM_MONKEYS; monkeys++)
    {
        for(int days = 0; days < NUM_DAYS; days++)
        {
            total += weight[monkeys][days];
        } 
    }
    average = total/21;
    return average;
}

double leastFood(double weight[][NUM_DAYS], int NUM_MONKEYS)
{
    int least;

    least = weight[0][0];

    for(int monkeys = 0; monkeys < NUM_MONKEYS; monkeys++)
    {
        for(int days = 1; days < NUM_DAYS; days++)
        {
            if(weight[monkeys][days] < least)
                least = weight[monkeys][days];
        }
    }

    return least;
}

double mostFood(double weight[][NUM_DAYS], int NUM_MONKEYS)
{
    int most;

    most = weight[0][0];

    for(int monkeys = 0; monkeys < NUM_MONKEYS; monkeys++)
    {
        for(int days = 1; days < NUM_DAYS; days++)
        {
            if(weight[monkeys][days] > most)
                most = weight[monkeys][days];
        }
    }

    return most;
}

