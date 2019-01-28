/*A movie theater only keeps 80 percent of the revenue earned from ticket sales. 
The other 20 percent goes to the distibutor. Write a program that calculates a 
theater's gross and net box office revenue for a night. The program should ask 
for the name of the movie, and how many adult and child tickets were sold. 
(The price of an adult ticket is $10 and a child's ticket is $6.) 
It should display a report similar to the following:
Movie Name:                        "Wheels of Fury"
Adult Tickets Sold:                382
Child Tickets Sold:                127
Gross Box Office Revenue:        $ 4582.00
Amount Paid to Distributor:    - $ 916.40
Net Box Office Revenue:          $ 3665.60 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(void)
{
    string movie;
    int child_tickets, child_total, adult_total, adult_tickets;
    double gross_rev, distributor, net_rev;

    cout<<"What is the movie name?\n";
    getline(cin,movie);

    cout<<"How many child tickets did you sell?\n";
    cin>>child_tickets;
    child_total = child_tickets * 6;

    cout<<"How many adult tickets did you sell?\n";
    cin>>adult_tickets;
    adult_total = adult_tickets * 10;

    gross_rev = (double) child_total + adult_total;
    distributor = gross_rev * .2;
    net_rev = gross_rev - distributor;

    cout<<fixed<<setprecision(2);
    cout<<left<<setw(30)<<"Movie Name:"<<right<<setw(34)<<movie<<endl;
    cout<<left<<setw(30)<<"Adult Tickets Sold:"<<right<<setw(23)<<adult_tickets<<endl;
    cout<<left<<setw(30)<<"Child Tickets Sold:"<<right<<setw(23)<<child_tickets<<endl;
    cout<<left<<setw(30)<<"Gross Box Office Revenue:"<<right<<setw(20)<<"$ "<<gross_rev<<endl;
    cout<<left<<setw(30)<<"Amount Paid to the Distributor:"<<right<<setw(19)<<"- $ "<<distributor<<endl;
    cout<<left<<setw(30)<<"Net Box Office Revenue:"<<right<<setw(20)<<"$ "<<net_rev<<endl;

    return 0;
}