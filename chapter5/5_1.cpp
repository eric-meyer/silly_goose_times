/*Write a program that uses a loop to display the characters 
for each ASCII code 32 through 127. Display 16 characters on each line 
with one space between characters.*/

#include <iostream>
using namespace std;

int main(void)
{
    int i;

    for(i = 32; i < 128; i++)
    {
        if (i%16 == 0 && i > 32)
        {
            cout<<endl;
        }
        cout<<char(i)<<" ";
    }
    cout<<endl;
    return 0;
}