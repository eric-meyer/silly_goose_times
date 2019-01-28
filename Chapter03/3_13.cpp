/*A cookie recipe calls for the following ingredients:
    • 1.5 cups of sugar
    • 1 cup of butter
    • 2. 75 cups of flour
The recipe produces 48 cookies with these amounts of the ingredients. 
Write a program that asks the user how many cookies he or she wants to make 
and then displays the number of cups of each ingredient needed for 
the specified number of cookies. */

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    const int SERVING = 48;
    const float SUGAR = 1.5;
    const int BUTTER = 1;
    const double FLOUR = 2.75;
    int num_cookies;
    double num_serving, serving_sugar, serving_butter, serving_flour;

    cout<<"How many cookies do you want to make?\n";
    cin>>num_cookies;

    num_serving = (double) num_cookies/SERVING;
    serving_sugar = num_serving * SUGAR;
    serving_butter = num_serving * BUTTER;
    serving_flour = num_serving * FLOUR;

    cout<<fixed<<setprecision(2);
    cout<<left<<setw(15)<<"Sugar:"<<left<<setw(20)<<serving_sugar<<" cups of sugar\n";
    cout<<left<<setw(15)<<"Butter:"<<left<<setw(20)<<serving_butter<<" cups of butter\n";
    cout<<left<<setw(15)<<"Flour:"<<left<<setw(20)<<serving_flour<<" cups of flour\n";

    return 0; 
}