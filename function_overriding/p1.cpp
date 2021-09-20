// program to illustrate function overriding


using namespace std;
#include<iostream>

class A
{
    public:
    virtual void print()
    {
        printf("hello from base class\n");
    }
};

class B : public  A
{
    public:
    void print()
    {
        printf("hello from derived class\n");
    }

};


int main()
{
    A a; B b;
    a.print();
    b.print();

}