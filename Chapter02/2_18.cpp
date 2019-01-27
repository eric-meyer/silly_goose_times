/*During the past decade ocean levels have been rising faster than in the past, an average
of approximate ly 3.1 millimeters per year. Write a program that computes how much
ocean levels are expected to rise during the next 15 years if they continue rising at this
rate . Display the answer in both centimeters and inches*/

#include <iostream>
using namespace std;

int main(void)
{
    double avg_rise_mm = 3.1;
    double avg_rise_cm = avg_rise_mm * .1;
    double avg_rise_in = avg_rise_cm * 0.3937;
    double avg_rise_century1 = avg_rise_in * 15;
    double avg_rise_century2 = avg_rise_cm * 15;

    cout<<"Average ocean rise in cm: "<<avg_rise_century2<<endl;
    cout<<"Average ocean rise in in: "<<avg_rise_century1<<endl;

    return 0;
}