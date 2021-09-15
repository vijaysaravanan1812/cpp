#include<iostream>
#include"header.h"
using namespace std;
void Student::displaystudent()
{
    cout<<"\nname= "<<name<<"\n age= "<<age<<"\nmark= "<<mark<<"  \n";

}
void insertionSort(Student *p, int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = p[i].mark;
        j = i - 1;
 
        while (j >= 0 && p[j].mark > key)
        {
            p[j + 1] = p[j];
            j = j - 1;
        }
        p[j + 1].mark = key;
    }
    
		cout << "Top three students are \n " << i + 1 << endl;
		p[2].displaystudent();
        p[3].displaystudent();
        p[4].displaystudent();
	
}

