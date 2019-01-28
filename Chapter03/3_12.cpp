/*A bag of cookies holds 30 cookies . The calorie information on the bag 
claims that there are 10 "servings" in the bag and that a serving equals 
240 calories. Write a program that asks the user to input how many 
cookies they actually ate and then reports how many total calories were consumed. */

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    //init 3 cookies as serving size and 240 calories per serving
    const int serving = 3;
    const int cal_serving = 240;
    int cookies_ate;
    double servings_ate;
    double calories_ate;

    cout<<"How many cookies did you eat?\n";
    cin>>cookies_ate;

    servings_ate = (double) cookies_ate/serving;
    calories_ate = servings_ate * cal_serving;

    cout<<fixed<<setprecision(2);
    cout<<"You ate "<<calories_ate<<" calories.\n";

    return 0;
}
