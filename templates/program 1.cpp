// program to demostrate the templates in cpp

#include<iostream>
using namespace std;

template <typename T>
T mymax(T x,T y)
{
    printf("Template function\n");
    return (x > y)?x:y;
} 


template <>
int mymax<int>(int x,int y) 
{
    printf("New syntax function\n");
    return (x>y)?x:y;
}

template <typename T,typename U>
T mymax(T x, U y)
{
    printf("Overloaded function\n");
    return (x>y)?x:y;
}

int main()
{
    int x = mymax(94,'y');
    printf("x = %c \n ",x);
    int c = mymax(23,'a');
    printf("c = %c \n",c);
    mymax(6,7);
    return 0;
}