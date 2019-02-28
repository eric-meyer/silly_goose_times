/*Demonstrate the class in a program that creates a Car object and then calls the
accelerate function five times. After each call to the accelerate function, get 
the current speed of the car and display it. Then, call the brake function 
five times. After each call to the brake function, get the current speed of 
the car and display it. */

#include <iostream>
using namespace std;

class Car
{
    private:
        int year;
        string make;
        int speed;

    public:
        Car(int, string);
        int getYear()
        {  return year;  }
        string getMake()
        {  return make;  }
        int getSpeed()
        {  return speed;  }
        void accelerator()
        { speed += 5;}
        void brake()
        { speed -= 5; }
};

Car::Car(int y, string m)
{
    year = y;
    make = m;
    speed = 0;
}

int main()
{
    Car myCar(2017, "Ford");
    
    for(int i = 0; i < 5; i++)
    {
        myCar.accelerator();
        cout<<"The car is travelling "<<myCar.getSpeed()<<" mph."<<endl;
    }

    for(int i = 0; i < 5; i++)
    {
        myCar.brake();
        cout<<"The car is travelling "<<myCar.getSpeed()<<" mph."<<endl;
    }

    return 0;
}