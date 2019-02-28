/*Design a class for a widget manufacturing plant. Assuming that 10 widgets may be
produced each hour, the class object will calculate how many days it will take to
produce any number of widgets. (The plant operates two 8-hour shifts per day.) 
Write a program that asks the user for the number of widgets that have been 
ordered and then displays the number of days it will take to produce them. 
Think about what values your program should accept for the number of 
widgets ordered.*/

#include <iostream>
#include <string>
using namespace std;

class Widget
{
    private:
        int const WIDGETS_PER_HOUR = 10;
        int const WORK_HOURS = 16;
        int widgets;
        int widgetsPerDay = WORK_HOURS * WIDGETS_PER_HOUR;
        double widgetDays;
    
    public:
        void setWidgets(int w)
        {  widgets = w;
           calcWidgetDays(widgets);   
        }
        int getWidgets()
        {  return widgets; }
        double getWidgetDays()
        {  return widgetDays;  }
        void calcWidgetDays(int widgets)
        {  widgetDays = (double)widgets/widgetsPerDay; }
};

int main()
{
    Widget widget1;
    int widgets;

    cout<<"How many widgets would you like prepared? \n";
    cin>>widgets;

    widget1.setWidgets(widgets);

    cout<<"This will take "<<widget1.getWidgetDays()<<" days!"<<endl;
    
    return 0;
}
