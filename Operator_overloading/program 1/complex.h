// program to demostrate the operoverload

using namespace std;

class complex
{
private:
    float real,img;// real and imaginary part
public:
    complex operator-();
    complex operator+(complex a);
    friend complex operator-(complex a,complex b);
    complex operator=(complex a);
    bool operator==( complex &a );
    bool operator!=( complex &a);
    friend istream& operator>>(istream& cin , complex &a );
    friend ostream& operator<<(ostream& cout, complex &a);    
    complex();
    complex(float a,float b);
};
