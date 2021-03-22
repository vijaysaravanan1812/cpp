//program to demostrate defining  uname namespace

#include<iostream>

using namespace std;

namespace {
    int x = 10;
    void funtion()
    {
        printf("global function\n");
    }
}


int main()
{
    cout<<"x = "<<x<<endl;
    funtion();
    return 0;
}