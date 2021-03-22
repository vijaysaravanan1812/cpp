//program to demostrate acessing contents in namespace

#include<iostream>


namespace sample1{
    void function()
    {
      std::cout<<"hello world\n";
    }
}


namespace sample2{
    void function()
    {
        printf("Welcome to cpp laboratory\n");
    }
}

int main()
{
    using namespace sample1;
    function();
}