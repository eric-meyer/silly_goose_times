/*Write a program that asks the user to enter today's sales rounded 
to the nearest $100 for each of three stores. */

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int store1, store2, store3;
    int sym1, sym2, sym3;

    cout<<"Please enter the sales for store 1-3 rounded to the nearest $100"<<endl;

    cout<<"Sales for store 1: ";
    cin>>store1;

    cout<<"Sales for store 2: ";
    cin>>store2;

    cout<<"Sales for store 3: ";
    cin>>store3;

    sym1 = store1/100;
    sym2 = store2/100;
    sym3 = store3/100;

    cout<<"Store 1: ";
    for(int i = 0; i < sym1; i++)
    {
        cout<<"*";
    } 
    cout<<endl;

    cout<<"Store 2: ";
    for(int i = 0; i < sym2; i++)
    {
        cout<<"*";
    } 
    cout<<endl;

    cout<<"Store 3: ";
    for(int i = 0; i < sym3; i++)
    {
        cout<<"*";
    } 
    cout<<endl;

    return 0;
}