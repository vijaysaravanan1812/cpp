//Main File

#include <iostream>
using namespace std;
#include "meter_to_kilometer.h"

int main()
{
	Distance <int>*D;
	Kilometer <int>K;
	D = &K;
	
	int m;
	for (;;)
	{
		cout << "Enter value to convert to kilometers: ";
		cin >> m;
		D->set_value(m);
		D->convert(m);
		cout << endl;
	}
	return 0;
}
