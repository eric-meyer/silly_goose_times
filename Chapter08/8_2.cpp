/*Create a program with a function that accepts three arguments: 
an integer array, an integer size that indicates how many elements 
are in the array, and an integer n. The function should display all 
of the numbers in the array that are greater than the number n. */

#include <iostream>
using namespace std;

void greaterThanNum(int array[], int size, int n);

int main(void)
{
    const int SIZE = 5;
    int array[SIZE] = {10, 12, 8, 7, 11};
    int num;

    cout<<"What number would you like to check?"<<endl;
    cin>>num;

    greaterThanNum(array, SIZE, num);
}

void greaterThanNum(int array[], int size, int num)
{
    for(int i = 0; i < size; i++)
    {
        if(array[i] > num)
        {
            cout<<array[i]<<" is greater than "<<num<<endl;
        }
    }
}