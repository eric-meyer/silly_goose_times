/*Write a program that prompts the user to enter a number between 1 and 20 for
the number of students in the class and then loops to read in that many names. 
Once all the names have been read in, it reports which student would be at 
the front of the line and which one would be at the end of the line. 
You may assume that no two students have the same name. */

#include <iostream>
using namespace std;

int main(void)
{
    int num_students;
    string name, first, last;

    //Read students
    cout<<"How many students are in the class? ";
    cin>>num_students;

    //Ignore termnating character from int
    cin.ignore(1);

    cout<<"What is the student's name? ";
    getline(cin,name);
    first = name;

    for(int i = 0; i < num_students - 1; i++)
    {
        cout<<"What is the student's name? ";
        getline(cin,name);

        if(name < first)
        {
            first = name;
        }
        else if (name > last)
        {
            last = name;
        }
    }
    cout<<first<<" is in the front and "<<last<<" is at the end.\n";

    return 0;
}