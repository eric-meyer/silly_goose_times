/* The Earth's ocean levels have risen an average of 1.8 millimeters per year over the past
century . Write a program that computes and displays the number of centimeters and
number of inches the oceans rose during this time. One millimeter is equivalent to
0.1 centimeters . One centimeter is equivalent to 0.3937 inches */

#include <iostream>
using namespace std;

int main(void)
{
    double avg_rise_mm = 1.8;
    double avg_rise_cm = avg_rise_mm * .1;
    double avg_rise_in = avg_rise_cm * 0.3937;
    double avg_rise_century1 = avg_rise_in * 100;
    double avg_rise_century2 = avg_rise_cm * 100;

    cout<<"Average ocean rise in cm: "<<avg_rise_century2<<endl;
    cout<<"Average ocean rise in in: "<<avg_rise_century1<<endl;

    return 0;
}