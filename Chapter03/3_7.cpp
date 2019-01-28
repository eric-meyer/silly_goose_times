/*Write a program that calculates the average monthly rainfall for three months. 
The program should ask the user to enter the name of each month, such as June or July, 
and the amount of rain (in inches) that fell that month. The program should display a
message similar to the following:

The average monthly rainfall for June, July, and August was 6.72 inches.*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string month1, month2, month3;
    int rain1, rain2, rain3;
    double avg_rain;

    cout<<"Please enter the first month: "<<endl;
    getline(cin, month1);

    cout<<"Please enter the second month: "<<endl;
    getline(cin, month2);

    cout<<"Please enter the third month: "<<endl;
    getline(cin, month3);

    cout<<"Please enter the rainfall for "<<month1<<":\n";
    cin>>rain1;

    cout<<"Please enter the rainfall for "<<month2<<":\n";
    cin>>rain2;

    cout<<"Please enter the rainfall for "<<month3<<":\n";
    cin>>rain3;

    avg_rain = (double) (rain1 + rain2 + rain3)/3;

    cout<<fixed<<setprecision(2)<<"The average monthly rainfall for "<<month1<<", "<<month2<<", "<<"and "<<month3<<" was ";
    cout<<avg_rain<<" inches.\n";

    return 0;
}