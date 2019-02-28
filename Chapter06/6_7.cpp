/*Write a program that asks the user to enter two names and stores them 
in string objects. It should then report whether or not, ignoring case, they 
are the same.*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

void getNames(string &, string &);
bool sameString(string, string);
string upperCaseIt(string); 

int main(void)
{
    string name1, name2;
    bool same;

    getNames(name1, name2);
    same = sameString(name1, name2);

    if(same)
    {
        cout<<"The words are the same! \n";
    }
    else
    {
        cout<<"The words are different! \n";
    }
    
}

void getNames(string &name1, string &name2)
{
    cout<<"What is the first name? \n";
    getline(cin, name1);

    cout<<"What is the second name? \n";
    getline(cin, name2);
}

bool sameString(string name1, string name2)
{
    string upperName1, upperName2;
    upperName1 = upperCaseIt(name1);
    upperName2 = upperCaseIt(name2);


    if (upperName1 == upperName2)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

string upperCaseIt(string name)
{
    int i;

    for (i = 0; i <= name.size(); i++)
    {
        name[i] = toupper(name[i]);
    } 
    return name;
}