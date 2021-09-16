//program to illustrate inheritance 

using namespace std;
#include<iostream>
#include<string>

class vehicle
{
    public: 
        int number_of_wheels;
        string mode_of_trasport;
        string fuel;
        int millage;
};

class four_wheeler : virtual public vehicle
{
    public:
        int a;
  
};

class two_wheeler : virtual public vehicle
{
    public:
        int b;
};

class A : public four_wheeler , public two_wheeler
{

};


int main()
{

    vehicle sumo;
    A sample;
    sample.number_of_wheels = 10;
    sumo.number_of_wheels = 10;
    two_wheeler harly_david;
    harly_david.b = 24;

}
