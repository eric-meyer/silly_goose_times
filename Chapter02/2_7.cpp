/*Write a program that calculates the number of acres in a tract of land
whose size is 869 x 360*/

#include <iostream>
using namespace std;

int main(void)
{
    double acre_feet = 43450.0;
    int tract_feet = 869 * 360;
    double tract_acre = tract_feet/acre_feet;

    cout<<"This tract has "<<tract_acre<<" acres in it.\n";
    return 0; 
}