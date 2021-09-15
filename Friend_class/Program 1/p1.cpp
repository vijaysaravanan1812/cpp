//program to implement the friend concept in cpp

#include<iostream>
using namespace std;


class sphere;
class box
{
private:
    double length, breadth, highy, volume;                   
public:
    double compute_volume(double length,double breadth,double hight);
    friend void compare(sphere s,box b);
    box();
};

class sphere
{
private:
    double radius;double pi = 3.14,volume;
public:
    double compute_volume(double radius);
    friend void compare(sphere s,box b);
    
    sphere();  
};



void compare(sphere s,box b)
{
    if (s.volume > b.volume)
    {
        printf("Sphere volume greater\n");   
    }
    else if (s.volume == b.volume)
    {
        printf("Sphere volume equal to Box volume\n");
    }    
    else
    {
        printf("Box volume greater\n");
    }
}


double box::compute_volume(double length,double breadth,double hight)
{
    this->volume = (length*breadth*hight);
}

double sphere::compute_volume(double radius)
{
    this->volume = (4*3.14*radius);
}

int main()
{
    sphere s;box b;
    s.compute_volume(5);
    b.compute_volume(10,35,2);
    compare(s,b);
    return 0;
}
