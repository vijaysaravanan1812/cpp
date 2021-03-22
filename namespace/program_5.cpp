//program to demostrate acessing content in namespace

#include<iostream>

using namespace std;

namespace sample1
{
    void print(int x)
    {
         cout<<"x = "<<x<<endl;   
    }
} // namespace sample1

namespace sample2{
    int x = 10;
}

namespace sample3{
    int add(int a, int b)
    {
        return a + b;
    }
}

int main()
{
    int x = 23;
    sample1::print(x);
    using sample2::x;
    cout<<"X = "<<x<<endl;

}