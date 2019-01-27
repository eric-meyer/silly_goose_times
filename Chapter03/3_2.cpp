/*There are three seating categories at a stadium . For a softball game, Class A seats cost
$15, Class B seats cost $12, and Class C seats cost $9. Write a program that asks how
many tickets for each class of seats were sold, then disp lays the amount of income
generated from ticket sales. Format your dollar amount in a fixed-point notation with
two decimal points and make sure the decimal point is always displayed.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int classA_num, classB_num, classC_num;
    double classA_total, classB_total, classC_total, total_income;

    cout<<"How many Class A tickets did you sell?"<<endl;
    cin>>classA_num;
    classA_total = (double)classA_num * 15;

    cout<<"How many Class B tickets did you sell?"<<endl;
    cin>>classB_num;
    classB_total = (double)classB_num * 12;

    cout<<"How many Class C tickets did you sell?"<<endl;
    cin>>classC_num;
    classC_total = (double)classC_num * 9;

    total_income = classA_total + classB_total + classC_total;
    cout<<fixed<<setprecision(2)<<"You generated $"<<total_income<<" from ticket sales.\n";

    return 0;
}