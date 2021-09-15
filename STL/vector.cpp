// program to use vector

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v;

    for (int i = 0; i < 10; i++)
        v.push_back(i);
    for (int i = 0; i < 10; i++)
    {
        cout<<v[i]<<" ";
    }
    printf("\n");
    printf("Size %d \n",v.size());
    printf("capacity %d \n",v.capacity());
    for (auto i = v.rbegin(); i != v.rend(); ++i)
    {
        cout<<*i<<" | ";
    }
    printf("\n");
    

    
}