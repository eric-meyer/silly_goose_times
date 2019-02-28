/*Write a program that uses these rules to calculate
and display a contestant's score.*/

#include <iostream>
#include <string>
using namespace std;

void getJudgeData(double &, double &, double &, double &, double &);
double calcScore(double, double, double, double, double);
double findLowest(double, double, double, double, double);
double findHighest(double, double, double, double, double);

int main(void)
{
    double score1, score2, score3, score4, score5;
    double finalAvg;
    getJudgeData(score1, score2, score3, score4, score5);
    finalAvg = calcScore(score1, score2, score3, score4, score5);
    cout<<"Your score is: "<<finalAvg<<endl;
}

void getJudgeData(double &score1, double &score2, double &score3, double &score4, double &score5)
{
    cout<<"Please enter Score 1: "<<endl;
    cin>>score1;

    cout<<"Please enter Score 2: "<<endl;
    cin>>score2;

    cout<<"Please enter Score 3: "<<endl;
    cin>>score3;

    cout<<"Please enter Score 4: "<<endl;
    cin>>score4;

    cout<<"Please enter Score 5: "<<endl;
    cin>>score5;
}

double calcScore(double score1, double score2, double score3, double score4, double score5)
{
    double highest, lowest, total, avg;
    lowest = findLowest(score1, score2, score3, score4, score5);
    highest = findHighest(score1, score2, score3, score4, score5);
    total = score1 + score2 + score3 + score4 + score5 - highest - lowest;
    avg = total/3;
    return avg;
}

double findLowest(double score1, double score2, double score3, double score4, double score5)
{
    double lowest;
    if(score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5)
    {
        lowest = score1;
        return lowest;
    }
    else if(score2 < score1 && score2 < score3 && score2 < score4 && score2 < score5)
    {
        lowest = score2;
        return lowest;
    }
    else if(score3 < score1 && score3 < score2 && score3 < score4 && score3 < score5)
    {
        lowest = score3;
        return lowest;
    }
    else if(score4 < score1 && score4 < score2 && score4 < score3 && score4 < score5)
    {
        lowest = score4;
        return lowest;
    }
    else
    {
        lowest = score5;
        return lowest;
    }
}

double findHighest(double score1, double score2, double score3, double score4, double score5)
{
    double highest;
    if(score1 > score2 && score1 > score3 && score1 > score4 && score1 > score5)
    {
        highest = score1;
        return highest;
    }
    else if(score2 > score1 && score2 > score3 && score2 > score4 && score2 > score5)
    {
        highest = score2;
        return highest;
    }
    else if(score3 > score1 && score3 > score2 && score3 > score4 && score3 > score5)
    {
        highest = score3;
        return highest;
    }
    else if(score4 > score1 && score4 > score2 && score4 > score3 && score4 > score5)
    {
        highest = score4;
        return highest;
    }
    else
    {
        highest = score5;
        return highest;
    }
}