/*An online book club awards points to its customers based on the number of books
purchased each month. Points are awarded as follows:

Books Purchased       Points Earned
0                           0
1                           5
2                           15
3                           30
4 or more                   50
Write a program that asks the user to enter the number of books purchased 
this month and then displays the number of points awarded. */

#include <iostream>
using namespace std;

int main(void)
{
    int booksPurchased, points;

    cout<<"How many books did you purchase this month? \n";
    cin>>booksPurchased;

    if(booksPurchased == 0)
    {
        points = 0;
    }
    else if(booksPurchased == 1)
    {
        points = 5;
    }
    else if(booksPurchased == 2)
    {
        points = 15;
    }
    else if(booksPurchased == 3)
    {
        points = 30;
    }
    else if(booksPurchased >= 4)
    {
        points = 50;
    }

    cout<<"You earned "<<points<<" points this month. \n";

}