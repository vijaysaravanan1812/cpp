//Main File
	#include<iostream>
using namespace std;
#include <string.h>
#include <stdlib.h>
#include <iomanip>
#include "key_value.h"

int main()
{
    int choice;
	string data,value;
    AVL <string>avl;

	cout<<"1.Insert key with value"<<endl;
	cout<<"2.Delete key"<<endl;
	cout<<"3.Display the Map"<<endl;
	cout<<"4.Search value of key"<<endl;
	cout<<"5.Update value to key"<<endl;
	cout<<"6.Frequency of searched keys"<<endl;
	cout<<"7.Depth of a key"<<endl;
	cout<<"8.Exit"<<endl;
	while (1)
	{
		cout << endl;
		cout<<"Enter your Choice: ";
		cin>>choice;
		switch(choice)
		{
		case 1:
			cout<<"Enter key to be inserted: ";
			cin>>data;
			cout<<"Enter value for the key: ";
			cin>>value;
			avl.insert(data, value);
			break;
		case 2:
			cout<<"Enter key to be deleted: ";
			cin>>data;
			avl.delete_element(data);
			break;
		case 3:
			cout<<"Balanced AVL Tree:"<<endl;
			avl.display(1);
			cout << endl;
			break;
		case 4:
			cout<<"Enter key to be search value: ";
			cin>>data;
			avl.search(data);
		    break;
		case 5:
			cout<<"Enter key to be updated: ";
			cin>>data;
			cout<<"Enter new value for the key: ";
			cin>>value;
			avl.update(data, value);
			break;
		case 6:
			cout<<" || " << "Key" << setw(19) << "  || " << "Value"  << setw(14) << " || " << "Frequency"  << setw(7) << " || "<< endl;
			cout<<"-------------------------------------------------------------"<<endl;
			avl.frequency();
			break;
		case 7:
			cout<<"Enter key to find depth: ";
			cin>>data;
			int depth;
			depth = avl.findDepth(data);
			cout << "Depth of key = " << depth << endl;
			break;
		case 8:
			exit(1);    
			break;
		default:
			cout<<"Wrong Choice"<<endl;
		}
	}
    return 0;
}
