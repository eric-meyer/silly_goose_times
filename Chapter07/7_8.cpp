/*Include a constructor that allows all four of these member data values to 
be specified at the time a MovieData variable is created. The program should 
create two MovieData variables and pass each one in turn to a function that 
displays the information about the movie in a clearly formatted manner. 
Pass the MovieData variables to the display function by value. */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct MovieData
{
    string title,
           director;
    int releaseYear,
        runTime;  
};

void displayMovie(MovieData movie);

int main()
{
    MovieData movie1, movie2;

    //Gather data for first movie
    cout<<"What is the title of your first movie? \n";
    getline(cin, movie1.title);

    cout<<"What is the name of the director for your first movie? \n";
    getline(cin, movie1.director);

    cout<<"What is the release year of your first movie? \n";
    cin>>movie1.releaseYear;

    cout<<"What is the run time of your first movie in minutes? \n";
    cin>>movie1.runTime;
    cout<<endl;

    //Display data for first movie
    displayMovie(movie1);

    //Gather data for second movie
    cin.ignore();
    cout<<"What is the title of your second movie? \n";
    getline(cin, movie2.title);

    cout<<"What is the name of the director for your second movie? \n";
    getline(cin, movie2.director);

    cout<<"What is the release year of your second movie? \n";
    cin>>movie2.releaseYear;

    cout<<"What is the run time of your second movie in minutes? \n";
    cin>>movie2.runTime;
    cout<<endl;

    //Display data for second movie
    displayMovie(movie2);

    return 0;
}

void displayMovie(MovieData movie)
{
    cout<<"Movie Title:       "<<movie.title<<endl;
    cout<<"Director:          "<<movie.director<<endl;
    cout<<"Release Year:      "<<movie.releaseYear<<endl;
    cout<<"Run Time:          "<<movie.runTime<<" Minutes\n"<<endl;
}