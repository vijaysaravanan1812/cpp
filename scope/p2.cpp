//program to demostrate scope of variable

#include<iostream>

using namespace std;


class test
{
private:
    int x;
public:
    test()
    {
        x = 23;
    }
    void function(int x)
    {
        printf("%d local variable\n",x);
        printf("%d Global variable\n",test::x);
    }
};

int main()
{
    test t1;
    t1.function(10);
}