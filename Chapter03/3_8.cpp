/*Write a program that asks the user for the number of males and the number 
of females registered in a class. The program should compute and report what 
percentage of the students are males and what percentage are females. 
Display the output with two decimal points. If you remembered to convert the 
decimal result of each calculation to percent form when you displayed it, the two 
values should add up to 100.00 percent.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int males;
    int females;
    int total;
    double percent_males;
    double percent_females;

    cout<<"How many males are in your class?"<<endl;
    cin>>males;
    cout<<males<<" males.\n";

    cout<<"How many females are in your class?"<<endl;
    cin>>females;
    cout<<females<<" females. \n";


    total = males + females;
    cout<<total<<" students. \n";

    percent_males = (double) males/total * 100;
    percent_females = (double) females/total * 100;

    cout<<fixed<<setprecision(2)<<percent_males<<" males.\n";
    cout<<fixed<<setprecision(2)<<percent_females<<" females. \n";

    return 0;
}