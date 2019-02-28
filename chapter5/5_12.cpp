/*Write a program that generates a random number between 1 and 100 and asks the
user to guess what the number is. If the user's guess is higher than the random
number, the program shou ld display "Too high. Try again . " If the user's 
guess is lower than the random number, the program should disp lay "Too low. 
Try again." The program should use a loop that repeats until the user 
correctly guesses the random number. Then the program should display 
"Congratulations. You figured out my number."*/

#include <iostream>
using namespace std;

int main(void)
{
    int num, guess;
    int count = 0;

    cout<<"Guess a number between 1 and 100\n";
    cin>>guess;
    count++;

    num = rand()%100+1;

    while(guess!= num)
    {
        if(guess > num)
        {
            cout<<"Too High. Try Again.\n";
        }
        else
        {
            cout<<"Too low. Try Again. \n";
        }
        cout<<"Guess another number between 1 and 100.\n";
        cin>>guess;
        count++;
    }

    cout<<"Congrats! You guessed my number.  You used "<<count<<" guesses. \n";

}