/*Write a program that creates a table showing the radius and area for
a circle whose radius begins with 1 and continues doubling until it is 8. 
Use 3.14 for PI.*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void)
{
    const double PI = 3.14;
    double area;
    int radius;

    cout<<left;
    cout<<setw(10)<<"Radius"<<setw(5)<<"Area\n";
    cout<<"---------------"<<endl;

    for(radius = 1; radius <= 8; radius *= 2)
    {
        area = PI * pow(radius,2);
        cout<<fixed<<setprecision(2);
        cout<<left<<setw(10)<<radius<<right<<setw(4)<<area<<endl;
    }
    return 0;
}