//Friend implement 

#include<iostream>
#include"Friend.h"

using namespace std;


box::box()
{
    this->length = 0;
    this->breadth = 0;
    this->hight = 0;
}

sphere::sphere()
{
    this->radius = 0;
}

box::box(double length, double breadth, double hight)
{
    this->length = length;
    this->breadth = breadth;
    this->hight = hight;
}

sphere::sphere(double radius)
{
    this->radius = radius;
}

void compare(sphere s,box b)
{
    if (s.volume > b.volume)
    {
        printf("Sphere volume greater\n"); 
        printf("sphere volume %lf \nbox volume %lf\n",s.volume,b.volume);  
    }
    else if (s.volume == b.volume)
    {
        printf("Sphere volume equal to Box volume\n");
                printf("sphere volume \n%lf box volume %lf\n",s.volume,b.volume);
    }    
    else
    {
        printf("Box volume greater\n");
        printf("sphere volume %lf\nbox volume %lf\n",s.volume,b.volume);
    }
    b.ratio(s);
}

void box::ratio(sphere s)
{
    printf("Volume of sphere to Volumen of box\t");
    printf("%lf \n",s.volume/volume);
}


double box::compute_volume()
{
    this->volume = (this->length*this->breadth*this->hight);
}

double sphere::compute_volume()
{
    this->volume = (4*3.14*this->radius);
}
cone::cone()
{
    this->height = 0;
}

cone::cone(double height)
{
    this->height = height;
}

double cone::compute_volume()
{
    this->volume = height*3.14*5*5;
}

void cone::compare(sphere s)
{
    if (s.volume > volume)
    {
        printf("Sphere volume is great\n");
        printf("sphere volume %lf cone volume %lf\n",s.volume,volume);
    }
    else
    {
        printf("Cone volume is great\n");
                printf("sphere volume %lf cone volume %lf\n",s.volume,volume);
    }
    
}