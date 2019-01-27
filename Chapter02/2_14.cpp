/*The star player of a high school basketball team is 74 inches tall. 
Write a program to compute and display the height in feet/inches form.*/

#include <iostream>
using namespace std;

int main(void)
{
    int player_height = 74;
    int player_feet = player_height/12;
    int player_inches = player_height%12;

    cout<<"The star player is "<<player_feet<<" feet and "<<player_inches<<" inches.\n";
    return 0;
}