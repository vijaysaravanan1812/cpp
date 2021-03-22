//program to demostrate to create namespace


#include<iostream>

using namespace std;

namespace sample1
{
    void function()
    {
        printf("yamuna is %d years old child\n",6);
    }
} // namespace sample


int main()
{
    using namespace sample1;
    sample1::function();
}