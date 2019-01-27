/*Write a program that asks for five test scores . The program should calculate the average
test score and display it. Th e number displayed should be formatted in fixed-point
notation, with one decimal point of precision.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int score1, score2, score3, score4, score5;
    double score_avg;

    cout<<"Please list your 5 test scores: \n";
    cin>>score1>>score2>>score3>>score4>>score5;

    score_avg = (double)(score1 + score2 + score3 + score4 + score5)/5;

    cout<<fixed<<setprecision(1)<<score_avg<<endl;

    return 0;
}