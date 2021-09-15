//Main Function

#include <iostream>
using namespace std;
#include <string.h>
#include "Student.cpp"

int main()
{
	Engg_research E(101,"Abi","No.7, 5th street, Guindy, Chennai",95,'A',"Electronics and Communication","Circuits",'B');			//Engg stream constructor
	SandH_research S(105,"Rita","No.11, 5th street, Adambakkam, Chennai",86,'B',"Tamil","Visual Communication","Animation",'C');	//S and H stream constructor
	
	cout << "---------ENGINEERING STREAM--------" << endl;
	E.display_engg_research();
	cout << endl << endl;
	
	cout << "---SCIENCE AND HUMANITIES STREAM---" << endl;
	S.display_SandH_research();
	
	return 0;
}

