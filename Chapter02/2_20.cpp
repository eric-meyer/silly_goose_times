/*A particular brand of paint covers 340 square feet per gallon . Write a program to
determine and report approximately how many gallons of paint will be needed to paint
two coats on a wooden fence that is 6 feet high and 100 feet long.*/

#include <iostream>
using namespace std;

int main(void)
{
    int gallon = 340;
    double fence = 600.0;
    double gallon_fence = fence/gallon;

    cout<<"This fence will require "<<gallon_fence<<" gallons to paint"<<endl;

    return 0;
}