//1.	Write a C++ program using classes and objects to accept a text passage using
// String concept. Accordingly, implement find and replace option in the given passage
// by accepting two strings from the user.

//Member Functions

#include <iostream>
using namespace std;
#include <cstring>
#include <string.h>
#include "find_and_replace.h"

void Find::accept()
{
    string line;
    str = "";
    cout<<"Enter text : \n";
    while(getline(cin,line) && !line.empty())
	{
        str += line + " ";
    }
}

void Find::Find_Replace()
{
    string find,replace;
    cout<<"Find : ";
    cin>>find;
    cout<<"Replace : ";
    cin>>replace;
    
    cout << "\nOutput: " << endl;
    int pos = str.find(find);
    while(pos <= str.length() - 1)
	{
        str.replace(pos,find.size(),replace);
        pos = str.find(find,pos+replace.size());
    }
    cout<<str<<endl;
}
