/*Design a class called Heading that has data members to hold the company name 
and the report name. A two-parameter default constructor should allow these 
to be specified at the time a new Heading object is created. If the user 
creates a Heading object without passing any arguments, "ABC Industries" 
should be used as a default value for the company name and "Report" should 
be used as a default for the report name. The class should have member functions 
to print a heading in either one-line format*/

#include <iostream>
#include <string>
using namespace std;

class Heading
{
    private:
        string compTitle;
        string repTitle;
    
    public:
        Heading()
        {
            compTitle = "ABC Industries";
            repTitle = "Report";
        }
        void setCompTitle(string c)
        { compTitle = c; }
        void setRepTitle(string r)
        {  repTitle = r; }
        string getCompTitle()
        {  return compTitle;  }
        string getRepTitle()
        {  return repTitle;  }
        void makeHeader1();
        void makeHeader4();
};

void Heading::makeHeader1()
{
    cout<<compTitle<<" "<<repTitle<<endl;
}

void Heading::makeHeader4()
{
    cout<<"********************************"<<endl;
    for(int i = 0; i < 16 - (compTitle.size()/2); i++)
        cout<<" ";
    cout<<compTitle<<endl;
    for(int j = 0; j < 16 - (repTitle.size()/2); j++)
        cout<<" ";
    cout<<repTitle<<endl;
    cout<<"********************************"<<endl;
}

int main()
{
    Heading head1;
    string cTitle;
    string rTitle;

    cout<<"What is your Company's name? \n";
    getline(cin,cTitle);
    cout<<"What is your Report's name \n";
    getline(cin,rTitle);

    head1.setCompTitle(cTitle);
    head1.setRepTitle(rTitle);

    cout<<endl;

    head1.makeHeader1();
    cout<<endl;
    head1.makeHeader4();

    return 0;
}