/*Write a program that asks the user to enter an item's wholesale cost and its markup
percentage.*/

#include <iostream>
#include <iomanip>
using namespace std;

void getCost(int &cost, double &percMark);
double calculateRetail(int num1, double num2);

 int main(void)
 {
    int cost; 
    double percMark, finalMark;
    getCost(cost, percMark);
    finalMark = calculateRetail(cost, percMark);
    cout<<fixed<<setprecision(2);
    cout<<"The markup price is: $"<<finalMark<<endl;
 }

//Get cost of product and the percent markup
 void getCost(int &cost, double &percMark)
 {
     do
     {
        cout<<"What is the cost of your product?\n";
        cin>>cost;
     } while (cost < 0);

     do
     {
        cout<<"What is the percent markup for your product?\n";
        cin>>percMark;
        percMark = (percMark * .01) + 1;
     } while (percMark < 0);
 }

//Multiply cost and percent markup to get the final cost
 double calculateRetail(int cost, double percMark)
 {
     int total;
     total = cost * percMark;
     return total;
 }