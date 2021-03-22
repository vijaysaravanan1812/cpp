//program to demostrate namespace
//aceessing  different scope variable 
#include<iostream>

using namespace std;

int x = 10;
namespace sample1
{
    int x = 20;
}

int main()
{
    int x = 2;
    printf("Namespace variable %d \n ",sample1::x);
    printf("local variable %d \n",x);
    cout<<"global variable "<<::x<<endl;

    return 0;
}