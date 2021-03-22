// program to demostrate the static data member,static member function and constant data member

#include<iostream>

using namespace std;

class point
{

    int q = 10;
public:
    static int p;// p is int data type shared by all objects and p should not declare here
    static void display();
    int con_function() const;
    point();
};

//p can be declare
int point::p;

void point::display()
{
    printf("Static p is %d\n",p);
}

point::point()
{
    printf("static p is %d\n",p);
}

int point::con_function() const
{
    printf("q = %d\n",q);
}

int main()
{
    point obj1;
    point::p++;
    obj1.p ++;
    point::display();
    point obj2;
    obj2.p ++;
    obj2.display();
    obj2.con_function();
}
