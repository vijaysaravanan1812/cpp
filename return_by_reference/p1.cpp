//program to demonstrate return by refference
#include<iostream>

using namespace std;


int& gt(int &x,int &y)
{
    return x>y?x:y;
}

int main()
{
    int x =13,y = 24,t =30;
    int z = gt(x,y);
    cout<<"z = "<<z<<endl;
    gt(x,y) = t;

    cout<<"x ="<<x<<"y = "<<y<<endl;


}