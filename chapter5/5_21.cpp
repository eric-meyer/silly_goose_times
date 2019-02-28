/*Write a program that uses nested loops to display the diamond*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int crosses = 1,
        spaces = 3;

    for (int i = 1; i <= 7; i++)
    {
        for(int i = 1; i <= spaces; i++)
        {
            cout<<" ";
        }
        for(int i = 1; i<= crosses; i++)
        {
            cout<<"+";
        }
        if(i < 4)
        {
            spaces--;
            crosses+=2;
        }
        else
        {
            spaces++;
            crosses-=2;
        }
        
        cout<<endl;
        
    }
}