/*Write a program that simulates a lottery. 
The program should have an array of five integers named winningDigits, 
with a randomly generated number in the range of 0 through 9 for each element 
in the array . The program should ask the user to enter five digits and should 
store them in a second integer array named player. The program must compare the 
corresponding elements in the two arrays and count how many digits match. For 
example, the following shows the winningDigits array and the Player array 
with sample numbers stored in each. There are two matching digits, elements 2 and 4. */

#include <iostream>
#include <iomanip>
using namespace std;

int matchArray(int array1[], int array2[], int size);
void showWinning(int array[], int size);
void showPlayer(int array[], int size);

int main(void)
{
    const int SIZE = 5;
    int winningDigits[SIZE];
    int player[SIZE];
    int match;

    for(int i = 0; i < SIZE; i++)
    {
        winningDigits[i] = rand() % 10;
    }

    for(int i = 0; i < SIZE; i++)
    {
        cout<<"Guess #"<<(i+1)<<" : ";
        cin>>player[i];
    }

    match = matchArray(winningDigits, player, SIZE);
    showWinning(winningDigits, SIZE);
    cout<<endl;
    showPlayer(player, SIZE);
    cout<<endl;

    cout<<"You had "<<match<<" matches."<<endl;
}

int matchArray(int winningDigits[], int player[], int size)
{
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        if(winningDigits[i] == player[i])
            count++;
    }
    return count;
}

void showWinning(int winningDigits[], int size)
{
    cout<<setprecision(20)<<"Winning digits: ";
    for(int i = 0; i < size; i++)
    {
        cout<<"   "<<winningDigits[i];
    }
}

void showPlayer(int player[], int size)
{
    cout<<setprecision(20)<<"Player digit:   ";
    for(int i = 0; i < size; i++)
    {
        cout<<"   "<<player[i];
    }
}