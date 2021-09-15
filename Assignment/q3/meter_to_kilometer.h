/*3.	Write a C++ program to convert the given
meters into Kilometers and meters using pure
virtual functions and function templates
(Usage of appropriate virtual function to 
suppress the base class functionality).

//Header File
*/ 
#include <iostream>
using namespace std;

template <typename T>
class Distance
{
	protected:
		T meters;
	public:
		void set_value(T m)
		{
			meters = m;
		}
		virtual void convert(T) = 0;
};

template <typename T>
class Kilometer : public Distance<T>
{
	void convert(T m)
	{
		int km;
		km = m/1000;
		cout << km << " kilometers and " << m - (km*1000) << " meters" << endl;
	}
};
