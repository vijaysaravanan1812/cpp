// program for complex number

#include<iostream>
#include"complex.cpp"

using namespace std;

int main()
{
    complex c1(3,4),c2,c3;

    complex *c4 = new complex(4,5);
    complex **c5 = &c4 ; 
    cout<<"Address of C4\t\t\t\t\t\t"<<c4;
    cout<<"\nDerefferencing the C4\t\t\t\t\t"<<*c4<<"\n";
    cout <<"Address of C5\t\t\t\t\t\t"<< c5 <<"\nAddress of C4 store in C5 \t\t\t\t"<< *c5<<"\nDerefferencing the twice the C5 to get value in C4\t"<<**c5<<"\n";
   
    printf("For C2 Enter value\n");
    cin>>c2;
    cout<<c1<<" - "<<c2<<"\n";
    c3 = c1 - c2;
    cout<<c3<<"\n";
    return 0 ;
}