//program to demostrate scope of variable
//scope resolution operator

#include<iostream>

using namespace std;

int x = 39;

int main()
{
    int x = 10;
    printf("%d global variable\n",::x);
    printf("%d Local variable\n",x);
    return 0;

}