/*Write a function named celsius that accepts a Fahrenheit 
temperature as an argument and returns the temperature 
converted to Celsius. Demonstrate the function by calling it 
in a loop that displays a table of the Fahrenheit 
temperatures O through 20 and their Celsius equivalents.*/

#include <iostream>
#include <iomanip>
using namespace std;

void celsius(int fahr);

int main(void)
{
    int fahr;
    for(fahr = 0; fahr <= 20; fahr++)
    {
        celsius(fahr);
    }
    return 0;
}

void celsius(int fahr)
{
    double celsius;
    celsius = (9/5) * (fahr - 32.0);
    cout<<left<<setw(15)<<"Fahrenheit: "<<fahr;
    cout<<right<<setw(15)<<right<<"Celsius: "<<celsius<<endl;
}