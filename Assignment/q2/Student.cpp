/*2.	Write a C++ program to implement the following student communities with their properties:
a.	Arts – Roll No, Name, Address, Marks, Grade and Language Name
b.	Science – Roll No, Name, Address, Marks, Grade and Name of the science stream opted
c.	Engineering- Roll No, Name, Address, Marks, Grade and Name of the Engg Stream opted
d.	Engg Research Student – Characteristics of Engg Stream + Research Topic Specialization + Thesis Grading
e.	Science & Humanities Research student – Characteristics of Arts and Science + Research Topic Specialization + Thesis Grading
Develop the above application with appropriate classes, objects, constructors, inheritance (follow public derivation) and 
calculate the grade of each type of student accordingly. 

//Header File*/

#include <iostream>
using namespace std;
#include <string.h>

class Student
{
	private:
		int rollno;
		string name;
		string address;
		int marks;
		char grade;
	public:
		Student(int r, string n, string a, int m, char g)
		{
			rollno = r;
			name = n;
			address = a;
			marks = m;
			grade = g;
		}
		void accept_general_details()
		{
			cout << "Enter rollno: ";
			cin >> rollno;
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter address: ";
			cin >> address;
			cout << "Enter marks: ";
			cin >> marks;
			cout << "Enter grade: ";
			cin >> grade;
		}
		void display_general_details()
		{
			cout << "Student Rollno           : " << rollno << endl;
			cout << "Student Name             : " << name << endl;
			cout << "Student Address          : " << address << endl;
			cout << "Marks obtained           : " << marks << endl;
			cout << "Grade obtained           : " << grade << endl;
		}
};

class Arts : public Student
{
	private:
		string language_name;
	public:
		Arts(int r, string n, string a, int m, char g, string lang) : Student(r, n, a, m, g)
		{
			language_name = lang;
		}
		void accept_arts_language()
		{
			cout << "Enter language opted: ";
			cin >> language_name;
		}
		void display_arts_language()
		{
			display_general_details();
			cout << "Arts Language opted      : " << language_name << endl;
		}	
};

class Science : public Student
{
	private:
		string science_name;
	public:
		Science(int r, string n, string a, int m, char g, string s) : Student(r, n, a, m, g)
		{
			science_name = s;
		}
		void accept_science_sub()
		{
			cout << "Enter science stream opted: ";
			cin >> science_name;
		}
		void display_science_sub()
		{
			cout << "Science stream opted     : " << science_name << endl;
		}	
};

class Engineering : public Student
{
	private:
		string engg_name;
	public:
		Engineering(int r, string n, string a, int m, char g, string e) : Student(r, n, a, m, g)
		{
			engg_name = e;
		}
		void accept_engg_sub()
		{
			cout << "Enter Engineering stream opted: ";
			cin >> engg_name;
		}
		void display_engg_sub()
		{
			display_general_details();
			cout << "Engineering stream opted : " << engg_name << endl;
		}	
};

class Engg_research : public Engineering
{
	private:
		string engg_research_topic;
		char grade_engg;
	public:
		Engg_research(int r, string n, string a, int m, char g, string e, string e_r, char g_e) : Engineering(r, n, a, m, g, e)
		{
			engg_research_topic = e_r;
			grade_engg = g_e;
		}
		void accept_engg_research()
		{
			cout << "Enter research topic(Engineering stream) for specialisation: ";
			cin >> engg_research_topic;
			cout << "Enter grade obtained: ";
			cin >> grade_engg;
		}
		void display_engg_research()
		{
			display_engg_sub();
			cout << "Research topic           : " << engg_research_topic << endl;
			cout << "Thesis grading           : " << grade_engg << endl;
		}	
};

class SandH_research : public Arts,Science
{
	private:
		string SandH_research_topic;
		char grade_SandH;
	public:
		SandH_research(int r, string n, string a, int m, char g, string lang, string s, string s_r, char g_s):Arts(r, n, a, m, g, lang),Science(r, n, a, m, g, s)
		{
			SandH_research_topic = s_r;
			grade_SandH = g_s;
		}
		void accept_SandH_research()
		{
			cout << "Enter research topic(Science and Humanities stream) for specialisation: ";
			cin >> SandH_research_topic;
			cout << "Enter grade obtained: ";
			cin >> grade_SandH;
		}
		void display_SandH_research()
		{
			display_arts_language();
			display_science_sub();
			cout << "Research topic           : " << SandH_research_topic << endl;
			cout << "Thesis grading           : " << grade_SandH << endl;
		}	
};
