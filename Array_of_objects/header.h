using namespace std;
class Student{
public:
    string name;
        int age;
        int mark;
    void setstudent(){
        cout << "Enter name" << endl;
            cin>>name;
		cout << "Enter age" << endl;
		    cin>>age;
        cout << "Enter mark" << endl;
            cin>>mark;
	}    
    void displaystudent();
    friend void insertionSort(Student p[], int n);
    };