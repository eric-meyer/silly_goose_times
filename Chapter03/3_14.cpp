/*Write a program that converts Celsius temperatures to Fahrenheit temperatures. 
The formula is:

F =9/5 C + 32

where Fis the Fahrenheit temperature and C is the Celsius temperature. The program
should prompt the user to input a Celsius temperature and should display the
corresponding Farenheit temperature. */

#include <iostream>
using namespace std; 

int main(void)
{
    double fahr_converter = 9.0/5;
    double celsius;
    double fahr;

    cout<<"What temperature would you like to convert?\n";
    cin>>celsius;

    fahr = (double) fahr_converter*celsius + 32;
    cout<<fahr<<" degrees Fahrenheit.\n";

    return 0;

}