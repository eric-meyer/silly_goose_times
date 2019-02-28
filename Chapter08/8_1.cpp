/*Write a modular program that accepts up to 20 integer test scores in the range 
of O to 100 from the user and stores them in an array. Then main should report 
how many perfect scores were entered (i.e., scores of 100), 
using a value-returning count Per fect function to help it.*/

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int showPerfect(int scoreArray[], int size);
 
int main (void)
{
    const int NUM_SCORES = 10;
    int scores[NUM_SCORES];
    int count;

    //enter values
    cout<<"Please enter a test score in the range of 0 to 100"<<endl;

    for(int i = 0; i < NUM_SCORES; i++)
    {
        do
        {
            cin>>scores[i];
        } while (scores[i] < 0 || scores[i] > 100);
        
        

    }

    //display values
    for(int i = 0; i < NUM_SCORES; i++)
    {
        cout<<"Score "<<(i+1)<<":"<<" "<<scores[i]<<endl;
    }

    count = showPerfect(scores, NUM_SCORES);
    cout<<"You had "<<count<<" perfect scores."<<endl;
}

//determine perfect scores
int showPerfect(int scores[], int size)
{
    int count = 0;
    for(int index = 0; index < size; ++index)
    {
        if(scores[index] == 100)
        {
            count++;
        }
    }
    return count;
}