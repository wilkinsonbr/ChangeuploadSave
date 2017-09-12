// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "stdio.h"
using namespace std;


int main()
{
	char students[25][100];
	int count=0;
	bool name = true;
	
	
	

START: while (name && count < 24)
	{
		cout << "Enter students " << count << " name" << endl;
		
		gets_s(students[count++]);
		
		
			cout << "Would you like to add another student?" << endl;
			cout << "Type 1 for Yes, Type 0 for No" << endl;
			cin >> name;
			cin.ignore();
			cin.clear();
			
		
		
	}
	
		   cout << "You have " << count << " Students" << endl;

    return 0;
}

