#include<iostream>
#include"student.cpp"
using namespace std;
int main()
{
    Student p[5];
    
    for( int i=0; i<5; i++ )
	{
		cout << "student details " << i + 1 << endl;
		p[i].setstudent();

	}
     
    for(int i=0; i<5; i++ )
	{
		cout << "student " << i + 1 << endl;
		p[i].displaystudent();
	}

	insertionSort(p,5);   



}