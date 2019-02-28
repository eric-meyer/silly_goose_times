/*Write a program that displays the Roman numeral equivalent of 
any decimal number between 1 and 20 that the user enters. The Roman 
numerals should be stored in an array of strings, and the decimal number that 
the user enters should be used to locate the array element holding the Roman 
numeral equivalent. The program should have a loop that allows the user to 
continue entering numbers until an end sentinel of O is entered.*/

#include <iostream>
#include <string>
using namespace std;

void getNumeral(string array[], int choice);

int main(void)
{   
    const int NUMERALS = 20;
    string roman[NUMERALS] = { "I", "II", "III", "IV", "V",
                              "VI", "VII","VIII", "IX", "X",
                              "XI", "XII", "XIII", "XIV", "XV",
                              "XVI", "XVII", "XVIII", "XIX", "XX"};
    int choice;

    cout<<"Please enter integer that you would like to convert to a Roman Numeral"<<endl;
    cin>>choice;

    getNumeral(roman, choice);
}           

void getNumeral(string array[], int choice)
{
    cout<<"Your roman numeral is "<<array[choice - 1]<<"."<<endl;
}