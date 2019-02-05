/*Write a program that asks the user to enter two numbers. 
The program should use the conditional operator to determine which 
number is the smaller and which is the larger. */

#include <iostream>
using namespace std;

int main(void)
{
    int num1, num2, max, min;

    cout<<"Please enter a number: \n";
    cin>>num1;

    cout<<"Please enter another number: \n";
    cin>>num2;

    if(num1 == num2)
    {
        cout<<"You entered the same numbers\n";
    }
    else if(num1 > num2)
    {
        max = num1;
        min = num2;
        cout<<max<<" is the maximum\n";
        cout<<min<<" is the minimum\n";
    }
    else
    {
        max = num2;
        min = num1;
        cout<<max<<" is the maximum\n";
        cout<<min<<" is the minimum\n";
    }
    
    return 0;
}