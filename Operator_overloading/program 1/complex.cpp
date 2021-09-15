

#include<iostream>
#include"complex.h"

using namespace std;

complex::complex(float real,float img)
{
    this->real = real;
    this->img = img;
}

complex::complex()
{
    this->real = 0;
    this->img = 0;
}

complex complex::operator-()
{
    complex temp;
    temp.real = -real;
    temp.img = -img;
    return temp;
}

complex complex::operator+(complex a)
{
    complex temp;
    temp.real = a.real + real;
    temp.img = a.img + img;
    return temp;
}

complex complex::operator=(complex a)
{
    complex temp;
    real = a.real;
    img = a.img; 
}

complex operator-(complex a,complex b)
{
    return complex((a.real - b.real),( a.img - b.img));
}

bool complex::operator==(complex &a)
{
    return (real == a.real && img == a.img);
}

bool complex::operator!=(complex &a)
{
    return !(real == a.real && img == a.img);
}

istream& operator>>(istream& cin, complex& a)
{
    cout<<"Real part?"<<"\t";
    cin>>a.real;
    cout<<"Imaginary part?"<<"\t";
    cin>>a.img;
    return cin;
}

ostream& operator<<(ostream& cout, complex& a)
{
   if (a.img < 0 )
   {
        cout<<a.real<<a.img<<"i";
   }
   else
   {
        cout<<a.real<<"+"<<a.img<<"i";
   }
   
}